#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;

    cin >> n;
    ll a[n];
    ll pre[n];
    cin >> a[0];
    pre[0] = a[0];
    for(int i = 1; i < n; i++){
        cin >> a[i];
        pre[i] = pre[i-1] ^ a[i];
    }
    
    
    return 0;
}