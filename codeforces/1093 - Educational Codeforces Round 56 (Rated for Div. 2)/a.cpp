#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int


int main(){

    // variable declaration
    ll t, n;

    // read input
    cin >> t;

    // print answer
    for(int i = 0; i < t; i++){
        cin >> n;
        cout << n / 7 + 1 << endl;
    }

    return 0;
}