#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n = 4;

	vector<int> v(n);

	for(int i = 0; i < n; ++i){
		cin >> v[i];
	}

	auto it1 = *max_element(v.begin(), v.end()-2);
	auto it2 = *max_element(v.begin()+2, v.end());

	sort(v.begin(), v.end());

	if((v[n-2] == it1 && v[n-1] == it2) || (v[n-2] == it2 && v[n-1] == it1)){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	
}

int main(){
	int t;
	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}