#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    ll n, answer;

    // read input
    cin >> n;

    answer = ceil(sqrt(n));
    if(answer * (answer - 1) >= n){
        answer = 2*answer - 1;        
    }
    else{
        answer = 2 * answer;
    }
    // print answer
    cout << answer << endl;

    return 0;
}