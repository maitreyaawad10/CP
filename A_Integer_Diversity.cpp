#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    int a[n];
    map<int, int> mp;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
        mp[abs(a[i])]++;
    }

    int cnt = 0;

    for(auto value : mp){
        if(value.first == 0 && value.second % 2 == 0 && value.second == n){
            cout << 1 << endl;
            return;
        }

        if(value.second >= 2 && value.first != 0){
            cnt += 2;
        }
        
        else{
            cnt++;
        }
    }

    cout << cnt << endl;
}

int main(){ 
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}