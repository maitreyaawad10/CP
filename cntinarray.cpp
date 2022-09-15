/*
GIVEN AN ARRAY OF N INTEGERS. GIVEN Q QUERIES AND IN EACH QUERY GIVEN A NUMBER X, PRINT COUNT 
OF THAT NUMBER IN ARRAY.

Constraints :

1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5

*/

#include <bits/stdc++.h>

using namespace std;

const int N = 1e7+6;

int hsh[N];

int main(){	
	int n;
	cin >> n;

	int arr[n];

	for(int i = 0; i < n; i++){
		cin >> arr[i];
		hsh[arr[i]]++;
	}	

	int q;
	cin >> q;
	
	while(q--){
		
		int x;
		cin >> x;

		cout << hsh[x] << endl;
	}

	return 0;
}

// O(N) + O(Q*N) = O(N) + O(N*N) = O(N*N) = 1e10
// O(N) + O(Q) = 2*O(N) = 2e5