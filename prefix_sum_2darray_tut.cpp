#include <bits/stdc++.h>

using namespace std;

// INPUT

/*
3
3 6 2 
8 9 2
3 4 1
2
1 1 2 2
1 2 3 3
*/

// OUTPUT

/*
26
24
*/

const int N = 1e3+10;

int ar[N][N];
long long pfa[N][N];

int main(){
	int n;
	cin >> n;

	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= n; ++j){
			cin >> ar[i][j];
			pfa[i][j] = ar[i][j] + pfa[i-1][j] + pfa[i][j-1] - pfa[i-1][j-1];
		}
	}

	int q;
	cin >> q;

	while(q--){
		int a,b,c,d;
		cin >> a >> b >> c >> d;

		cout << pfa[c][d] - pfa[a-1][d] - pfa[c][b-1] + pfa[a-1][b-1] << endl;
	}

	return 0;
}

