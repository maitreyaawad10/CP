#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		long long n;
		cin >> n;

		if(n == 1){
			cout << 0 << endl;
		}

		else{
			if(n%2 == 0){
				long long sum = ((n-1)*(n/2)) + (n/2);
				cout << sum << endl;
			}

			else{
				long long sum = ((n-1)*(n/2)) + (n/2)*2;
				cout << sum << endl;
			}
		}
	}

	return 0;
}