// CARVANS

/*
Input
The first line of the input contains a single integer T denoting the number of test cases to 
follow. Description of each test case contains 2 lines. The first of these lines contain a 
single integer N, the number of cars. The second line contains N space separated integers, 
denoting the maximum speed of the cars in the order they entered the long straight segment.

Output
For each test case, output a single line containing the number of cars which were moving at 
their maximum speed on the segment.

Constraints
1 ≤ T ≤ 100
1 ≤ N ≤ 10,000
All speeds are distinct positive integers that fit in a 32 bit signed integer.
Each input file will not be larger than 4 MB (4,000,000,000 bytes) in size.

Sample Input 1 
3
1
10
3
8 3 6
5
4 5 1 2 3

Sample Output 1 
1
2
2
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int a[n];

		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		int cnt = 0, min = 1e7;

		for(int i = 0; i < n; i++){
			if(a[i] <= min){
				min = a[i];
				cnt++;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}