/*
GIVEN AN ARRAY OF N INTEGERS. GIVEN Q QUERIES AND IN EACH QUERY GIVEN L AND R, PRINT SUM OF
ARRAY ELEMENTS FROM INDEX L TO INDEX R.(L, R INCLUDED)

CONSTRAINTS :

1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L,R <= N
*/

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];

	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}	

	int q;
	cin >> q;

	while(q--){
		int l, r;
		cin >> l >> r;

		ll sum = 0;

		for(int i = l; i <= r; i++){
			sum = sum + arr[i];
		}	
		cout << sum << endl;
	}

	return 0;
}