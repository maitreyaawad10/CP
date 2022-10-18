#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    
    auto ma = *max_element(v.begin(), v.end());
    auto mi = *min_element(v.begin(), v.end());

    cout << ma-mi << endl;
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