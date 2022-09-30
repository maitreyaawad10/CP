#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    sort(s.begin(), s.end(), greater<int> ());

    int plus = 0, minus = 0;

    for(int i = 0; i < s.length(); ++i){
        if(s.back() == '+') {
            plus++;
            s.pop_back();
        }
        else if(s.back() == '-') {
            minus++;
            s.pop_back();
        }
    }

    string new_s;

    while(! s.empty()) {
        new_s += s.back();
        s.pop_back();
        if(minus > 0) {
            new_s += '-';
            minus--;
        }
        else if(plus > 0) {
            new_s += '+';
            plus--;
        }
    }

    reverse(new_s.begin(), new_s.end());

    cout << new_s << endl;
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