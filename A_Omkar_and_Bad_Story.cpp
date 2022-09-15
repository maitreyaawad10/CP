#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    int flag = 0;
    
    for(ll i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(x < 0){ 
            flag = 1;
        }
    }

    if(flag == 1){
        cout << "NO" << endl;
    }

    else{
        cout << "YES" << endl << 101 << endl;

        for(ll i = 0; i <= 100; ++i){
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}