#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int ans = __builtin_popcount(n);
		cout << ans-1 << endl;
	}

	return 0;
}
