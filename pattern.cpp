// #include <bits/stdc++.h>

// using namespace std;

// /*
// PATTERN 1 :

//     *    
//    ***   
//   *****  
//  ******* 
// *********

// PATTERN 2 :

//     *    
//    * *   
//   * * *  
//  * * * * 
// * * * * *

// */



// int main(){
// 	int n = 5;

// 	for(int i = 1; i <= n; ++i){
// 		for(int j = 1; j <= 2*n-1; ++j){
// 			if(j >= (6-i) && j <= (4+i)){
// 				cout << "*";
// 			}
// 			else{
// 				cout << " ";
// 			}
// 		}
// 		cout << endl;
// 	}	

// 	cout << "------------\n";

// 	for(int i = 1; i <= n; ++i){
// 		int k = 1;
// 		for(int j = 1; j <= 2*n-1; ++j){
// 			if(j >= (6-i) && j <= (4+i) && k){
// 				cout << "*";
// 				k = 0;
// 			}
// 			else{
// 				cout << " ";
// 				k = 1;
// 			}
// 		}
// 		cout << endl;
// 	}	

// 	return 0;
// }



/*
PATTERN 3 :

    *     
   ***    
  *****   
 *******  
********* 
********* 
 *******  
  *****   
   ***    
    *    

*/


#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, k=0;
    cin >> n;

    m = (n+1) / 2;
    
    for(int i=1; i<=n; i++){
        if(n % 2 == 0){
        	if(i <= m)	
        		k++;
        	if(i > m+1)
        		k--;
        }
        else{
        	if(i <= m)
        		k++;
        	else
        		k--;
        }
        
        for(int j = 1; j <= n; j++){
            if(((j >= (m+1-k)) && (j <= (m-1+k)))){
                cout << "*";
            }

            else{
                cout << " ";
            }
        }
        cout<<"\n";
    }
    return 0;
}