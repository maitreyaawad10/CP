#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
	int n;
	cin >> n;

	vector<ll> v(n);

	for(int i = 0; i < n; ++i){
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	auto it1 = *max_element(v.begin(), v.end());
	auto it2 = *min_element(v.begin()+1, v.end());

	cout << it1*it2 << endl;	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}