#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;

    int z = b - 1;
    int l = abs(b - c);
    
    if(c > b){
        
        if(a-1 < 2*l+z){
            cout << 1 << endl;
        }

        else if(a-1 == 2*l+z){
            cout << 3 << endl;
        }

        else{
            cout << 2 << endl;
        }
    }

    else {

        if(a-1 > z){
            cout << 2 << endl;
        }

        else if(a-1 == z){
            cout << 3 << endl;
        }

        else{
            cout << 1 << endl;
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