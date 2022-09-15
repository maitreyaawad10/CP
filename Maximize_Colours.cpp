#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n = 3;

    ll a[n];
    map<ll, ll> mp;
    ll cnt = 3;

    for(ll i = 0; i < n; ++i){
        cin >> a[i];
        mp[a[i]]++;
        if(a[i] == 0)
            cnt--;
    }

    if(cnt == 0){
        cout << 0 << endl;
    }

    else if(cnt == 1){
        cout << 1 << endl;
    }

    else if(cnt == 2){
        for(ll i = 0; i < n; ++i){
            if(a[i] == 1){
                cout << 2 << endl;
                return;
            }
        }

        cout << 3 << endl;
    }

    else{
        

        ll ans = 3;

        if(mp[2] == 2){
            sort(a, a+n);

            if(a[0] == a[1] && a[2] > 2){
                cout << 5 << endl;
                return;
            } 
        }

        if((a[0] != 1) && (a[1] != 1)){
            ++ans;
            --a[0];
            --a[1];
        }

        if((a[1] != 1) && (a[2] != 1)){
            ++ans;
            --a[1]; 
            --a[2];
        }

        if((a[0] != 1) && (a[2] != 1)){
            ++ans;
            --a[0]; 
            --a[2];
        }

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