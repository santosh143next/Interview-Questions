using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    unordered_map<int,int> mp;
	    cin>>m>>n;
	    int x;
	    for(int i=0;i<m;i++)
	    {
	        cin>>x;
	        mp[x]++;
	    }
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        
	        if(mp.find(x)!=mp.end())
	        {
	            count++;
	            mp.erase(x);
	        }
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}