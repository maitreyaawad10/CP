#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int l, r, k;
    cin >> l >> r >> k;

    vector<int> v;

    if(l == r && l == 1){
        cout << "NO" << endl;
    }

    else if(l == r && l != 1){
        cout << "YES" << endl;
    }

    else{
        for(int i = l, cnt = 1; cnt <= k; i+=2, cnt++){
            if(i == r)
                v.push_back(i);
            else
                v.push_back(i*i+1);
        }

        for(int i = 0; i < v.size(); i++){
            if(__gcd(v[i], v[i+1]) == 1){
                cout << "NO" << endl;
                return;
            }
        }

        // cout << "YES" << endl;
        for(auto value : v){
            cout << value << " " ;
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