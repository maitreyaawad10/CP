#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n, h;
    cin >> n >> h;

    vector<ll> v(n);

    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end(), greater<ll> ());

    if(h <= v[0]){
        cout << 1 << endl;
    }

    else{
        ll cnt = 0, x = v[0], y = v[1];

        cnt += 2 * (h / (x + y));

        ll rem = h % (x + y);

        if(rem == 0){
            cnt += 0;
        }

        else if(rem <= x){
            cnt++;
        }

        else{
            cnt += 2;
        }

        cout << cnt << endl;
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