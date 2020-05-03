#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to find the subarray with given sum k
// arr: input array
// n: size of array
void subarraySum(int arr[], int n, int s){
    
    // Your code here
    int curr_sum=arr[0],st=0;
    
    for(int i=1;i<=n;i++)
    {
        while(curr_sum>s && st<i-1)
        {
            curr_sum = curr_sum - arr[st];
            st++;
        }
        
        if(curr_sum==s)
        {
            cout<<st+1<<" "<<i;
            break;
        }
        
        if(i<n)
        {
            curr_sum = curr_sum + arr[i];
        }
        
    }
    if(curr_sum!=s)
    {
        cout<<"-1";
    }
    
    
}

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        subarraySum(arr, n, s);
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends