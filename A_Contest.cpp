#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll misha = 0, vasya = 0;

    misha = max(((3 * a) / 10), a - ((a / 250) * c));
    vasya = max(((3 * b) / 10), b - ((b / 250) * d));

    if(misha > vasya)
        cout << "Misha" << endl;
    else if(vasya > misha)
        cout << "Vasya" << endl;
    else
        cout << "Tie" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}