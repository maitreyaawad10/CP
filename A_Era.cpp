#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    vector<ll> v(n);

    for (ll i = 0; i < n; ++i){
        cin >> v[i];
    }

    ll x = 0, ans = 0;

    for (ll i = 0; i < n; ++i){
        if(v[i] > i+1){
            x = v[i] - (i+1);
            ans = max(x, ans);
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