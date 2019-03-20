/* Helped by tutorial */
#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
ll n, q;
int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> n >> q;
    for(int i = 0; i < q; i++){
        ll x, y;
        cin >> x >> y;
        ll count = (x - 1) * n + y;
        ll ans;
        if((x+y) % 2 == 0){
            ans = ceil(count/2.0);
            cout << ans << endl;
        }
        else{
            ans = ceil(count/2.0) + ceil((n*n)/2.0);
            cout << ans << endl;
        }
    }

    return 0;
}