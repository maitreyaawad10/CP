// UPPER BOUND AND LOWER BOUND

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> a(n);

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	for(auto value : a){
		cout << value << " ";
	}
	cout << endl;

	auto it = lower_bound(a.begin(), a.end(), 5);
	if(it == a.end()){
		cout << "NOT FOUND!" << endl;
		return 0;
	}

	cout << *it << endl;

	auto ti = upper_bound(a.begin(), a.end(), 5);
	if(ti == a.end()){
		cout << "NOT FOUND!" << endl;
		return 0;
	}	
	
	cout << *ti << endl;	

	return 0;
}