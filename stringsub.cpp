#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    string s = "11";

	    for(int i = 0; i < (n-2); i++){
	    	s.insert(1, "0");
	    }

    	cout << s << endl;
	}
	
	return 0;
}
