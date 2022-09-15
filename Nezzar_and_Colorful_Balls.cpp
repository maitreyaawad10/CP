#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;

	map<int, int> mp;
	int a[n];

	for(int i = 1; i <= n; ++i){
		cin >> a[i];
		mp[a[i]]++;
	}

	int max = mp[a[1]];
	
	for(int i = 1; i <= n; ++i){
		if(mp[i] >= max){
			max = mp[i];
		}
	}	

	cout << max << endl;
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