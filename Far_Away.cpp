#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n, m;
    cin >> n >> m;

    ll a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    sort(a, a+n);

    vector<ll> v;

    for(ll i = 0; i < n; ++i){
        if(m - a[i] > abs(1 - a[i])){
            v.push_back(m);
        }
        else{
            v.push_back(1);
        }
    }

    ll sum = 0;

    for(ll i = 0; i < n; ++i){
        sum += abs(a[i] - v[i]);
    }

    cout << sum << endl;
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