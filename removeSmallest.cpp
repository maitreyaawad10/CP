#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;

	vector<int> a(n);

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	for(auto it = a.begin(); it < a.end()-1; ++it){
		auto j = it+1;

		if((abs((*it) - (*j))) <= 1){
			continue;
		}
		else{
			cout << "NO" << endl;
			return;
		}
	}
	cout <<"YES" << endl;	
}

int main(){
	int t;
	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}