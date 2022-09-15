#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    string s, new_s;
    cin >> s;

    for(int i = s.size()-1; i >= 0; s[i] == '0' ? i = i-3 : i--){
        if(s[i] == '0'){
            char m = s[i-2];
            char n = s[i-1];

            int u = ((m - '0') * 10) + (n - '0');

            new_s.push_back(u+96);
        }

        else if(s[i]-'0' <= 9){
            new_s.push_back(s[i]-'0' + 96);
        }
    }

    reverse(new_s.begin(), new_s.end());
    cout << new_s << endl;
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