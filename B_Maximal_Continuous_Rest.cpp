#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    vector<ll> v;
    vector<ll> v1;

    ll flag = 0;

    for(ll i = 0; i < n; ++i){
        ll x;
        cin >> x;
        v.push_back(x);
        if(v[i] == 1)
            flag = 1;
    }

    if(flag == 0){
        cout << 0 << endl;
        return;
    }

    ll cnt = 1, ans = 0;

    if(v[0] == 1 && v[n-1] == 1){
        copy(v.begin(), v.end(), back_inserter(v1)); 
        copy(v.begin(), v.end(), back_inserter(v1)); 
        
        for(ll i = 0; i < v1.size()-1; ++i){
            if(v1[i] == 1 && v1[i+1] == 1){
                cnt++;
            }
            else {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }

        cout << max(ans, cnt) << endl;
    }
    else{
        for(ll i = 0; i < n-1; ++i){
            if(v[i] == 1 && v[i+1] == 1){
                cnt++;
            }
            else {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }

        cout << max(ans, cnt) << endl;
    }


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}