#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }

    string s;
    cin >> s;

    for(int i = 0; i < n; ++i){
        for(int j = n-1; j >= i; --j){
            if(v[j] == v[i] && s[j] != s[i]){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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