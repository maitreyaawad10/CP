#include <bits/stdc++.h>

using namespace std;    

#define ll long long

void solve(){
    ll n;
    cin >> n;

    vector<ll> v;
    map<ll, ll> mp;

    for(ll i = 0; i < n; ++i){
        ll x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
    }

    ll ma = *max_element(v.begin(), v.end());
    ll mi = *min_element(v.begin(), v.end());

    ll freq1 = mp[ma];
    ll freq2 = mp[mi];

    cout << (max(freq1, freq2) / 2) * 2 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
        solve();
    

    return 0;
}