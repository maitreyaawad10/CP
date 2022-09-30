#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int a,b,x;
    cin >> a >> b >> x;

    int d = abs(a-b);

    if((d % (2*x)) == 0) {
        cout << "YES" << endl;
    }

    else {
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