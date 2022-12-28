#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    ll arr[n];

    for (ll i = 0; i < n; ++i)
        cin >> arr[i];

    ll o = arr[0], a = arr[0];

    for (ll i = 1; i < n; ++i){
        o = o | arr[i];
        a = a & arr[i];
    }

    cout << o - a << endl;
}

int main(){
    ll t;
    cin >> t;

    while (t--){
        solve();
    }

    return 0;
}