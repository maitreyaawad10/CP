#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
	ll n;
	cin >> n;

	ll a[n];

	for(ll i = 0; i < n; ++i){
		cin >> a[i];
	}

	ll min = a[0];

	for(ll i = 0; i < n; ++i){
		min = __gcd(min, a[i]);
	}

	cout << min * n << endl;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}