#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n, k;
    cin >> n >> k;

    vector<ll> v;

    for(ll i = 0; i < n; ++i){
        ll x;   
        cin >> x;
        v.push_back(x);
    }

    ll mi = INT_MAX;

    for(auto value : v){
        mi = min(mi, value + k);
    }

    for(auto value : v){
        if(abs(value - mi) > k){
            cout << -1 << endl;
            return;
        }
    }

    cout << mi << endl;
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