#include <bits/stdc++.h>

using namespace std;

void solve(){
	string s;
	cin >> s;

	int a = s[0] - '0';

	int ans = (a-1)*10;

	int l = s.length();

	if(s.length() == 1){
		ans += 1;
	}

	else if(s.length() == 2){
		ans += 3;
	}

	else if(s.length() == 3){
		ans += 6;
	}

	else {
		ans += 10;
	}

	cout << ans << endl;

	// cout << ans + l*(l+1) / 2 << endl;
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