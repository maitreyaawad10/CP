// CAPITALBAAZI

/*
Problem
Cheems doesn't like extra content so coming straight to the point. Given the input of one line,
having words separated by a single space, print each word of the input, each in a new line.
Also, change all the alphabets to uppercase along with doing this.

Input:-
Given in one line, all letters are lowercase only, separated by a single space.

Characters used in input are from 'a' to 'z' only ( 26 in total ) , both included.

Length of input <= 10^4

Output:-
Output each word with characters in uppercase.

Note:- A testcase contains only one word as the input to get partial marks. Also, the ideal 
solution has been provided, you can test any of your legal input to get its answer.

Sample Input :
subscribe to the luv channel

Sample Output :
SUBSCRIBE
TO
THE
LUV
CHANNEL
*/

#include <bits/stdc++.h>

using namespace std;

char upper(char ch){
	while(ch != '\0'){
		if((ch >= 'a') && (ch <= 'z')){
			ch = ch - 32;	
		}
		
		else{
			return ch;
		}
	}
	return ch;
}

int main(){
	while(true){
		
		string s;	
		cin >> s;
		
		if(s.size() == 0){
			break;
		}
		
		for(int i = 0; i < s.size(); i++){
			s[i] = upper(s[i]);	
		}
		
		cout << s << endl;
	}
}