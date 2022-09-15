/*
Given T test cases. In easch test case a number N. Print it's factorial for each test case % M.
M = 10^9 + 7

1 <= T <= 10^5
1 <= N <= 10^5
*/

#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int M = 1e9+7;
const int N = 1e5+10;
ll fact[N];

int main(){
	int t;
	cin >> t;

	fact[0] = fact[1] = 1;
	for(int i = 2; i < N; i++){
		fact[i] = fact[i - 1] * i;
	}

	while(t--){
		int n;
		cin >> n;

		cout << fact[n] << endl;	
	}

	return 0;
}