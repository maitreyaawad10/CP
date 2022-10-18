#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n, q;
    cin >> n >> q;

    vector<ll> v;
    ll sumo = 0, sume = 0, e = 0, o = 0;

    for(ll i = 0; i < n; ++i){
        ll x;
        cin >> x;
        v.push_back(x);
        if(v[i] % 2 == 0){
            sume += v[i];
            e++;
        }
        else{
            sumo += v[i];
            o++;
        }
    }

    while(q--){
        ll a, x;
        cin >> a >> x;

        if(a == 0){
            if(x % 2 != 0){
                sumo = sumo + sume + (x * e);
                o += e;
                e = 0;
                sume = 0;
            }
            else{
                sume += (x * e);
            }
        }
        else{
            if(x % 2 == 0){
                sumo += (x * o);
            }
            else{
                sume = sume + sumo + (x * o);
                e += o;
                o = 0;
                sumo = 0;
            }
        }

        ll ans = sume + sumo;

        cout << ans << endl;
    }
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