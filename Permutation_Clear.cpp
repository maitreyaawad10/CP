#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    unordered_map<ll, ll> mp;

    vector<ll> v(n);

    for(ll i = 0; i < n; ++i){
        cin >> v[i];
        mp[v[i]]++;
    }

    ll m;
    cin >> m;

    vector<ll> a(m);

    for(ll i = 0; i < m; ++i){
        cin >> a[i];
        mp[a[i]]++;
    }

    for(auto it = v.begin(); it != v.end(); ++it){
        if(mp[(*it)] == 1){
            cout << *it << " ";
        }
    }

    cout << endl;
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