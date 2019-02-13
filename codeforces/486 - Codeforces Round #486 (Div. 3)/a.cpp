#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    ll n;

    // read input
    cin >> n;
    ll ans;
    // print answer
    if(n % 2 > 0){
        cout << "-";
    }
    cout << (ll) ceil(n/2.0) << endl;

    return 0;
}