#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;

    vector<int> a, b;

    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        a.push_back(x);
    }

    for(int i = 0; i < n; ++i){
        b.push_back(a[i]);
    }

    sort(a.begin(), a.end());

    int cnt = 0;

    for(int i = 0; i < n; ++i){
        if(a[i] != b[i]){
            cnt++;
        }
    }

    cout << cnt / 2 << endl;
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