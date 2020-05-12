#include <bits/stdc++.h>
using namespace std;


void insert(stack<int> &s,int x)
{
    //Your code here
    s.push(x);
}

void remove(stack<int> &s)
{
    
    //Your code here
    s.pop();
}

void headOf_Stack(stack<int> &s)
{
    int x=s.top();//Your code here
    cout<<x<<" "<<endl; 
}

bool find(stack<int> s, int val)
{
    while(s.size())
    {
        if(s.top()==val)
        {
            return true;
        }
        s.pop();
    }
    return false;
}

// { Driver Code Starts.

int main() {
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    stack<int> s;
	    int q;
	    cin>>q;
	    while(q--){
	        char ch;
	        cin>>ch;
	        
	        if(ch=='i')
	        {
	            int x;
	            cin>>x;
	            
	            insert(s,x);
	            
	        }
	        else if(ch=='r')
	        {
	            remove(s);
	        }
	        else if(ch=='h')
	        {
	            headOf_Stack(s);
	        }
	        else if(ch=='f')
	        {
	            int x;
	            cin>>x;
	            if(find(s,x))
	            cout << "Yes";
	            else cout << "No";
	            cout << endl;
	        }
	        
	    }
	}
	return 0;
}


  // } Driver Code Ends