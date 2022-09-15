#include <bits/stdc++.h>

using namespace std;

void solve(){
	string s;
	cin >> s;

	int len = s.length();

	char min = 'z';
	int ind = 0;

	for(int i = 0; i < len; ++i){
		if(s[i] < min){
			min = s[i];
			ind = i;
		}
	}

	string new_s;

	for(int i = 0; i < len; ++i){
		if(i != ind){
			new_s.push_back(s[i]);
		}
	}		

	cout << s[ind] << " " << new_s << endl;
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