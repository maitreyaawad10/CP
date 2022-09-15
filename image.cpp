#include <bits/stdc++.h>

using namespace std;

void solve(){
	char a,b,c,d;

	set<char> st;

	cin >> a >> b >> c >> d;

	st.insert(a);
	st.insert(b);
	st.insert(c);
	st.insert(d);

	cout << st.size()-1 << endl; 
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