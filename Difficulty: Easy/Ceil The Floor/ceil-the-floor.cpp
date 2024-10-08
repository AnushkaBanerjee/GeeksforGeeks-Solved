//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    int floor(vector<int> &arr,int x){
        
        int n = arr.size();
        int low = 0,high = n-1;
        int ans = -1;
        while(low <= high){
            int mid  = low + (high - low)/2;
            if(arr[mid] <= x){//check whether element is immediately lesser than x i.e the greatest element lesses than x
                ans = arr[mid];
                low = mid + 1;//if found move to the right
                
            }
            else{
                high = mid - 1;//if not move to left
            }
        }
        return ans;
    }
    int ceil(vector<int> &arr,int x){
        int n = arr.size();
        int low = 0,high = n-1;
        int ans = -1;
        while(low <= high){
            int mid  = low + (high - low)/2;
            if(arr[mid] >= x){//check whether element is the immediate greatest of x i.e smallest element larger than x
                ans = arr[mid];
                high = mid - 1;//if found search further left
                
               
            }
            else{
                 low = mid + 1;//if not search right
            }
        }
        return ans;
    }
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int f = floor(arr,x);
        int c = ceil(arr,x);
        return {f,c};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends