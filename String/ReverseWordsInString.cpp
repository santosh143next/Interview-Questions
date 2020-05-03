#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

void reverseWords(char*);

/* Driver function to test above functions */
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[10000];
        cin >> s;
        reverseWords(s);
        cout<<endl;
    }
}// } Driver Code Ends
/*Function to reverse words*/
string reverse(string s)
{
    reverse(s.begin(),s.end());
    return s;
}

void reverseWords(char *s) {
    
    // Your code here
    string ns = "";
    int l = strlen(s);
    for(int i=0;i<l;i++)
    {
        ns = ns + s[i];
    }
    ns = reverse(ns);
    
    string r = "";
    for(int i=0;i<l;i++)
    {
        if(ns[i]!='.')
        {
            r = r + ns[i];
        }
        if(ns[i]=='.')
        {
            r = reverse(r);
            cout<<r<<'.';
            r = "";
        }
    }
    cout<<reverse(r);
}
