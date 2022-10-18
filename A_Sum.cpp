#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n = 3;
    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    sort(a, a+n);

    if(a[0] + a[1] == a[2]){
        cout << "YES" << endl;
    }
    else{
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