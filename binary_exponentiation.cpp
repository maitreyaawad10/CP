#include <bits/stdc++.h>

using namespace std;

const int M = 1e9+7;

// METHOD 1 : USING RECURSION

int binExpRec(int a, int b){
	if(b == 0)	return 1;
	int res = binExpRec(a, b/2);
	if(b & 1) {
		return (a * ((res * 1LL * res) % M)) % M;
	}

	else {
		return (res * 1LL * res) % M;
	}
}

// METHOD 2 : USING ITERATION (BETTER IN MOST CASES THAN RECURSIVE ONE)
// T.C : O(log(b))
int binExpIte(int a, int b){
	int ans= 1;

	while(b){
		if(b & 1){		// checking if odd i.e. if 0th bit is 1 or not
			ans = (ans * 1LL * a) % M;	// ans * current power of a
		}		
			
		a = (a * 1LL * a) % M;
		b >>= 1;	// right shifting b by 1
	}

	return ans;
}

int main(){
	int a = 2123123, b = 1231231;

	cout << "Recursion : " << binExpRec(a, b) << endl;
	cout << "Iteration : " << binExpIte(a, b) << endl;
	cout << "In-built : " << pow(a, b) << endl; 

	return 0;
}