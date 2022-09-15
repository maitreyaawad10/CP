#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
	ll n;
	cin >> n;

	if(n >= 1 && n < 10){
		cout << n << endl;
		return;
	}

	string s = to_string(n);

	ll len = s.length();
	ll number = 0;
	
	while(len > 0){
		number = number*10 + 1;
		len--;
	}

	ll ans = 0;

	if(number > n){
		number /= 10;

		while(number/10 > 0){
			ans += 9;
			number /= 10;
		}

		cout << ans+9 << endl;
		return;
	}

	else{
		ans = n / number;
		
		while(number/10 > 0){
			ans += 9;
			number /= 10;
		}

		cout << ans << endl;
		return;
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