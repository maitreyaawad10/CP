#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    ll n;
	    cin >> n;
	    
	    ll a[n-1];
	    
	    for(int i = 0; i < n-1; i++){
	    	cin >> a[i];
	    }

	    ll sum = 0;

	    sort(a, a+(n-1));

	    for(int i = 0; i < n-1; i++){
	    	sum += a[i];
	    }

	    cout << sum + a[n-2] << endl;
	}
	
	return 0;
}
