#include <bits/stdc++.h>

using namespace std;

/*
11 2 4          00 01 02
4 5 6           10 11 12
10 8 -12        20 21 22  
*/

int diagonalDifference(int Arr[][100], int n){
    int sump = 0, sums = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                sump = sump + Arr[i][j];
            }
            
            if(i == n-j-1){
                sums = sums + Arr[i][j];
            }
        }
    }
    
    int abs = sump - sums;

    if(abs < 0){
        return -abs;
    }
    else{
        return abs;
    }
}

int main(){
    int n;
    cin >> n;
    
    int arr[100][100];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    int ans = diagonalDifference(arr, n);
    
    cout << ans << endl;
    
    return 0;
}
