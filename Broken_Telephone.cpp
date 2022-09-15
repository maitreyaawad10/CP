#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	
	while(tc--)
	{
        set <int> ans;
	    
	    int n;
	    cin>>n;

	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    {
	       cin>>arr[i];
	    }
	    
	    for(int j=1;j<n;j++)
	    {
	        if(arr[j]!=arr[j-1])
	        {
	            ans.insert(j);
	            ans.insert(j-1);
	        }
	    }
	    
	    cout<<ans.size()<<endl;
	}

	return 0;
}