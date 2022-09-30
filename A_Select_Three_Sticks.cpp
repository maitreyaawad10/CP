#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    ll a[n];

    for(ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a+n);

    ll min_sum = 1e9, sum3 = 0;

    if(n == 3) {
        for(ll i = n-1; i > 0; --i) {
            sum3 = sum3 + (a[i] - a[i-1]);
        }

        cout << sum3 << endl;
    }

    else {
        for(ll i = 0; i <= n-3; ++i) {
            int cnt = 1, sum = 0;
            for(ll j = i; cnt < 3; ++j) {
                sum = sum + (abs(a[j] - a[j+1]));
                cnt++;
            }
            if(sum <= min_sum) {
                min_sum = sum;
            }
        }

        cout << min_sum << endl;
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