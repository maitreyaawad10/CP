#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n, c;
    cin >> n >> c;

    map<ll, ll> mp;
    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    ll ans1 = 0, ans2 = n;

    for(auto value : mp){
        if(value.second >= 2){
            ans1 += c;
        }
        else{
            ans1 += 1;
        }
    }

    if(ans1 <= ans2){
        cout << ans1 << endl;
    }

    else{
        cout << ans2 << endl;
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