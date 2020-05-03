
#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n);
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}




int findLongestConseqSubseq(int arr[], int n)
{
  //Your code here
  sort(arr,arr+n);
  int count=1,mx = INT_MIN;
  for(int i=0;i<n;i++)
  {
      if(arr[i+1]-arr[i]==1)
      {
          count++;
      }
      else 
      {
          mx = max(mx,count);
          count=1;
      }
      
  }
  return mx;
  
  
  
}