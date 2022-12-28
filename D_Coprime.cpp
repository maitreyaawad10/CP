#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    vector<ll> v(1001, -1);

    for(ll i = 1; i <= n; ++i){
        ll x;
        cin >> x;
        v[x] = i;
    }

    ll ma = -1;

    for(ll i = 1; i <= 1000; ++i){
        for(ll j = i; j <= 1000; ++j){
            if(v[i] > 0 && v[j] > 0){
                if((__gcd(i, j)) == 1)
                    ma = max(v[i] + v[j], ma);
            }
        }
    }

    cout << ma << endl;
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