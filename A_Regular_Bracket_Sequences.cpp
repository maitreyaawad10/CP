#include <bits/stdc++.h>

using namespace std;

void print_rem(int n){
    for(int i = 1; i <= n; ++i){
        cout << '(';
    }

    for(int i = 1; i <= n; ++i){
        cout << ')';
    }
}

void print(int n){
    int x = n, m = n;

    while(m--){
        for(int i = 1; i <= m+1; ++i){
            cout << '(';
        }

        for(int i = 1; i <= m+1; ++i){
            cout << ')';
        }

        print_rem(n - (m+1));

        cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        print(n);
    }

    return 0;
}