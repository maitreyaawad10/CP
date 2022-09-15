#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll n, k, b, s;
	cin >> n >> k >> b >> s;

	if((s < (k*b)) || s > (k*b + (k-1)*n)){
		cout << -1 << endl;
	}

	else{
		ll a[n];

		a[0] = k*b;
		s = s-k*b;

		if(s > 0){
			a[0] = a[0] + min(k-1, s);
			s = s - min(k-1, s);
		}
		
		for(int i = 1; i < n; ++i){
			if(s > 0){
				a[i] = min(s, k-1);
				s = s - min(s, k-1);
			}

			else{
				a[i] = 0;
			}
		}

		for(int i = 0; i < n; ++i){
			cout << a[i] << " ";
		}
		cout << endl;
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