#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	ll n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	ll drinks = (k * l) / nl;
	ll limes = c * d;
	ll salt = p / np;

	ll ans = min(min(drinks, limes), salt);

	cout << ans / n << endl;

	return 0;
}