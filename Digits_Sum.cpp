#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
	ll n;
	cin >> n;


	if(n%10 == 9){
		cout << (n / 10) + 1 << endl;
	}
	else{
		cout << n / 10 << endl;
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