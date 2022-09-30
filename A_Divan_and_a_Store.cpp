#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n, l, r, k;
    cin >> n >> l >> r >> k;

    multiset<ll> st;
    vector<ll> v;

    for(ll i = 0; i < n; ++i){
        ll x;
        cin >> x;
        st.insert(x);
    }

    for(auto it = st.begin(); it != st.end(); ++it){
        if(*it >= l && *it <= r){
            v.push_back(*it);
        }
    }

    ll cnt = 0, sum = 0;
    
    for(ll i = 0; i < v.size(); ++i){
        sum += v[i];

        if(sum <= k){
            cnt++;
        }

        else{
            break;
        }
    }

    cout << cnt << endl;
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