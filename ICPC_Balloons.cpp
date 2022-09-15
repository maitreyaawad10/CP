#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;

	vector<int> v(n);
	vector<int> v1 = {1, 2, 3, 4, 5, 6, 7};

	for(int i = 0; i < n; ++i){
		cin >> v[i];
	}	

	int cnt = 0;
	
	for(int i = 0; i < n; ++i){
		if(v[i] >= 1 && v[i] <= 7){
			v1.pop_back();
		}
		cnt++;
		if(v1.size() == 0){
			cout << cnt << endl;
			return;
		}
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