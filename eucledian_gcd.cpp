#include <bits/stdc++.h>

using namespace std;

// log(max(a,b)) ==> Time complexity
int gcd(int a, int b){
	if(b == 0)	return a;
	return gcd(b, a%b);
}

int main(){
	int a, b;
	cin >> a >> b;

	cout << gcd(a,b) << endl;

	cout << __gcd(a,b) << endl;

	return 0;
}