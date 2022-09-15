#include <bits/stdc++.h>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        int flag = 0, cnt = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i != j){
                    if(arr[i] == arr[j]){
                        cnt++;
                    }
                }
            }
            if(cnt == 0){
                cout << arr[i] << endl;
            }
        }
        if((cnt != 0) && (cnt % 2 != 0)){
            cout << "NO" << endl;
        }
        else if(cnt == 0){
            cout << "YES" << endl;
        }
        
    }
    
    return 0;
}