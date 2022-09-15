#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	
	while(t--){
	    int a[3];
	    
	    for(int i = 0; i < 3; i++){
	        cin >> a[i];
	    }
	    
	    /*int max = a[0], min = 1e9; 
	    for(int i = 0; i < 3; i++){
	        if(a[i] > max){
	            max = a[i];
	        }
	        if(a[i] < min){
	            min = a[i];
	        }
	    }
	    
	    for(int i = 0; i < 3; i++){
	        if(a[i] != max && a[i] != min){
	            cout << a[i] << endl;
	        }
	    }*/
	    
	    sort(a, a+3);
	    
	    cout << a[1] << endl;
	}
	
	return 0;
}
