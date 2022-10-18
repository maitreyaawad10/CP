#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    string s;
    cin >> s;

    int z = 0, o = 0;

    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '0'){
            z++;
        }
        else{
            o++;
        }
    }

    if(z != o){
        cout << min(z,o) << endl;
    }    
    else{
        cout << z-1 << endl;
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