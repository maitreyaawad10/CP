#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int a,b,c;
    cin >> a >> b >> c;

    if((((a + c) - 2*b) % 3) == 0)
        cout << 0 << endl;

    else
        cout << 1 << endl;
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