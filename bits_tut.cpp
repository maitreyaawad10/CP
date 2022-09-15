#include <bits/stdc++.h>

using namespace std;

void printBinary(int n){
	
	// TO PRINT BINARY EQUIVALENT OF A DECIMAL NUMBER

	for(int i = 5; i >= 0; --i){
		cout << ((n >> i) & 1);
	}
	cout << endl;
	// cout << " " << __builtin_popcount(n) << endl;



	// TO CHECK IF i - TH bit IS SET OR NOT

	int x = n;
	int j = 2;

	if((x & (1<<j)) != 0){
		cout << "BIT is set!" << endl;
	}
	else{
		cout << "BIT is unset" << endl;
	}
	cout << endl;



	// TO CHECK IF A GIVEN NUMBER IS POWER OF 2

	int c = n;
	if(c & (c-1)){
		cout << "NOT a POWER of 2\n";
	}

	else{
		cout << "POWER of 2\n";
		
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		printBinary(n);
	}

	return 0;
}