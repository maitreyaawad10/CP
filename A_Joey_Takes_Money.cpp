#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    ll a[n];

    for(ll i = 0; i < n; ++i)
        cin >> a[i];

    ll ans = 1;

    for(ll j = 0; j < n; ++j)
        ans *= a[j];

    cout << (ans + (n - 1)) * 2022 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}