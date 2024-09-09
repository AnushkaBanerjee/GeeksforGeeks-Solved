//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	long long root(int n,int digit,int m){
	    long long pow = 1;
	    for(int i = 1;i <= n;i++){
	        pow*=digit;
	        if(pow > m) break;
	    }
	   return pow;
	}
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int low = 1;
	    int high = m;
	    while(low<=high){
	        int mid = (low+high)/2;
	        if(root(n,mid,m) == (long long)m) return mid;
	        else if(root(n,mid,m) > (long long)m) high = mid-1;
	        else low = mid+1;
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends