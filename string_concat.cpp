#include <bits/stdc++.h>

using namespace std;

long long int superDigit(string s, int k){
	// string str;
    
 //    for(int i = 0; i < k; i++){
 //        str = str + s;    
 //    }

	long long int n = stoll(s) * k;
    long long int digSum = 0, supDig = 0;

    while(n/10 != 0){
    	while(n > 0){
    		digSum = digSum + (n%10);
    		n = n / 10;
    	}

    	// if(digSum/10 > 0){
    	// 	digSum *= k;
    	// }

    	n = digSum;
    	supDig = digSum;
    	digSum = 0;
    }

    return supDig;
}

int main() {
	// your code goes here
	
	string s;
	int k;
	cin >> s >> k;

	long long ans = superDigit(s, k);

	cout << ans << endl;

	return 0;
}