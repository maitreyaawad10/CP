#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;

    int a[n], b[n];

    int a0 = 0, a1 = 0;
    
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i] == 1){
            a1++;
        }
        else{
            a0++;
        }
    }

    int b0 = 0, b1 = 0;

    for(int i = 0; i < n; ++i){
        cin >> b[i];
        if(b[i] == 1){
            b1++;
        }
        else{
            b0++;
        }
    }

    // if(a0 == b0 && a1 == b1){
    //     for(int i = 0; i < n; ++i){
    //         if(a[i] != b[i]){
    //             cout << 1 << endl;
    //             return;
    //         }
    //     }
    //     cout << 0 << endl;
    // }
    // else{
    int ans = abs(a0 - b0), cnt = 0;

    for(int i = 0; i < n; ++i){
        if(a[i] != b[i]){
            cnt++;
        }
    }

    if(cnt != ans){
        // cout << abs(ans - cnt) << endl;  // wrong approach
        cout << ans+1 << endl;  // right approach
    }   
    else{
        cout << ans << endl;
    }
    // }
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