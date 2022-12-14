#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    set<int> st;

    for(int i = 1; i * i <= n; ++i){
        st.insert(i * i);
    }

    for(int i = 1; i * i * i <= n; ++i){
        st.insert(i * i * i);
    }

    cout << st.size() << endl;
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