#include <iostream>

using namespace std;    

void solve(){
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;

    int normal = (abs(x2 - x1)) + (abs(y2 - y1));

    int fast = min(x1, min(y1, min(n - x1 + 1, n - y1 + 1))) + min(y2, min(x2, min(n - x2 + 1, n - y2 + 1)));

    cout << min(normal, fast) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
        solve();
    

    return 0;
}