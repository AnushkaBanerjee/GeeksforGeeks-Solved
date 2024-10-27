//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int n){
        //code here
        int count = 0;
        int k = n;
        while(n > 0){
            int lastDigit = n%10;
            if(lastDigit!= 0 && k % lastDigit == 0){
                count++;
            }
            n = n/10;
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
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends