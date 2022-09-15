#include <bits/stdc++.h>

using namespace std;

void solve(){
	string s;
	cin >> s;

	int len = s.length();

	for(int i = 0; i < len-2; ++i){
		if((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') || (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')){
			cout << "Good" << endl;
			return;
		}
	}

	cout << "Bad" << endl;
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