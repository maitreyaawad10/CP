#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;

	int a[n];
	map<int, int> mp;

	for(int i = 0; i < n; ++i){
		cin >> a[i];
		mp[a[i]]++;
	}

	vector<int> v;

	for(int i = 0; i <= 100; ++i){
		if(mp[i] > 1){
			for(int j = 2; j <= mp[i]; ++j){
				v.push_back(i);
			}
		}
	}	

	set<int> st;

	for(int i = 0; i < n; ++i){
		st.insert(a[i]);
	}

	for(auto value : st){
		cout << value << " ";
	}	

	for(auto v1 : v){
		cout << v1 << " ";
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