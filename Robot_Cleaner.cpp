#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, m, rb, cb, rd, cd;
	cin >> n >> m >> rb >> cb >> rd >> cd;

	if(rb > rd && cb > cd){
		cout << abs(cb - cd) + 2*	 << endl;
	}	

	else if(rb < rd && cb < cd){
		cout << min(abs(rb-rd), abs(cb-cd)) << endl;
	}

	else if(rb == rd || rb == cd || cb == rd || cb == cd){
		cout << 0 << endl;
	}

	else{
		cout << max(abs(rb - rd), abs(cb - cd)) << endl;
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