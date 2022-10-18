#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    for(ll i = 0; i < n; ++i){
        ll j;
        cin >> j;
    }

    ll m = 10 - n;

    ll x = (m * (m - 1)) / 2;

    cout << x * 6 << endl;
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