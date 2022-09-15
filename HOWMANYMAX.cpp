#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int m;
        cin >> m;

        string a;
        cin >> a;
        
        int ans = 1;
        
        for(int i = 0; i < (m-1); i++)
        {
            if(a[i] == '1' && a[i+1] == '0')
            {
                ans++;
            }
        }
        
        cout << ans << endl;   
    }

	return 0;
}