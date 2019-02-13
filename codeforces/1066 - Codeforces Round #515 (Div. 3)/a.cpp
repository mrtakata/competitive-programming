#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int t;
    ll lM, v, l, r, a;

    // read input
    cin >> t;

    // solution
    for(int i = 0; i < t; i++){
        cin >> lM >> v >> l >> r;
        a = lM/v - (-(l-1)/v + r/v);
        cout << a << endl;
    }

    return 0;
}