#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    ll a[n];
    map<ll, ll> mp;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    ll ma = 0;

    for(auto value : mp){
        if(value.second > ma){
            ma = value.second;
        }
    }

    ll ans = 0;

    while(ma > 1){
        if(ma % 2 == 1){
            ma = (ma+1) / 2;
        }
        else{
            ma = (ma / 2);
        }
        ans++;
    }

    cout << ans << endl;
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
