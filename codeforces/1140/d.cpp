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
    ll ans = 0;
    for(int i = 2; i <= n-1; i++){
        ans += i*(i+1);
    }

    cout << ans << endl;
    return 0;
}