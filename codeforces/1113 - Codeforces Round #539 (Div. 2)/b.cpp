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
    ll totalPower = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        totalPower += a[i];
    }
    ll ans = totalPower, currentTotal;
    sort(a, a + n);

    for(int i = 0; i < n; i++){
        ll x = 1;
        while(x <= a[i]/2){
            if(a[i] % x == 0){
                currentTotal = totalPower - a[i] 
                                - a[0] + a[i]/x + a[0] * x;
                ans = min(ans, currentTotal);
            }
            x++;
        }
    }
    cout << ans << endl;
    return 0;
}