#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s, t;
    cin >> s >> t;

    

    int flag = 0;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == 'a' || s[i] == 'b' || s[i] == 'c'){
            flag = 1;
        }
    }

    if(flag == 0 || t != "abc"){
        sort(s.begin(), s.end());
        cout << s << endl;
    }
    else{
        sort(s.begin(), s.end());
        string a, b, c, d;

        for(int i = 0; i < s.length(); ++i){
            if(s[i] == 'a'){
                a.push_back(s[i]);
            }

            else if(s[i] == 'b'){
                b.push_back(s[i]);
            }
            else if(s[i] == 'c'){
                c.push_back(s[i]);
            }
            else{
                d.push_back(s[i]);
            }
        }
        // sort(d.begin(), d.end());
        cout << a+c+b+d << endl;
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


#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll z, n, c[26], i, j;
    string t, s;
    
    cin>>z;
    
    for(;z--;)
    {
        cin>>s;
        cin>>t;
        
        if(t=="abc"){
            n=s.size();
            
            for(i=0; i<26; i++)
            {
                c[i]=0;
            }
            for(i=0; i<n; i++)
            {
                c[s[i]-97]++;
            }
            
            if(c[0]==0 || c[1]==0 || c[2]==0){
                sort(s.begin(), s.end());
                cout<<s<<"\n";
                continue;
            }
            
            while(c[0]>0){
                cout<<"a";
                c[0]--;
            }
            while(c[2]>0){
                cout<<"c";
                c[2]--;
            }
            while(c[1]>0){
                cout<<"b";
                c[1]--;
            }
            
            for(i=3; i<26; i++)
            {
                while(c[i]>0){
                    cout<<char(i+97);
                    c[i]--;
                }
                
            }
            cout<<"\n";
        }else{
            n=s.size();
            sort(s.begin(), s.end());
            
            cout<<s<<"\n";
        }
    }
}