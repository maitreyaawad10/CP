#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges){
    int pos1 = 0, pos2 = 0, acnt = 0, ocnt = 0;
    
    for(int i = 0; i < apples.size(); i++){
        pos1 = a + apples[i];
        if(pos1 >= s && pos1 <= t){
            acnt++;
        }
        pos1 = 0;
    }
    cout << acnt << endl;
    
    for(int i = 0; i < oranges.size(); i++){
        pos2 = b + oranges[i];
        if(pos2 >= s && pos2 <= t){
            ocnt++;
        }
        pos2 = 0;
    }
    
    cout << ocnt << endl;
}

int main(){
    int s, t;
    cin >> s >> t;
    
    int a, b;
    cin >> a >> b;
    
    int m, n;
    cin >> m >> n;
    
    vector<int> apples(m);
    vector<int> oranges(n);
    
    for(int i = 0; i < m; i++){
        apples.push_back(i);
    }
    
    for(int i = 0; i < n; i++){
        oranges.push_back(i);
    }
    
    countApplesAndOranges(s, t, a, b, apples, oranges);
    
    return 0;
}
