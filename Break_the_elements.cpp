#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    ll a[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int odd = 0, even = 0;

    for (ll i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    if(odd == n || even == n){
        cout << 0 << endl;
        return;
    }

    // if(odd > even){
    //     cout << even << endl;
    // }
    // else{
    //     cout << n - even << endl;
    // }
    cout << even << endl;
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
