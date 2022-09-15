#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, m;
	cin >> n >> m;

	int k = 0, k1 = 3;
	for(int i = 0; i < n; ++i){
		
		for(int j = 0; j < m; j++){
			
			if(i % 2 == 0){
				cout << "#";
			}
			else{
				if((i != k) && (j == (m-1))){
					cout << "#";
				}

				else if((i == k1) && (i > j) && (j == 0)){
					cout << "#";
					k = k1;
					k1 = k1 + 4;
				}

				else{
					cout << ".";
				}
			}	
		}
		
		cout << endl;
	}
}

int main(){
	solve();

	return 0;
}