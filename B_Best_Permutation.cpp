#include <bits/stdc++.h>

using namespace std;

void swap_num(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void solve(){
    int n;
    cin >> n;

    int x = 0;

    int a[n];

    for(int i = 1; i <= n; ++i){
        a[i] = i;
    }

    if(n % 2 == 0){
        for(int i = 1; i < n-2; i+=2){
            swap_num(a[i], a[i+1]);
        }
    }

    else{
        for(int i = 2; i < n-2; i+=2){
            swap_num(a[i], a[i+1]);
        }
    }

    for(int i = 1; i <= n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
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