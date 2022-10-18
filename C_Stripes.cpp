#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    char s[8][8];

    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            cin >> s[i][j];
        }
    }

    int r;
    string ans = "-1";

    for(int i = 0; i < 8; ++i){
        r = 0;
        for(int j = 0; j < 8; ++j){
            if(s[i][j] == 'R'){
                r++;
            }
        }
        if(r == 8){
            ans = "R";
            break;
        }
    }
    if(ans == "R"){
        cout << ans << endl;
    }
    else{
        cout << "B" << endl;
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