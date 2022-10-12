#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n, m, k;
    cin >> n >> m >> k;

    if(n*m - 1 == k){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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