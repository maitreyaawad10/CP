#include <iostream>

using namespace std;    

#define ll long long

void solve(){
    ll n, k;
    cin >> n >> k;

    if(k > (n / 2)){
        k = n / 2;
    }

    if(n == 1 || k == 1){
        cout << 0 << endl;
        return;
    }

    ll ans = 0;
    
    for(ll i = 1; i <= k; ++i){
        ans += (n - i);    
    }

    ll x = k;

    for(ll i = k + 1; i <= n - k; ++i){
        ans += x;    
    }
    
    ll y = k;

    for(ll i = (n - k + 1); i <= n; ++i){
        ans += (--y);    
    }

    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
        solve();
    

    return 0;
}