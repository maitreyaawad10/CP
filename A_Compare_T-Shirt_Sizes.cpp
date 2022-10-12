#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    string a,b;
    cin >> a >> b;

    if(a == b){
        cout << "=" << endl;
        return;
    }

    if(a[a.size()-1] == b[b.size()-1] && a[a.size()-1] == 'S' && a.size() > b.size()){
        cout << "<" << endl;
    }

    else if(a[a.size()-1] == b[b.size()-1] && a[a.size()-1] == 'S' && a.size() < b.size()){
        cout << ">" << endl;
    }

    else if(a[a.size()-1] == b[b.size()-1] && a[a.size()-1] == 'L' && a.size() > b.size()){
        cout << ">" << endl;
    }

    else if(a[a.size()-1] == b[b.size()-1] && a[a.size()-1] == 'L' && a.size() < b.size()){
        cout << "<" << endl;
    }
    
    else{
        if(a[a.size()-1] < b[b.size()-1]){
            cout << ">" << endl;
        }
        else{
            cout << "<" << endl;
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