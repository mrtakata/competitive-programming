#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    ll n, k, m, ans;
    cin >> n >> k >> m;
    
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    ans = 0;
    if(k <= m){
        ans = a[n-1] * k;
    }
    else{
        ans = (k / (m + 1)) * (m * a[n-1] + a[n-2]);
        if(k % (m + 1) > 0){
            ans += k % (m + 1) * a[n-1];
        }
    }
    cout << ans << endl;
    
    return 0;
}