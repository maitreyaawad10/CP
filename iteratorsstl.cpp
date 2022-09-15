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
	

	vector<pair<int,int>> vp = {{1,2}, {2,3}, {3,4}};
	vector<pair<int,int>> ::iterator it;

	for(it = vp.begin(); it != vp.end(); it++){
		cout << it->first << " " << it->second << endl;
	}


	return 0;
}
