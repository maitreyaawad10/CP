#include <bits/stdc++.h>

using namespace std;

const int N = 1e5;
int a[N];
int pf[N];

int main(){
	int n;
	cin >> n;

	for(int i = 1; i <= n; ++i){
		cin >> a[i];
		pf[i] = pf[i-1] + a[i];
	}

	int q;
	cin >> q;

	while(q--){
		int l, r;
		cin >> l >> r;

		cout << pf[r] - pf[l-1]  << endl;
	}

	return 0;
}


// int main(){
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);

// 	int n;
// 	cin >> n;

// 	for(int i = 1; i <= n; ++i){
// 		cin >> a[i];
// 	}

// 	int q;
// 	cin >> q;

// 	while(q--){
// 		int l, r;
// 		cin >> l >> r;

// 		long long sum = 0;

// 		for(int i = l; i <= r; ++i){
// 			sum += a[i];
// 		}

// 		cout << sum << endl;
// 	}

// 	return 0;
// }



