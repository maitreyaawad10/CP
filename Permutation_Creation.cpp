#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;

    if(n < 4){
        cout << -1 << endl;
    }

    else{

        for(int i = 1; i <= n; ++i){
            if(i % 2 == 0){
                cout << i << " ";
            }
        }
        
        for(int i = 1; i <= n; ++i){
            if(i % 2 != 0){
                cout << i << " ";
            }
        }
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