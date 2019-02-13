#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int a, b, c;
    int x, y, z;
    // read input
    cin >> a >> b >> c;

    x = sqrt((a * c)/b);
    y = sqrt((b * c)/a);
    z = sqrt((a * b)/c);
    // print answer
    cout <<4 * (x + y + z) << endl;

    return 0;
}