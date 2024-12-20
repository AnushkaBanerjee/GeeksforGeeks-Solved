//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
class Solution
{
    public:
    int select(int arr[], int i,int n)
    {
        // code here such that selectionSort() sorts arr[]
        int min_index = i;
        for(int j = i+1;j < n;j++){
            if(arr[j]<arr[min_index]) min_index = j;
        }
        return min_index;
    }
     
    void selectionSort(int arr[], int n)
    {   //4 1 3 9 7
       //code here
       for(int i = 0;i < n-1;i++){
           int min_index = select(arr,i,n);//1
           if(min_index!=i){
               int temp = arr[min_index];
               arr[min_index] = arr[i];
               arr[i] = temp;
           }
       }
    }
};

//{ Driver Code Starts.
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends