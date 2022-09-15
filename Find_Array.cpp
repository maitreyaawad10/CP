#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;

	if(n == 1){
		cout << 1 << endl;
		return;
	}

	int cnt = 0, x = 2;
	while(cnt < n){
		cout << x << " ";
		cnt++;
		x++;
	}

	cout<< endl;
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