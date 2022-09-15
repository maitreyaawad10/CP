#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n, k;
    cin >> n >> k;

    if(n == 1 && k == 1){
        cout << "YES" << endl;
        return;
    }    

    if(n <= k){
        cout << "NO" << endl;
    }

    else{
        if(n < ((k*(k+1))/2)){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
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