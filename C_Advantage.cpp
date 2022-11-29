#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    vector<ll> v;

    for(ll i = 0; i < n; ++i){
        ll x;
        cin >> x;
        v.push_back(x);
    }

    vector<ll> temp = v;
    
    sort(temp.begin(), temp.end(), greater<ll> ());

    if(temp[0] == temp[1]){
        for(ll i = 0; i < n; ++i)
            cout << v[i] - temp[0] << " ";
    }
    else{
        for(ll i = 0; i < n; ++i){
            if(v[i] != temp[0])
                cout << v[i] - temp[0] << " ";
            else
                cout << v[i] - temp[1] << " ";
        }
    }

    cout << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--)
        solve();


    return 0;
}