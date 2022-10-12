#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int c1 = 0, c0 = 0;

    if(n % 2 == 0){
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '1'){
                c1++;
            }
            else{
                c0++;
            }
        }

        if(c1 % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl; 
    }
    else{
        cout << "YES" << endl;
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