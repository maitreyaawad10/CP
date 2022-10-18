#include <bits/stdc++.h>

using namespace std;

#define ll long long

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
    
    auto am = *max_element(a.begin(), a.end());
    auto bm = *max_element(b.begin(), b.end());

    int ind1 = max_element(a.begin(), a.end()) - a.begin();
    int ind2 = max_element(b.begin(), b.end()) - b.begin();

    if(am > bm){
        while(bm > a[ind2]){
            swap(b[ind2], a[ind2]);
            bm = *max_element(b.begin(), b.end());
            ind2 = max_element(b.begin(), b.end()) - b.begin();
        }
    }
    else{
        while(am > b[ind1]){
            swap(a[ind1], b[ind1]);
            am = *max_element(a.begin(), a.end());
            ind1 = max_element(a.begin(), a.end()) - a.begin();
        }
    }

    cout << am * bm << endl;
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