#include<bits/stdc++.h>
using namespace std;
#define N 50


 // } Driver Code Ends
/*  Function to rotate matrix by 90 degrees
*   n: input for matrix size
*   N: size defined globally
*/
void rotateby90(int n, int a[][N]){
    
    // Your code here
    int b[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[i][j] = a[j][i];
        }
    }
    int st=0,l=n-1;
    for(int i=0;i<n;i++)
    {
        st = 0,
        l = n-1;
        for(int j=0;j<n/2;j++)
        {
            swap(b[st][i],b[l][i]);
            st++;
            l--;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j] = b[i][j];
        }
    }
    
    
    
    
    
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t; //inputting testcases
	while(t--)
	{
		int n;
		cin>>n; //inputing n for square matrix
		int a[N][N],i,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j]; //Inputting the matrix
			}
		}
		
		rotateby90(n, a);
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<a[i][j]<<" "; //printing the resultant matrix
			}
		}
		cout<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends