#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;

	cout << n + (n/2)*2 + (n/3)*2 << endl;
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