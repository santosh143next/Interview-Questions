#include <bits/stdc++.h>
using namespace std;

char nonrepeatingCharacter(string S);

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    
        char ans = nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
// Complete this function
char nonrepeatingCharacter(string s)
{
   //Your code here
   int h[26] = {0};
   
   int n=s.length();
   unordered_map<char,int> mp;
   
   
   for(int i=0;i<n;i++)
   {
       mp[s[i]]++;
   }
   
   for(int i=0;i<n;i++)
   {
       if(mp[s[i]]==1)
       {
           return s[i];
       }
   }
   
   return '$';
   
}
