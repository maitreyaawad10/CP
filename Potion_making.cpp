#include <bits/stdc++.h>

using namespace std;

void solve(){
	int k;
	cin >> k;

	// int a = k;
	// int b = 100-k;

	// int c = __gcd(a, b);

	// a /= c;
	// b /= c;

	// cout << a + b << endl;


	int g = 100;
	int l = k;

	int a = __gcd(l, g);

	l /= a;
	g /= a;
	
	cout << g << endl;
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