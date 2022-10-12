#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> mp;

    for(int i = 0; i < n; ++i){
        cin >> v[i];
        mp[v[i]]++;
    }

    int ma = 0;

    for(auto value : mp){
        if(value.second >= ma){
            ma = value.second;
        }
    }

    cout << n - ma << endl;
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