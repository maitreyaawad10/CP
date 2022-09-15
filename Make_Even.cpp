#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;

	int new_n = n;

	if(n % 2 == 0){
		cout << 0 << endl;
		return;
	}

	if(n % 2 != 0){
		if(n < 10){
			cout << -1 << endl;
			return;
		}

		int flag = 0;

		while(n > 0){
			int r = n % 10;
			if(r%2 == 0 ){
				flag = 1;
			}
			n /= 10;
		}

		if(flag == 0){
			cout << -1 << endl;
			return;
		}
	}

	string s = to_string(new_n);

	if(((s[0]-'0') % 2 == 0) && ((s[s.length()-1]-'0') % 2 != 0)){
		cout << 1 << endl;
	}
	else{
		cout << 2 << endl;
	}
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