#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    ll n, m, k;

    // read input
    cin >> n >> m >> k;
    ll a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    ll maxSum = 0;
    for(int i = n-1; i >= n - m * k; i--){
        maxSum += a[i];
    }
    // print answer
    cout << maxSum << endl;
    for(int i = n-k; i < n; i++){
        cout << i + 1 << endl;
    }
    return 0;
}