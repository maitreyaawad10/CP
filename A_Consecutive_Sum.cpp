#include <bits/stdc++.h>

using namespace std;

#define ll long long

void swap(ll &a, ll &b){
    ll temp = a;
    a = b; 
    b = temp;
}

void solve(){
    ll n, k;
    cin >> n >> k;

    ll a[n+1];

    for(ll i = 1; i <= n; ++i){
        cin >> a[i];
    }

    for(ll i = 1; i <= n; ++i){
        for(ll j = i+1; j < n; ++j){
            if(i % k == j % k){
                swap(a[i], a[j]);
            }
        }
    }

    ll sum = 0, max_sum = 0, cnt = 0;

    ll i = 1;

    while(i <= n){
        sum += a[i];
        cnt++;

        if(cnt != k){
            i++;
        }

        else {
            if(max_sum <= sum){
                max_sum = sum;
                cnt = 0;
                sum = 0;
            }

            if(k == 1){
                ++i;
            }
        }
    }

    cout << max_sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}