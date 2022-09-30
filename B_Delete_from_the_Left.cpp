// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long

// void solve(){
//     string s, t;
//     cin >> s >> t;
    
//     ll l1 = s.length(), l2 = t.length();

//     if(s[l1-1] != t[l2-1]){
//         cout << s.length()+t.length() << endl;
//         return;
//     }

//     ll cnt = 0, cnt_e = 0, flag = 0;

//     if(l1 == l2){
//         for(int i = 0; i < l1; ++i){
//             if(s[i] != t[i]){
//                 cnt += 2;
//             }
//             else if((s[i] == t[i])){
//                 if(flag == 0){
//                     // cnt += 2;
//                     for(int j = i; s[j] == t[j]; j++){
//                         cnt_e++;
//                     }

//                     cnt = cnt + (cnt_e*2);
//                     flag = 1;
//                 }
//             }
//         }
//     }

//     else if(l1 > l2){
//         cnt = l1-l2;
//         for(int i = cnt, j = 0; i < l1; ++i, ++j){
//             if(s[i] != t[j]){
//                 cnt += 2;
//             }
//             else if((s[i] == t[i])){
//                 if(flag == 0){
//                     // cnt += 2;
//                     for(int j = i; s[j] == t[j]; j++){
//                         cnt_e++;
//                     }

//                     cnt = cnt + (cnt_e*2);
//                     flag = 1;
//                 }
//             }
//         }
//     }

//     else{
//         cnt = l2-l1;
//         for(int i = 0, j = cnt; j < l2; ++i, ++j){
//             if(s[i] != t[j]){
//                 cnt += 2;
//             }
//             else if((s[i] == t[i])){
//                 if(flag == 0){
//                     // cnt += 2;
//                     for(int j = i; s[j] == t[j]; j++){
//                         cnt_e++;
//                     }

//                     cnt = cnt + (cnt_e*2);
//                     flag = 1;
//                 }
//             }
//         }
//     }

//     cout << cnt << endl;
// }

// int main(){

//     solve();

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    string s, t;
    cin >> s >> t;
    
    ll l1 = s.length(), l2 = t.length();

    if(s[l1-1] != t[l2-1]){
        cout << s.length()+t.length() << endl;
        return;
    }

    ll cnt = 0, cnt_e = 0, flag = 0;

    if(l1 == l2){
        for(int i = 0; i < l1; ++i){
            
        }
    }

    else if(l1 > l2){
        cnt = l1-l2;
        for(int i = cnt, j = 0; i < l1; ++i, ++j){
            
        }
    }

    else{
        cnt = l2-l1;
        for(int i = 0, j = cnt; j < l2; ++i, ++j){
            
        }
    }

    cout << cnt << endl;
}

int main(){

    solve();

    return 0;
}