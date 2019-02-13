#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int x, y, z, a, b, c;

    // read input
    cin >> x >> y >> z >> a >> b >> c;

    if(a >= x && a - x + b >= y && a - x + b - y + c >= z){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}