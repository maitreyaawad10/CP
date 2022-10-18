#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    ll a[n];

    cout << 1 << " " << n << " ";

    for(ll i = 2; i <= n-1; ++i){
        cout << i << " ";
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