#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;

	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	int count = 0;

	for(int i = 0; i < n-1; ++i){
		if((i == 0 && a[i] != a[i+1]) || (i == n-1 && a[i] != a[i-1])){
			count++;
		}

		else if(a[i] != a[i+1]){
			count++;
		}

		else if(a[i] != a[i-1]){
			count++;
		}
	}

	cout << count << endl;	
}

int main(){
	int t;
	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}
