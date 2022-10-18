#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    char l;
    cin >> n >> l;

    string s;
    cin >> s;

    if(l == 'g'){
        cout << 0 << endl;
        return;
    }

    ll cnt = 0;

    for(ll i = 0; i < n; ++i){
        if(s[i] == l){
            cnt++;
        }
    }

    ll ans = 0;

    s += s;

    vector<int> v;

    for(ll i = 0; i < 2*n; ++i){
        if(s[i] == 'g')
            v.push_back(i);
    }

    for(ll i = 0; i < n; ++i){
        if(s[i] == l){
            ll u = lower_bound(v.begin(), v.end(), i) - v.begin();
            ans = max(ans, v[u]-i);
        }
    }

    cout << ans << endl;
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