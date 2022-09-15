#include <iostream>

using namespace std;

int fact(int n){
	static int factorial = 1;
	if(n == 0){
		return 1;

	}
	factorial = n * fact(n-1);

	
	// cout << factorial << endl;
	return factorial;
}

int main(){
	int n;
	cin >> n;

	int ans = fact(n);
	cout << ans;

	return 0;
}