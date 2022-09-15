#include <bits/stdc++.h>

using namespace std;

// void solve(){
//     int n;
//     cin >> n;
    
//     int a[n];
//     map<int, int> m;
     
//     for(int i = 0; i < n; i++){
//         int x;
//         cin >> x;
//         m[x]++;
//     }
    
//     for(auto pr : m){
//         if(pr.second % 2 == 1){
//             cout << pr.first << endl;
//         }
//     }
// }

// int main() {
//     int t;
//     cin >> t;
    
//     while(t--){
//         solve();
//     }

// 	return 0;
// }


int main()
{   
    int n;
    cin >> n;

    map<string, int> m;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        m[s]++;
    }

    for(auto ans : m){
        cout << ans.first << " " << ans.second << endl;
    }

    return 0;
}