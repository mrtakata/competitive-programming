#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MAXN = 1000000001;
const ll MOD = 1000000007;
ll n;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> n;
    ll x, y, z;
    x = y = z = 0;

    for(int i = 0; i < n; i++){
        int x1, y1,z1;
        cin >> x1 >> y1 >> z1;
        x+= x1;
        y+= y1;
        z+= z1;
    }

    if(x == 0 && y == 0 && z == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}