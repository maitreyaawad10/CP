// TOO LAZY TO NAME THE PROBLEM

/*
Problem
Time is precious. So lets get to the crux of the problem straightaway!

Given 3 positive numbers A, B and C. We make a set which contains numbers that are either 
multiples of A or B or (A and B) in increasing order. We take the C-th number of set and print 
from C-th number to 0 with a step value of A or B whichever it is multiple of and if its a 
multiple of both, then use step value as LCM(A, B)
 

Hint: It's recommended you implement this using continue and goto statements. ;)


Constraints:

2 <= A,B <= 1000 (A and B will not be equal)

1 <= C <= 1000

Input format:

One line containing numbers - A, B, and C

Output format:

One line containing values from C-th number to 0 with the corresponding step value.

Sample Input

3 5 14

Sample Output

30 15 0

Explanation
Here, A is 3 and B is 5. so the set shall be - 3, 5, 6, 9, 10, 12, 15, 18, 20, 21, 24, 25 ,27, 
30, 33, 35, ...

Given, C is 14. 14th number of the set is 30. this is a multiple of 3 and 5, ie., 15. So the 
output shall be 30 to 0 with a step value of 15. 

Output: 30 15 0

*/


#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;

	int i = 1, cth_num;

	if(a >= 2 && b >= 2){
		while(c > 0){
			if((i % a == 0) || (i % b == 0)){
				cth_num = i;
				c--;
			}
		i++;
		}
	}
	
	int lcm;
	
	for(int i = 1; i <= a*b; i++){
		if((i % a == 0) && (i % b == 0)){
			lcm = i;
			break;
		}
	}

	int step;

	if((cth_num % a == 0) && (cth_num % b == 0)){
		step = lcm;
	}
	else if(cth_num % a == 0){
		step = a;
	}
	else{
		step = b;
	}

	for(int i = cth_num; i >= 0; i = i - step){
		cout << i << " ";
	}
	cout << endl;

	return 0;
}