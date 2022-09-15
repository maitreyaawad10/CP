#include <bits/stdc++.h>

using namespace std;

void solve(){
	int x, y;
	cin >> x >> y;

	string s;
	cin >> s;

	int r = 0, u = 0, l = 0, d = 0;

	if(x >= 0 && y >= 0){
		for(int i = 0; i < s.length(); ++i){
			if(s[i] == 'R'){
				r++;
			}

			else if(s[i] == 'U'){
				u++;
			}
		}

		if(r >= x && u >= y){
			cout << "YES" << endl;
		}

		else{
			cout << "NO" << endl;
		}
	}

	else if(x >= 0 && y <= 0){
		for(int i = 0; i < s.length(); ++i){
			if(s[i] == 'R'){
				r++;
			}

			else if(s[i] == 'D'){
				d++;
			}
		}

		if(r >= x && d >= abs(y)){
			cout << "YES" << endl;
		}	

		else{
			cout << "NO" << endl;
		}
	}

	else if(x <= 0 && y <= 0){
		for(int i = 0; i < s.length(); ++i){
			if(s[i] == 'L'){
				l++;
			}

			else if(s[i] == 'D'){
				d++;
			}
		}
		
		if(l >= abs(x) && d >= abs(y)){
			cout << "YES" << endl;
		}	

		else{
			cout << "NO" << endl;
		}
	}

	else{
		for(int i = 0; i < s.length(); ++i){
			if(s[i] == 'L'){
				l++;
			}

			else if(s[i] == 'U'){
				u++;
			}
		}

		if(l >= abs(x) && u >= y){
			cout << "YES" << endl;
		}	

		else{
			cout << "NO" << endl;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}

/*

	// for(int i = 0; i < s.length(); ++i){
	// 	if(s[i] == 'R')	
	// 		r++;
	// 	else if(s[i] == 'U')
	// 		u++;
	// 	else if(s[i] == 'L')
	// 		l++;
	// 	else
	// 		d++;
	// }

	// if(x >= 0 && y >= 0){
	// 	if(r >= x && u >= y){
	// 		cout << "YES" << endl;
	// 	}
	// 	else{
	// 		cout << "NO" << endl;
	// 	}
	// }

	// else if(x >= 0 && y <= 0){
	// 	if(r >= x && d >= abs(y)){
	// 		cout << "YES" << endl;
	// 	}
	// 	else{
	// 		cout << "NO" << endl;
	// 	}
	// }

	// else if(x <= 0 && y >= 0){
	// 	if(l >= abs(x) && u >= y){
	// 		cout << "YES" << endl;
	// 	}
	// 	else{
	// 		cout << "NO" << endl;
	// 	}
	// }

	// else if(x <= 0 && y <= 0){
	// 	if(l >= abs(x) && d >= abs(y)){
	// 		cout << "YES" << endl;
	// 	}
	// 	else{
	// 		cout << "NO" << endl;
	// 	}
	// }
*/
