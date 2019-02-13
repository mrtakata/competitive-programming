#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    ll n, l1, r1, l2, r2, n1, n2;

    // read input
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> l1 >> r1 >> l2 >> r2;
        
        // solving
        n1 = l1;
        n2 = l2 != l1? l2 : r2;
        // print answer
        printf("%lld %lld\n", n1, n2);
    }

    return 0;
}