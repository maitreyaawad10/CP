#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    vector<int> v(3);
    map<int, int> mp;

    for(int i = 0; i < 3; ++i){
        cin >> v[i];
        mp[v[i]]++;
    }

    ll ma = max(v[0], max(v[1], v[2]));

    for(int i = 0; i < 3; ++i){
        if(mp[ma] >= 2){
            (ma - v[i]) == 0 ? cout << 1 << " " : cout << (ma - v[i]) + 1 << " ";
        }

        else{
            (ma - v[i]) == 0 ? cout << 0 << " " : cout << (ma - v[i]) + 1 << " ";
        }
    }

    cout << endl;
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