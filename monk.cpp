// Monk and his love for Primes

/*
Problem
Monk loves Primes, whether it is number or word

Rules to convert a string to a number:
1. Convert the UpperCase letters to LowerCase letters
2. Convert the LowerCase letters to UpperCase letters

Add the ASCII values of all the UpperCase letters and subract the ASCII values of all the 
LowerCase letters. The resultant number is X.

Note: If X is negative take absolute value of it

Print 1 if X is a prime number and 0 if not
(Prime Number: A number which is divisble by the number one and itself, i.e, it has 2 divisors)

Input Format:

A single line which consists of a string

Output Format:

0 or 1 in a single line 

Constraints:

1 <= string length <= 2000

Sample Input
lBaXps

Sample Output
0

Explanation:

l -> L => 76
B -> b => 98
X -> x => 120
p -> P => 80
s -> S => 83

76 - 98 - 120 + 80 + 83 = 21 and it is not a prime number

*/

#include <bits/stdc++.h>

using namespace std;

int toggle_case(char c){

	if((c >= 'a') && (c <= 'z')){
		c = c - 32;	
	}

	else if((c >= 'A') && (c <= 'Z')){
		c = c + 32;
	}
	return c;
}

int main(){
	string s;
	cin >> s;

	for(int i = 0; i < s.size(); i++){
		s[i] = toggle_case(s[i]);
		s[i] = int(s[i]);
	}
	
	int x = 0;

	for(int i = 0; i < s.size(); i++){
		if((s[i] >= 'a') && (s[i] <= 'z')){
			x = x - s[i];
		}

		else if((s[i] >= 'A') && (s[i] <= 'Z')){
			x = x + s[i];	
		}
	}

	if(x < 0){
		x = x * -1;
	}

	int flag = 0;
	for(int i = 2; i < x; i++){
		if(x % i == 0){
			flag = 1;
			break;
		}
	}

	if(flag == 0){
		cout << 1 << endl;
	}
	else{
		cout << 0 << endl;
	}

	return 0;
}