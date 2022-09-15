#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// map<string, int> mp;

	// mp["Tetrahedron"] = 4;
	// mp["Dodecahedron"] = 12;
	// mp["Cube"] = 6;
	// mp["Octahedron"] = 8;
	// mp["Icosahedron"] = 20;

	map<char, int> mp;

	mp['T'] = 4;
	mp['D'] = 12;
	mp['C'] = 6;
	mp['O'] = 8;	
	mp['I'] = 20;

	int n;
	cin >> n;

	int sum = 0;

	while(n--){
		string s;
		cin >> s;

		sum += mp[s[0]];
	}

	cout << sum << endl;

	return 0;
}



	// pair<char, int> p_arr[5];

	// p_arr[0] = {'T', 4};
	// p_arr[1] = {'C', 6};
	// p_arr[2] = {'O', 8};
	// p_arr[3] = {'D', 12};
	// p_arr[4] = {'I', 20};

	// int n;
	// cin >> n;

	// int sum = 0;

	// while(n--){
	// 	string s;
	// 	cin >> s;

	// 	if(s[0] == p_arr[0].first){
	// 		sum += p_arr[0].second;
	// 	}

	// 	else if(s[0] == p_arr[1].first){
	// 		sum += p_arr[1].second;
	// 	} 

	// 	else if(s[0] == p_arr[2].first){
	// 		sum += p_arr[2].second;
	// 	} 

	// 	else if(s[0] == p_arr[3].first){
	// 		sum += p_arr[3].second;
	// 	} 

	// 	else{
	// 		sum += p_arr[4].second;
	// 	}
	// }

	// cout << sum << endl;

