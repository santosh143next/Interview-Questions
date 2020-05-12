#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to print string after removing consecutive duplicates

string reverse(string s)
{
    string str = "";
    for(int i=s.length()-1;i>=0;i--)
    {
        str = str + s[i];
    }
    return str;
}


string removeConsecutiveDuplicates(string s)
{
    // Your code here
    string str = "";
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        st.push(s[i]);
    }
    char c = st.top();
    while(st.size()-1)
    {
        st.pop();
        if(st.top()!=c)
        {
            str = str + c;
        }
        c = st.top();
    }
    str = str + c;
    return reverse(str);
    
}

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        cout<<removeConsecutiveDuplicates(s)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends