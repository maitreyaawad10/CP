#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n, k;
    cin >> n >> k;

    int a[n];
    map<int, int> mp;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
        mp[a[i]]++;
    }

    for(auto value : mp){
        if(value.second == n && value.first == 0){
            cout << "NO" << endl;
            return;
        }
        else{
            break;
        }
    }

    cout << "YES" << endl;
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