#include <bits/stdc++.h>

using namespace std;

/*
   #    03 02 01 00     
  ##    13 12 11 10
 ###    23 22 21 20
####    33 32 31 30
*/

void staircase(int n) {
    for(int i = 0; i < n; i++){
        for(int j = n-1; j >= 0; j--){
            if(i >= j){
                cout << "#";
            }
            else{
                cout << " ";
            }
        }
        
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    
    staircase(n);
    
    return 0;
}
