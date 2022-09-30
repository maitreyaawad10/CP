#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(n);
    vector<pair<int, int>> p;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }

    for(int i = 0; i < n; ++i){
        p.push_back({a[i], b[i]});
    }

    sort(p.begin(), p.end());

    int ans = k;

    for(int i = 0; i < n; ++i){
        if(p[i].first <= ans){
            ans += p[i].second;
        }
    }

    cout << ans << endl;

    // ll n, k;
    // cin >> n >> k;

    // ll a[n];
    // ll b[n];
    // map<ll, ll> mp;

    // for(ll i = 0; i < n; ++i){
    //     cin >> a[i];
    // }

    // for(ll i = 0; i < n; ++i){
    //     cin >> b[i];
    // }

    // for(ll i = 0; i < n; ++i){
    //     mp[a[i]] = b[i];
    // }

    // sort(a, a+n);

    // int ans = k;

    // for(ll i = 0; i < n; ++i){
    //     if(a[i] <= ans){
    //         ans += mp[a[i]];
    //     }
    //     else{
    //         break;
    //     }
    // }  

    // cout << ans << endl;
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