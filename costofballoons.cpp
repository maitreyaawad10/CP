// Cost of balloons
/*
Problem
You are conducting a contest at your college. This contest consists of two problems and n
participants. You know the problem that a candidate will solve during the contest.

You provide a balloon to a participant after he or she solves a problem. There are only green 
and purple-colored balloons available in a market. Each problem must have a balloon associated 
with it as a prize for solving that specific problem. You can distribute balloons to each 
participant by performing the following operation:

1. Use green-colored balloons for the first problem and purple-colored balloons for the second 
problem
2. Use purple-colored balloons for the first problem and green-colored balloons for the second 
problem

You are given the cost of each balloon and problems that each participant solve. Your task 
is to print the minimum price that you have to pay while purchasing balloons.

Input format

First line: T that denotes the number of test cases (1 <= T <= 10)
For each test case: 
-First line: Cost of green and purple-colored balloons 
-Second line: n that denotes the number of participants (1 <= n <= 10)
Next n lines: Contain the status of users. For example, if the value of the jth integer in 
the ith row is 0, then it depicts that the ith participant has not solved the jth problem. 
Similarly, if the value of the jth integer in the ith row is 1, then it depicts that the ith 
participant has solved the jth problem.

Output format
For each test case, print the minimum cost that you have to pay to purchase balloons.

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int g, p;
		cin >> g >> p;

		int n;
		cin >> n;

		int a[n][2], sum_g = 0, sum_p = 0;

		for(int i = 0; i < n; i++){
			for(int j = 0; j < 2; j++){
				cin >> a[i][j];
			}
		}

		int cnt_1 = 0, cnt_2 = 0;

		for(int i = 0; i < n; i++){
			if(a[i][0] == 1){
				cnt_1++;
			}

			if(a[i][1] == 1){
				cnt_2++;
			}
		}	
		
		int x = cnt_1 * g + cnt_2 * p;
		int y = cnt_1 * p + cnt_2 * g;

		if(x < y)
		{
			cout << x << endl;
		}
		else
		{
			cout << y << endl;
		}
	}


	return 0;
}