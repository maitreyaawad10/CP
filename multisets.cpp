#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, k;
		cin >> n >> k;

		multiset<ll> bags;

		for(int i = 0; i < n; ++i){
			ll c;
			cin >> c;
			bags.insert(c);
		}

		ll ans = 0;

		for(int i = 0; i < k; i++){
			auto it = --(bags.end());
			ll cmax = *it;
			ans = ans + cmax;
			bags.erase(it);
			bags.insert(cmax / 2);
		}

		cout << ans << endl;
	}


	return 0;
}