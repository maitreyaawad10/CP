#include <bits/stdc++.h>

using namespace std;

#define ll long long    

void solve(){
    ll n;
    cin >> n;

    ll ans = 0;
    
    while(n > 0){
        ans = max(ans, n%10);
        n /= 10;
    }

    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}