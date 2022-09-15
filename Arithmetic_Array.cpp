#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;

	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	int sum = accumulate(a, a+n, 0);

	if(sum == n){
		cout << 0 << endl;
	}

	else if(sum < n){
		cout << 1 << endl;
	}

	else{
		cout << sum - n << endl;
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