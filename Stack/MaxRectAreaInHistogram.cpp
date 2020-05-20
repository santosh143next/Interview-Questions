using namespace std;


 // } Driver Code Ends


// Function to return Maximum Rectangular area in a histogram
// arr[]: input array
// n: size of array
long getMaxArea(long long arr[], int n){
    
    // Your code here
    long long int area = 0;
    long long int max_area = 0;
    long long int top;
    int i=0;
    stack<int> s;
    while(i<n)
    {
        if(s.empty() || arr[s.top()]<=arr[i])
        {
            s.push(i++);
        }
        else 
        {
            top = s.top();
            s.pop();
            area = arr[top] * ( s.empty() ? i : (i-s.top()-1));
            
            if(area>max_area)
            {
                max_area = area;
            }
        }
    }
    while(s.empty()==false)
    {
        top = s.top();
            s.pop();
            area = arr[top] * (s.empty() ? i : (i-s.top()-1));
            
            if(area>max_area)
            {
                max_area = area;
            }
    }
    
    return max_area;
    
}

// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        cout<<getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends