#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int n, k, A, B, array[123456];


int main(){

    // variable declaration   
    // read input
    cin >> n >> k >> A >> B;
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    sort(array, array + n);
    // print answer
    ll end = (long long)1 << n;
    cout << destruction_power(1,end) << endl;

    return 0;
}