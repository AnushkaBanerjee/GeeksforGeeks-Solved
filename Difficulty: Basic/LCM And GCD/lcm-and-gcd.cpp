//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long findGcd(long long a,long long b){
        // Continue loop as long as both
    // a and b are greater than 0
        while(a > 0 && b > 0){
            if(a>b) a%=b;
            else b%=a;
        }
        if(a == 0) return b;
        else return a;
    }
    long long findLcm(long long a, long long b,long long gcd){
        if(a == 0 || b == 0) return 0;
        else return (a*b)/gcd;
    }
    vector<long long> lcmAndGcd(long long a, long long b) {
        // code here
        vector<long long> lcmAndGcdAnswer;
        long long gcd = findGcd(a,b);
        long long lcm = findLcm(a,b,gcd);
        lcmAndGcdAnswer.push_back(lcm);
        lcmAndGcdAnswer.push_back(gcd);
        return lcmAndGcdAnswer;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A, B;

        cin >> A >> B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends