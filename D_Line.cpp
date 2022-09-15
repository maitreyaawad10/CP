#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    sort(s.begin(), s.end(), greater<int>());

    // cout << s << endl;

    int ans = 0;
    for(int i = 0; i < n; ++i){
        if(s[i] == 'L'){
            ans += i;
        }
        else{
            ans += (n-i-1);
        }
    }    

    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}