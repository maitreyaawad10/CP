#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    if(n % 2 == 0){
        for(int i = n; i >= 1; --i){
            cout << i << " ";
        }
        cout << endl;
    }
    else{
        for(int i = n; i >= 1; --i){
            if(i == n/2){
                cout << i+1 << " ";
                continue;
            }
            if(i == (n/2 + 1)){
                cout << i-1 << " ";
                continue;
            }
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}