#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    ll n;
    ll a, b, k;
    // read input
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> k;

        cout << a * (ll)(ceil(k/2.0)) - b * (k/2) << endl;
    }
    return 0;
}