#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;

    if(n == 3){
        cout << -1 << endl;
        return;
    }

    if(n == 5){
        cout << 5 << " " << 4 << " " << 1 << " " << 2 << " " << 3 << endl;
        return;
    }

    if(n % 2 == 0){
        for(int i = n; i >= 1; --i){
            cout << i << " ";
        }
        cout << endl;
    }
    else{
        for(int i = n; i >= 1; --i){
            if(i == (n/2)+1){
                cout << i-1 << " ";
            }
            else if(i == ((n/2)+1) - 1){
                cout << i+1 << " ";
            }
            else{
                cout << i << " ";
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