#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
	ll s;
	cin >> s;

	ll sum = 0, cnt = 0, x = 1;
	
	while(sum < s){
		sum += x;
		x += 2;
		cnt++;
	}

	cout << cnt << endl;
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