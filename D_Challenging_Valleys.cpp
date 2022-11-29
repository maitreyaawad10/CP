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

    bool flag = false;
    int inc = 0, dec = 0;

    for(ll i = 1; i < n; ++i){
        if(v[i] > v[i - 1])
            inc++;
        else if(v[i] < v[i - 1]){
            dec++;
            if(inc > 0){
                flag = true;
                break;
            }
        }
    }

    if(flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--)
        solve();


    return 0;
}