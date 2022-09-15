#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
	int n;
	cin >> n;

	ll a[n];
	ll b[n];

	for(ll i = 0; i < n; ++i){
		cin >> a[i];
	}

	for(ll i = 0; i < n; ++i){
		cin >> b[i];
	}

	ll x = 0, y = 0;
	
	for(ll i = 0; i < n; ++i){
		if(a[i] > 0 && b[i] > 0){
			y = y + (a[i] - b[i]);
			x = x + abs(a[i] - b[i]);
		}
	}

	if(y == 0){
		cout << x/2 << endl;
	}
	else{
		cout << -1 << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t;
	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}