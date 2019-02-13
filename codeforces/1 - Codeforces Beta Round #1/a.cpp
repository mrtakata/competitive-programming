#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    ll n, m, a;

    // read input
    cin >> n >> m >> a;

    ll side1, side2, answer;

    side1 = n/a;
    if(n % a > 0) side1++;

    side2 = m/a;
    if(m % a > 0) side2++;  

    // print answer
    answer = side1 * side2;
    if(answer == 0) answer++;
    cout << answer << endl;

    return 0;
}