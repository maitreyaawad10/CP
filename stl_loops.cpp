#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;

	vector<int> v;

	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		v.push_back(a);
	}
	
	////////////////////
	//
	// RANGE BASED LOOPS
	//
	////////////////////

	for(int value : v){
		cout << value << " ";
	}
	cout << endl;

	// vector<pair<int,int>> vp = {{1,2}, {2,3}};

	// for(pair<int,int> value : vp){
	// 	cout << value.first << " " << value.second << endl;
	// }
	// cout << endl;


	////////////////////
	//
	// AUTO KEY-WORD
	//
	////////////////////

	vector<pair<int,int>> vp = {{1,2}, {2,3}};

	for(auto value : vp){
		cout << value.first << " " << value.second << endl;
	}

	return 0;
}
