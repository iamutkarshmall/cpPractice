#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int a, b, c, d, k, x, y;
        cin >> a >> b >> c >> d >> k;
        x = abs(a-c);
        y = abs(b-d);
        int diff = k - (x + y);
        if (diff % 2 == 0 && k >= x+y) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}