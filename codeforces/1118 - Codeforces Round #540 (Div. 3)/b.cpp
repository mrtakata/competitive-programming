#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int a[n];
    ll ans = 0, sums[2] = {0,0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sums[(i+1) % 2] += a[i];
    }
    for(int i = n-1; i >=0; i--){
        sums[(i+1) % 2] -= a[i];
        if(sums[0] == sums[1]) ans++;
        sums[i%2] += a[i];
    }
    cout << ans << endl;
    return 0;
}