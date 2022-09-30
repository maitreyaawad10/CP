#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    if(s.length() == 2){
        cout << s << endl;
        return;
    }

    string new_s1 = "";
    string new_s2 = "";

    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '0') {
            new_s1.push_back(s[i]);
        }
        else{
            new_s2.push_back(s[i]);
        }
    }

    cout << new_s1 + new_s2 << endl;
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