#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    vector<ll> a(n);

    for(ll i = 0; i < n; ++i){
        cin >> a[i];
    }

    ll sum = 0;

    for(int i = 0; i < n; ++i){
        sum += a[i];
    }

    if(sum % n == 0)
        cout << 0 << endl;
    else
        cout << 1 << endl;
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