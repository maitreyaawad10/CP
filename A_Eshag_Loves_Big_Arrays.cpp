#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    int a[n];
    map<int, int> mp;

    int cnt = 0;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        mp[a[i]]++;
    }

    sort(a, a+n);

    cout << n - mp[a[0]] << endl;
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