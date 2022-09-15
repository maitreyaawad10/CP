#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;

	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	int cnt = 0;

	for(int i = 0; i < n-1; ++i){
		// int j = i+1;

		if((i == 0 && a[i] != a[i+1]) || (i == n-1 && a[i] != a[i-1])){
			cnt++;
		}

		else if(a[i] != a[i+1]){
			cnt++;
		}

		else if(a[i] != a[i-1]){
			cnt++;
		}

		// else{
		// 	continue;
		// }
	
	}

	cout << cnt << endl;	
}

int main(){
	int t;
	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}