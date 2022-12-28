#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n, k;
    cin >> n >> k;

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> h, p;
    bool v[n];

    for(ll i = 0; i < n; ++i)
        v[i] = false;

    for(ll i = 0; i < n; ++i){
        ll x;
        cin >> x;
        h.push({x, i});
    }

    for(ll i = 0; i < n; ++i){
        ll y;
        cin >> y;
        p.push({y, i});
    }

    ll sum = 0, n1 = 0;

    while(n1 < n && k > 0){
        sum += k;

        while(h.top().first <= sum && !h.empty()){
            v[h.top().second] = true;
            h.pop();
            n1++;
        } 
        
        while(v[p.top().second] == true && !p.empty()){
            p.pop();
        }
        
        if(!p.empty())
            k -= p.top().first; 
    }

    if(n1 == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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