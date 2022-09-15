#include <bits/stdc++.h>

using namespace std;

void solve(){
    int x, y;
    cin >> x >> y;

    int last = x*3 -  2*y;

    cout << y << " " << y << " " << last << endl;
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