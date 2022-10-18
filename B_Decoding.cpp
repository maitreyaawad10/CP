#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    string s, ans, x;
    cin >> s;

    if(n % 2 == 0){
        for(int i = 0; i < n-1; i += 2){
            ans.push_back(s[i]);
            x.push_back(s[i+1]);
        }

        reverse(ans.begin(), ans.end());

        string res = ans + x;

        cout << res << endl;
    }
    else{
        for(int i = 0; i < n; i += 2){
            ans.push_back(s[i]);
            if(i != n-1)
                x.push_back(s[i+1]);
        }

        reverse(x.begin(), x.end());

        string res = x + ans;

        cout << res << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}