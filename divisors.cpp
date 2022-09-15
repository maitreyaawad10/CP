#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	int sum = 0, cnt = 0;

	// Time Complexity ==>> O(sqrt(N))
	for(int i = 1; i * i <= n; ++i){
		if(n % i == 0){
			cout << i << " " << n/i << endl;
			cnt++;
			sum += i;	

			if(i != n/i){
				cnt += 1;
				sum += n/i;
			}
		}
	}

	cout << cnt << " " << sum << endl;

	return 0;
}