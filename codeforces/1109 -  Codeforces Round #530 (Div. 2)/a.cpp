#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int w, h, w1, h1, w2, h2;

    // read input
    cin >> w >> h >> w1 >> h1 >> w2 >> h2;

    while(h >= 0){
        w+=h;
        if (h == h1){
            w-=w1;
        }
        else if(h == h2){
            w-=w2;
        }
        w = w > 0 ? w : 0;
        h--;
    }
    // print answer
    
    cout << w << endl;;

    return 0;
}