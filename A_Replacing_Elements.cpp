#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);

    for (ll i = 0; i < n; ++i){
        cin >> v[i];
    }

    int flag = 0;

    for (ll i = 0; i < n; ++i){
        if(v[i] > k){
            flag = 1;
        }
    }

    if(flag == 1){
        sort(v.begin(), v.end());
        if(v[0] + v[1] <= k){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        cout << "YES" << endl;
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