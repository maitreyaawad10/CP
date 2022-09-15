#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
	ll a,b,c,d;
	cin >> a >> b >> c >> d;

	ll x = a*d;
	ll y = c*b;

	if(x == y){
		cout << 0 << endl;
	}

	else if((x != 0 && y%x == 0) || (y != 0 && x%y == 0)){
		cout << 1 << endl;
	}

	else{
		cout << 2 << endl;
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