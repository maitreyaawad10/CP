#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;

	string s;
	cin >> s;

	map<char, int> mp;

	for(int i = 0; i < n; ++i){
		mp[s[i]]++;

		if(mp[s[i]] > 1 && s[i] != s[i-1]){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;	
}

int main(){
	int t;
	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}