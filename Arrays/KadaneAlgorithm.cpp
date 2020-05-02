#include<bits/stdc++.h>
using namespace std;

// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int curr_sum=INT_MIN,total_sum=0;
    
    for(int i=0;i<n;i++)
    {
        total_sum = total_sum + arr[i];
        
        
        if(total_sum>=curr_sum)
        {
            curr_sum = total_sum;
        }
        
        if(0>total_sum)
        {
            total_sum = 0;
        }
        
    }
    
    return curr_sum;
}


int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}