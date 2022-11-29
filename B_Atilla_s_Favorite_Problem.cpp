#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    char max = s[0];

    for(int i = 0; i < n; ++i){
        if(s[i] > max)
            max = s[i];
    }

    cout << (int)max - 96 << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--)
        solve();


    return 0;
}