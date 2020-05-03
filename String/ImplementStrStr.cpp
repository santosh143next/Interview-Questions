#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends
/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
     //Your code here
     int n = s.length();
     int k = x.length();
     int j;
     for(int i=0;i<=n-k;i++)
     {
         for(j=0;j<k;j++)
         {
             if(s[i+j]!=x[j])
             {
                 break;
             }
         }
         if(j==k)
         {
             return i;
             break;
         }
     }
     return -1;
}