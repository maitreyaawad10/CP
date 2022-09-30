#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;

    int d[n+1], a[n+1];

    for (int i = 1; i <= n; i++)
    {
        cin >> d[i];
    }

    a[1] = d[1];

    for (int i = 2; i <= n; i++)
    {
        if((a[i-1] + d[i] > 0) && (a[i-1] - d[i] > 0) && (a[i-1] + d[i] != a[i-1] - d[i])){
            cout << -1 << endl;
            return;
        } 
        else{
            a[i] = a[i-1] + d[i];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
