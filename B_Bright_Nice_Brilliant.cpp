#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j <= i; ++j) {
            if(j == 0 || j == i)  {
                cout << 1 << " ";
            }
            else {
                cout << 0 << " ";
            }
        }
        cout << endl;
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