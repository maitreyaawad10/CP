#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;

	string array[3][n];

	map<string, int> mp;

	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < n; ++j){
			cin >> array[i][j];
			mp[array[i][j]]++;
		}
	}

	for(int i = 0; i < 3; ++i){
		int total = 0;
		for(int j = 0; j < n; ++j){
			if(mp[array[i][j]] == 1){
				total += 3;
			}
			else if(mp[array[i][j]] == 2){
				total += 1;
			}
		}

		cout << total << " ";
	}
	
	cout << endl;
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