#include <bits/stdc++.h>

using namespace std;

void solve(){
	string s;
	cin >> s;

	int cnt = 0;

	for(int i = 1; i <= s.length(); ++i){
		if(s[i] != '0'){
			cnt++;
		}
	}

	cout << cnt << endl;

	vector<int> v;
	int units = 1;

	for(int i = s.length()-1; i >= 0; --i){
		
		if(s[i] != '0'){
			int a = s[i] - '0';
			v.push_back(a*units);		
		}

		units = units*10;
	}

	for(auto value : v){
		cout << value << " ";
	}
	
	cout << endl;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}