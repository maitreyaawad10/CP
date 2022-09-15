#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin >> s;

    int cnt = 0, j;

    for(int i = 0; i < s.length(); ++i){
        j = i+1;
        if(s[i] == s[j]){
            cnt++;
            if(cnt >= 6){
                cout << "YES" << endl;
                return;
            }
        }
        else{
            cnt = 0;
        }
    }
    cout << "NO" << endl;
}

int main(){

    solve();

    return 0;
}