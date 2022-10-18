#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n, l;
    cin >> n >> l;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int ans = 0;

    for(int i = 0; i < l; ++i){
        int cnt = 0;
        for(int j = 0; j < n; ++j){
            if(a[j] & (1<<i))
                cnt++;
        }
        if(cnt > n-cnt){
            ans += (1<<i);
        }
    }

    cout << ans << endl;
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