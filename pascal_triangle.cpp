#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;

    int a[n][n];

    for(int i = 0; i < n; ++i) {
        a[i][0] = 1, a[i][i] = 1;
        for(int j = 1; j < i; ++j) {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j <= i; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}