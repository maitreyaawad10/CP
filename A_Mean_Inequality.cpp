#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;

    vector<int> v(2*n);

    for (int i = 0; i < 2*n; ++i){  
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i = 0, j = n; j < 2*n; ++i, ++j){
        cout << v[i] << " " << v[j] << " ";
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