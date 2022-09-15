#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
void solve(){
	ll n;
	cin >> n;
 
	ll x = n / 3;

	if(x + 2*x == n){
		cout << x << " " << x << endl;
	}

	else if((x+1) + 2*x == n){
		cout << x+1 << " " << x << endl;
	}

	else{
		cout << x << " " << x+1 << endl;
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