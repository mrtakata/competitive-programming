#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int q, id, l, r, minL, minR;
    char op;
    map<int, int> bookIndex;
    // read input
    cin >> q;
    cin >> op >> id;
    bookIndex[id] = 0;
    r = l = 0;
    // r = 1;
    // l = -1;

    for(int i = 1; i < q; i++){
        cin >> op >> id;
        if(op == 'L'){
            l--;
            bookIndex[id]=l;
        }
        else if(op == 'R'){
            r++;
            bookIndex[id] = r;
        }
        else{ // op == ?
            minL = abs(l - bookIndex[id]);
            minR = abs(r - bookIndex[id]);
            cout << min(minL, minR) << endl;
        }
    }

    return 0;
}