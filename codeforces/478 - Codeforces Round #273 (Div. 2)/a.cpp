#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int sum = 0, val;

    // read input
    for(int i = 0; i < 5; i++){
        cin >> val;
        sum += val;
    }
    if(sum % 5 > 0 || sum == 0){
        cout << -1 << endl;
        return 0;
    }
    // print answer
    cout << sum/5 << endl;

    return 0;
}