// Program to find best buying and selling days

#include <bits/stdc++.h>
using namespace std;
 

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n)
{
    
    if (n == 1) 
		return; 
    int count=0;
	int i = 0; 
	while (i < n - 1) { 
		while ((i < n - 1) && (price[i + 1] <= price[i])) 
			i++; 

		if (i == n - 1) 
			break; 

		int buy = i++; 

		while ((i < n) && (price[i] >= price[i - 1])) 
			i++; 

		int sell = i - 1; 

		cout <<'('<<buy<<" "<<sell<<')'<<" ";
		count++;
	} 
	if(count==0)
	cout<<"No Profit";
    
}

// { Driver Code Starts.
 
// Driver program to test above functions
int main()
{   
    
    int price[10000],n,i,T;
    
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&price[i]);
    // fucntion call
    stockBuySell(price, n);
    cout<<endl;
    }
    return 0;
}  // } Driver Code Ends