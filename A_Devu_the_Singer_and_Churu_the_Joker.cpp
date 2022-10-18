#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n, d;
    cin >> n >> d;

    ll a[n];
    ll sum = 0;

    for(ll i = 0; i < n; ++i){
        cin >> a[i];
        sum += a[i];
    }

    ll res = sum + ((n - 1) * 10) ;

    if(res > d)
        cout << -1 << endl;
    else
        cout << abs(d - sum) / 5 << endl; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}