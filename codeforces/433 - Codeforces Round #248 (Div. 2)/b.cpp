#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int n, queries;
    cin >> n;

    ll vals[2][n], sum = 0, num;

    for(int i = 0; i < n; i++){
        cin >> num;
        vals[1][i] = num;
        sum += num;
        vals[0][i] = sum;
    }
    sort(vals[1], vals[1]+n);

    sum = 0;
    for(int i = 0; i < n; i++){
        sum += vals[1][i];
        vals[1][i] = sum;
    }

    int op, l, r;
    ll left, right;
    
    cin >> queries;
    for(int i = 0; i < queries; i++){
        cin >> op >> l >> r;

        op--; l--; r--;
        left = l > 0 ? vals[op][l-1] : 0;
        right = vals[op][r];
        
        cout << right - left << endl;
    }

    return 0;
}