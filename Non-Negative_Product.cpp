#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;

    int a[n];
    
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int cnt = 0;

    for(int i = 0; i < n; ++i){
        if(a[i] == 0){
            cout << 0 << endl;
            return;
        }

        if(a[i] < 0){
            cnt++;
        }
    }

    if(cnt % 2 == 0) {
        cout << 0 << endl;
    }

    else if(cnt == 1) {
        cout << 1 << endl;
    }

    else {
        cout << cnt - (cnt-1) << endl;
    }
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