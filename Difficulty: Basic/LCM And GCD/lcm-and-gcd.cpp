//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long findGcd(long long a, long long b) {
    // Continue loop as long as both
    // a and b are greater than 0
    while(a > 0 && b > 0) {
        // If a is greater than b,
        // subtract b from a and update a
        if(a > b) {
             // Update a to the remainder
             // of a divided by b
            a = a % b;
        }
        // If b is greater than or equal
        // to a, subtract a from b and update b
        else {
            // Update b to the remainder
            // of b divided by a
            b = b % a; 
        }
    }
    // Check if a becomes 0,
    // if so, return b as the GCD
    if(a == 0) {
        return b;
    }
    // If a is not 0,
    // return a as the GCD
    return a;
}

long long findLcm (long long gcd,long long a,long long b){
   return (a*b)/gcd;
}


    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long> v;

        
    //gcd
    long long gcd = findGcd(A,B);
    long long lcm = findLcm(gcd,A,B);
    v.push_back(lcm);
    v.push_back(gcd);
    return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends