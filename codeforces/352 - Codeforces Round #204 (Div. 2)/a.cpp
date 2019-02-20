#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

map<int, int> digits;

int main(){

    // variable declaration
    int n, val;

    // read input
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> val;
        digits[val]++;
    }
    
    if(digits[5] / 9 > 0 && digits[5] < n){
        for(int i = 0; i < digits[5]/9; i++){
            cout << 555555555;
        }
        for(int i = 0; i < digits[0]; i++){
            cout << 0;
        }
        cout << endl;
    }
    else if(digits[5] == n){
        cout << -1 << endl;
    }
    else{
        cout << 0 << endl;
    }

    return 0;
}