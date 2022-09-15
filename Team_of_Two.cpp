#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    bool flag = false;

    int a[n+1][6];

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= 5; ++j){
            a[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;

        for(;k--;){ 
            int j;
            cin >> j;
            a[i][j] = 1;
        }
    }
    

    for (int i = 1; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            if(a[i][1] + a[j][1] >= 1 &&
                a[i][2] + a[j][2] >= 1 &&
                a[i][3] + a[j][3] >= 1 &&
                a[i][4] + a[j][4] >= 1 &&
                a[i][5] + a[j][5] >= 1){
                    flag = true;
                    break;
            }
        }  

        if(flag == true){
            break;  
        }
    }
    
    if(flag == true){
        cout << "YES" << endl;
    }

    else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}