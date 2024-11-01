//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low < high){
            //find the pivot index
            int pIndex = partition(arr,low,high);
            //sort the individual left part of the pivot
            quickSort(arr,low,pIndex-1);
            //sort the individual right part of the pivot
            quickSort(arr,pIndex+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot = arr[low];
       int i = low;
       int j = high;
       while(i < j){
           //check smaller elements
           while(arr[i] <= pivot && i < high){
               i++;
           }
           while(arr[j] > pivot && j > low ){
               j--;
           }
           if(i < j){
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
           
       }
       //swap pivot with j(since j stands at the unallowed region)
        int temp = arr[j];
        arr[j] = arr[low];
        arr[low] = temp;
        return j;
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends