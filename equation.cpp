#include <bits/stdc++.h>

using namespace std;

void solve(){
    int x;
    cin >> x;

    if(x < 5){
        cout << "NO" << endl;
        return;
    }

    for(int a = 1; a*a <= (x+1); ++a){
        int first = x - 2*a;
        int second = a + 2;
        
        if(first <= 0){
            break;
        }
        
        if(first % second == 0){
            cout << "YES" << endl;
            return;
        }
    }
    
    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}