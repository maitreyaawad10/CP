#include <bits/stdc++.h>

using namespace std;

#define lli long long int

void solve(){
    int n, x, y; cin >> n >> x >> y;
		multiset<int> s;
		for (int i = 0; i < n; ++i) {
			int a; cin >> a;
			s.insert(a);
		}
		while (y > 0) {
			int u = *s.begin();
			int v = u^x;
			
			if (v < u) 
				break;
			
			--y;
			s.erase(s.begin());
			s.insert(v);
		}
		if (y%2 == 1) {
			int u = *s.begin();
			int v = u^x;
			s.erase(s.find(u));
			s.insert(v);
		}
		for (int u : s) cout << u << ' ';
		cout << '\n';
}

int main() {
	// your code goes here
	lli t; cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}