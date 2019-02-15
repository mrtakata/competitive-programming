#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

typedef struct{
    int x, y;
}Point;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    Point a, b, c, d;

    cin >> a.x >> a.y >> b.x >> b.y;
    
    if(a.x == b.x){ // parallel to y-axis
        d.y = a.y;
        c.y = b.y;
        c.x = d.x = a.x + b.y - a.y;
    }
    else if(a.y == b.y){ // parallel to x-axis
        c.x = b.x;
        d.x = a.x;
        c.y = d.y = a.y + b.x - a.x;
    }
    else{
        if(abs(b.x - a.x) != abs(b.y - a.y)){
            cout << -1 << endl;
            return 0;
        }
        else{
            c.x = a.x;
            c.y = b.y;
            d.x = b.x;
            d.y = a.y;
        }
    }
    cout << c.x << " " << c.y << " " << d.x << " " << d.y << endl;
    return 0;
}