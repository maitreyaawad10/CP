#include <bits/stdc++.h>

using namespace std;

#define lli long long int

void solve(){
	lli n, k, v;
	cin >> n >> k >> v;

	vector<lli> a(n);

	for(int i = 0; i < a.size(); ++i){
		cin >> a[i];
	}

	lli sum = 0;
	lli temp = accumulate(a.begin(), a.end(), sum);
    
    if(((n+k)*v - temp) / k < 0){
        cout << -1 << endl;
        return;
    }
    
	else if(((n+k)*v - temp) / k > 0 && ((n+k)*v - temp) % k == 0){
		cout << ((n+k)*v - temp) / k << endl;
	}

	else{
		cout << -1 << endl;
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