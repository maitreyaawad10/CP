#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n, m;
    cin >> n >> m;

    if(n == 1 || m == 1 || (n == 2 && m == 2)){
        cout << n << " " << m << endl;
    }

    else{
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= m; ++j){
                if(n-i >= 2 || m-j >= 2){
                    continue;
                }
                else{
                    cout << i << " " << j << endl;
                    return;
                }
            }
        }
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