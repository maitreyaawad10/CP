#include <bits/stdc++.h>

using namespace std;

#define ll long long
const ll m = 1000000007;

void solve(){
    ll n;
    cin >> n;
    
    ll ans = (337 * (n % m) * ((n + 1) % m) * ((4*n - 1) % m));

    cout << ans << endl; 
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