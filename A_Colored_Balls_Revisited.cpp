#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    int v[n];

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    int max = v[0], index = 0;

    for(int i = 0; i < n; ++i){
        if(v[i] >= max){
            max = v[i];
            index = i;
        }

    }
    cout << index+1 << endl;
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