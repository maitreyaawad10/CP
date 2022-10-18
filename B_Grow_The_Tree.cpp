#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    vector<ll> v;

    for(ll i = 0; i < n; ++i){
        ll x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), greater<ll> ());

    ll sumh = 0, sumv = 0;

    if(n % 2 == 0){
        for(ll i = 0, j = n - 1; i < n/2; ++i, --j){
            sumh += v[i];
            sumv += v[j];
        }
    }
    else{
        for(ll i = 0; i <= n/2; ++i){
            sumh += v[i];
        }

        for(ll j = n - 1; j > n/2; --j){
            sumv += v[j];
        }

    }

    cout << (sumh * sumh) + (sumv * sumv) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}