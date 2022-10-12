#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    string s, t;
    cin >> s >> t;
    
    ll l1 = s.length(), l2 = t.length();

    if(s[l1-1] != t[l2-1]){
        cout << s.length()+t.length() << endl;
        return;
    }

    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());

    ll ma = min(s.length(), t.length());
    ll cnt = 0;

    for(int i = 0; i < ma; ++i){
        if(s[i] == t[i]){
            cnt++;
        }
        else{
            break;
        }
    }

    cout << (s.length()-cnt) + (t.length()-cnt) << endl;
}

int main(){

    solve();

    return 0;
}