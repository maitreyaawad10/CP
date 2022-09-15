#include <bits/stdc++.h>

using namespace std;

void solve(){
	int a1, a2, b1, b2, f1, f2;
	cin >> a1 >> a2 >> b1 >> b2 >> f1 >> f2;

	if(a1 == b1 && b1 == f1){
		if(f2 >= min(a2,b2) && f2 <= max(a2,b2)){
			cout << abs(a2-b2) + 2 << endl;
		}
		else{
			cout << abs(a2-b2) << endl;
		}
	}

	else if(a2 == b2 && b2 == f2){
		if(f1 >= min(a1,b1) && f1 <= max(a1,b1)){
			cout << abs(a1-b1) + 2 << endl;
		}
		else{
			cout << abs(a1-b1) << endl;
		}
	}

	else{
		cout << abs(a1-b1) + abs(a2-b2) << endl;
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