#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;

	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	sort(a, a+n);

	int max_f = 0;

	for(int i = 0; i < n;){
		int j = i;
		while(a[i] == a[j] && i < n){
			i++;
		}
		max_f = max(max_f, i-j);
	}		
	if(max_f <= (n+1)/2){
		cout << "YES" << endl;
		return;
	}
	else{
		cout << "NO" << endl;
		return;
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