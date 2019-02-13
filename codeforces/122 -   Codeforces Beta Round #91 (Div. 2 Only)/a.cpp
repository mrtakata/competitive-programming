#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

const int luckyNumbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

int main(){

    // variable declaration
    int n;

    // read input
    cin >> n;
    for(auto number: luckyNumbers){
        if(n % number == 0){
            cout << "YES" << endl;
            return 0;
        }
    }
    // print answer
    cout << "NO" << endl;

    return 0;
}