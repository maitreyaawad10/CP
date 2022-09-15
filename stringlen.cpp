#include <bits/stdc++.h>

using namespace std;

int length(string s){
	int len = s.length();
	//cout << len << endl;

	return len;
}

int main(){
	string str;
	getline(cin, str);

	int l =length(str);
	cout << l << endl;

	return 0;
}

