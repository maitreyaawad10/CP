#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    string s;
    cin >> s;

    string t = s;

    reverse(s.begin(), s.end());

    cout << s + t << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--)
        solve();


    return 0;
}