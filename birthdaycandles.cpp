#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int *candles){
    int max = candles[0], count = 0;

    int len = sizeof(candles) / sizeof(int);
    cout << len;
    
    for(int i = 0; i < len; i++){
        if(candles[i] > max){
            max = candles[i];
        }
    }
    
    for(int i = 0; i < len; i++){
        if(candles[i] == max){
            count++;
        }
    }
    
    return count;
}

int main(){
    int n;
    cin >> n;
    
    int candles[n];
    
    for(int i = 0; i < n; i++){
        cin >> candles[i];
    }
    
    int ans = birthdayCakeCandles(candles);
    
    cout << ans;
    
    return 0;
}
