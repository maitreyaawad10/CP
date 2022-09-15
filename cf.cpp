#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
	ll n;
	cin >> n;

	for(ll i = n; i > 0; ++i){
		ll digSum = 0;
		ll temp1 = i;
		ll temp2 = temp1;

		while(temp1 > 0){
			digSum = digSum + (temp1 % 10);
			temp1 = temp1 / 10;
		}

		ll ans = __gcd(temp2, digSum);

		if(ans > 1){
			cout << i << endl;
			return;
		}
	}
}

int main(){
	int t;
	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}