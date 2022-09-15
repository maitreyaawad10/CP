#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
	ll n, m, sx, sy, d;
	cin >> n >> m >> sx >> sy >> d;

	if((sx - d > 1 && sy + d < m) || (sy - d > 1 && sx + d < n)){
		cout << n+m-2 << endl;
		return;
	} 

	cout << -1 << endl;
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