// GPL

/*
Problem
It's Binod's Birthday and all his friends want to have a great GPL for him. But Binod being so 
schemy, he locked his room with secret number and given his friends a Binary string of secret no.

His friends have no knowledge about binary strings. Would you help his friends to convert given 
Binary String to Decimal and participate in Binod's GPL.

Binary String is a string with only '0' and '1'  as it's characters.

Examples : "000101", "10101", "1", "0", "01" are Binary Strings.

    "Ab3024", "123", "1A", "6", "AA" are not Binary Strings

Input Format

First Line : Integer T that denotes number of test cases (1 <= T <= 10^4).
For each Test Case : Integer N for size of Binary String (1 <= N <= 60) and Binary String S.
Output Format

For each Test case, print Single Line integer containing the secret number.

Sample Input

3
4
0001
2
10
4
1010

Sample Output
1
2
10
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		string s;
		cin >> s;

		int bin_dig = 0;
		long long result = 0;
		long long power2 = 1;

		for(int i = s.size() - 1; i >= 0; i--){
			bin_dig = s[i] - '0';
			result = result + (bin_dig * power2);
			power2 = power2 * 2;
		}
		cout << result << endl;
	}


	return 0;
}