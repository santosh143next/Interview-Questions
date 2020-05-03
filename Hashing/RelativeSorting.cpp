using namespace std;

void RelativeSorting(int arr1[],int arr2[],int m,int n)
{
    unordered_map<int,int> mp;
    vector<int> v;
    for(int i=0;i<m;i++)
    {
        mp[arr1[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(mp[arr2[i]]>0)
        {
            while(mp[arr2[i]]--)
            {
                v.push_back(arr2[i]);
            }
        }
        mp[arr2[i]] = 0;
    }
    
    sort(arr1,arr1+m);
    
    for(int i=0;i<m;i++)
    {
        if(mp[arr1[i]]>0)
        {
            v.push_back(arr1[i]);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    int arr1[m],arr2[n];
	    for(int i=0;i<m;i++)
	    {
	        cin>>arr1[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr2[i];
	    }
	    RelativeSorting(arr1,arr2,m,n);
	}
	return 0;
}