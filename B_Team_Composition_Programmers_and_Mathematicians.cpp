#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    int a, b;
    cin>>a>>b;
    int ans=0;
    
    if(a<b){
        swap(a, b);
    }
        
    ans=ans+min((a-b)/2, b);
    b=b-ans;
    ans=ans+b/2;
    
    cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}