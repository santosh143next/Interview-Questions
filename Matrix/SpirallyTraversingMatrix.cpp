#include <iostream>
using namespace std;

#define SIZE 30

void spirallyTraverse(int m, int n, int ar[SIZE][SIZE]);

int main() {
	int T = 0;
	
	scanf("%d",&T);
	
	while(T--)
	{
        int m,n;
        scanf("%d",&m);
        scanf("%d",&n);
	    int ar[SIZE][SIZE] = {{0}};
	    int i = 0;
	    int j = 0;
	    int row = 0;
	    int col = 0;
	    
	    for(i=0; i<m; i++)
	    {
	        for(j=0; j<n; j++)
	        {
	            scanf("%d",&ar[i][j]);
	        }
	    }
	    
	    spirallyTraverse(m, n, ar);
	    cout<<endl;
	   
	}
	return 0;
}// } Driver Code Ends
//Complete this function
void spirallyTraverse(int m, int n, int ar[SIZE][SIZE]){
    //Your code here
    int k=0,l=0,i;
    
    while(k<m && l<n)
    {
        for(i=l;i<n;i++)
        {
            cout<<ar[k][i]<<" ";
        }
        k++;
        
        for(i=k;i<m;i++)
        {
            cout<<ar[i][n-1]<<" ";
        }
        n--;
        
        if(k<m)
        {
            for(i=n-1;i>=l;i--)
            {
                cout<<ar[m-1][i]<<" ";
            }
            m--;
        }
        
        if(l<n)
        {
            for(i=m-1;i>=k;i--)
            {
                cout<<ar[i][l]<<" ";
            }
            l++;
        }
        
    }
    
    
}
