#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;

	double a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}	

	sort(a, a+n, greater<int>());

	long long sum = 0;
	double avg = 0.0;

	for(int i = 1; i < n; ++i){
		sum += a[i];
	}	

	avg = sum / (double)(n-1);

	double ans = a[0] + avg;

	cout << setprecision(11) << ans << endl;
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
