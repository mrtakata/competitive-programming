#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int x, y, a, b;
    int count = 0;;

    // read input
    cin >> x >> y >> a >> b;

    a = a > b ? a : b + 1;
    for(int i = a; i <= x; i++){
        int aux = i <= y ? i - 1 : y;
        for(int j = b; j <= aux; j++){
            count++;
        }
    }
    cout << count << endl;
    // print answer
    for(int i = a; i <= x; i++){
        int aux = i <= y ? i - 1 : y;
        for(int j = b; j <= aux; j++){
            cout << i << ' ' << j << endl;
        }
    }

    return 0;
}