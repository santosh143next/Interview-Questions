#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return if the paranthesis are balanced or not
bool ispar(string x)
{
    // Your code here
    stack<char> s;
    int n = x.size();
    int f = 1;
    for(int i=0;i<n;i++)
    {
        if(x[i]=='[' || x[i]=='(' || x[i]=='{')
        {
            s.push(x[i]);
        }
        else if(x[i]==']')
        {
            if(s.empty())
            {
                return 0;
            }
            else if(s.top()=='[')
            {
                s.pop();
            }
            else 
            return 0;
        }
        else if(x[i]=='}')
        {
            if(s.empty())
            {
                return 0;
            }
            else if(s.top()=='{')
            {
                s.pop();
            }
            else 
            return 0;
        }
        else if(x[i]==')')
        {
            if(s.empty())
            {
                return 0;
            }
            else if(s.top()=='(')
            {
                s.pop();
            }
            else 
            return 0;
        }
    }
    if(s.empty())
    return 1;
    else 
    return 0;
}


// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends