//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int upperBound(vector<long long> &arr,  long long n,long long x) {
    long long low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        long long mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] <= x) {
            ans = mid;
            low = mid + 1; // look on the right
           
        }
        else {
             //look for smaller index on the left
            high = mid - 1;
        }
    }
    return ans;
}
    int findFloor(vector<long long> &v, long long n, long long x) {

        // Your code here
        int idx = upperBound(v,n,x);
        return idx;
    }
};


//{ Driver Code Starts.

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long x;
        cin >> x;

        vector<long long> v;

        for (long long i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            v.push_back(temp);
        }
        Solution obj;
        cout << obj.findFloor(v, n, x) << endl;
    }

    return 0;
}
// } Driver Code Ends