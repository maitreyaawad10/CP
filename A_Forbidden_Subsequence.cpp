#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s, t;
    cin >> s >> t;

    sort(s.begin(), s.end());   

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == t[0] && s[i+1] == t[1]){
            char temp = s[i];
            s[i] = s[i+1];
            s[i+1] = temp;
        }
    }
    
    cout << s << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}