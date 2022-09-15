#include <bits/stdc++.h>

using namespace std;

void checkConsonants(int n){
    
    string s;
    cin >> s;
    
    int cnt = 0;
	int flag = 0;

	if(n < 4){
		cout << "YES" << endl;
		return; 
	}

	else{
		for(int i = 0; i < n; i++){
			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u'){
				cnt = 0;
			}
			else{
				cnt++;
				if(cnt == 4){
					cout << "NO" << endl;
					break;
					// cnt = 0;
				}
			}
	    }

	    if(cnt == 0 || cnt != 4){
	    	cout << "YES" << endl;
	    }
	} 
}

int main() {
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;

		checkConsonants(n);
	}
	
	return 0;
}
