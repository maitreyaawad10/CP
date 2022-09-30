#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    ll a[n+1];

    for(ll i = 1; i <= n; ++i){
        cin >> a[i];
    }

    ll cnt = 1, max_cnt = 1;

    for(ll i = 2; i <= n; ++i){
        if(a[i] > a[i-1]){
            cnt++;
        }

        else{
            if(cnt > max_cnt){
                max_cnt = cnt;
            }
            cnt = 1;
        }
    }

    max_cnt >= cnt ? cout << max_cnt << endl : cout << cnt << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}

