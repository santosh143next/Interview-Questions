#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Functio to find first smallest positive
// missing number in the array
int missingNumber(int arr[], int n) { 
    
    // Your code here
    sort(arr,arr+n);
    int num = 1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            num++;
        }
    }
 return num;
    
} 

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        cout<<missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends