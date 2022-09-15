#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;

	int a[n];

	for(int i = 1; i <= n; ++i){
		cin >> a[i];		
	}

	int max_e = a[0], min_e = 1e9, index1 = 0, index2 = 0;

	for(int i = 1; i <= n; ++i){
		if(a[i] > max_e){
			max_e = a[i];
			index1 = i;
		}

		if(a[i] < min_e){
			min_e = a[i];
			index2 = i;
		}
	}

	// cout << index1 << " " << index2 << endl;	

	int steps1 = 0, steps2 = 0;

	if(n%2 == 0){
		if(index1 == n/2){
			steps1 = index1;
		}
		else if(index2 == n/2){
			steps2 = index2;
		}
		else{
			steps1 = index1;
			steps2 = index2;
		}

		cout << steps1+steps2 << endl;

		return;
	}



	if(index1 > n/2 && index2 > n/2){
		steps1 = n - index1 + 1;
		steps2 = n - index2 + 1;

		cout << max(steps1, steps2) << endl;

		return;
	}

	else if((index1 > n/2 && index2 < n/2)){
		steps1 = n - index1 + 1;
		steps2 = index2;

		cout << steps1 + steps2 << endl;

		return;
	}

	else if((index1 < n/2 && index2 > n/2)){
		steps1 = index1;
		steps2 = n - index2 + 1;

		cout << steps1 + steps2 << endl;

		return;
	}

	else{
		steps1 = index1;
		steps2 = index2;

		cout << max(steps1, steps2) << endl;
	
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