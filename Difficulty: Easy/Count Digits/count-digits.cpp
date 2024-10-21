//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int count = 0,lastDigit = 0;
        int ogNo = N;
        while(N>0){
            lastDigit = N%10;
            //cout<<lastDigit<<endl;
            if(lastDigit!=0 && ogNo%lastDigit == 0) count++;
            //cout<<count<<endl;
            N = N/10;
        }
        return count;
       
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends