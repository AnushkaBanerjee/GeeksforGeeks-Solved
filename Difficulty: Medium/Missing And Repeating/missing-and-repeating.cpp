//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int N) {
        // code here
        long long n = N;
        long long SN = (n*(n+1))/2;
        long long S2N =(n*((n+1)*(2*n+1)))/6;
        long long S = 0,S2 = 0;
        for(int i = 0;i < n;i++){
            S+= (long long)arr[i];
            S2+= (long long)arr[i]*(long long)arr[i];
        }
        //val1 =  S-SN , val2 = S2 - S2N
        long long val1 = S-SN;
        long long val2 = S2 - S2N;
        
        //find x+y
        val2 = val2/val1;
        
        long long x = (val1 + val2)/2;
        long long y = x - val1;
        
        return {(int)x,(int)y};
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends