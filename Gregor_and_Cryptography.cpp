#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
	ll n;
	cin >> n;

	n--;

	cout << n/2 << " " << n << endl;
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