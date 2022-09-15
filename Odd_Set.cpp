#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;

	vector<int> v(2*n);

	for(int i = 0; i < 2*n; ++i){
		cin >> v[i];
	}

	int cnt_e = 0, cnt_o = 0;

	for(int i = 0; i < 2*n; ++i){
		if(v[i] % 2 == 0){
			cnt_e++;
		}
		else{
			cnt_o++;
		}
	}

	if(cnt_e == cnt_o){
		cout << "YES" << endl;
	}	
	else{
		cout << "NO" << endl;
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