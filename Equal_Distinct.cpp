#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    int a[n];
    map<int, int> mp;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
        mp[a[i]]++;
    }

    bool flag = false;

    for(auto value : mp){
        if(value.second >= 2){
            flag = true;
            // break;
        }
    }

    if(n % 2 == 0){
        cout << "YES" << endl;
    } 

    else if(flag){
        cout << "YES" << endl;
    }

    else{
        cout << "NO" << endl;
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