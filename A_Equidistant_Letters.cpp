#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    cout << s << endl;
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