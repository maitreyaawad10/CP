#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void solve(){
    int x, y;
    cin >> x >> y;

    int a[x], k = 0;

    for(int i = 0; i < x; ++i){
        cin >> a[i];
        k += a[i];
    }

    if(k == y){
        cout << "NO" << endl;
        return;
    }
    
    cout << "YES" << endl;

    int sum = 0, l = 0;

    int ma = *max_element(a, a+x);
    int mi = *min_element(a, a+x);

    if(y < ma && y > mi){
        sort(a, a+x, greater<int>());
    }

    else if(y < mi){
        sort(a, a+x);
    }

    else{
        for(int i = 0; i < x-1; ++i){
            l = sum + a[i];

            if(l == y){
                swap(a[i], a[i+1]);
            }
            
            sum += a[i];
        }
    }

    for(int i = 0; i < x; ++i){
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