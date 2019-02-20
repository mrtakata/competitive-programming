#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MAXN = 101;
const ll MAXM = 1012;
ll a[MAXN];
ll n, m;

bool doableInNDays(ll nDays){
    ll count = 0, sum = 0;
    
    for(ll i = n-1; i >= 0; i--){
        sum = sum + max(a[i] - count / nDays, (ll) 0);
        count++;
        if(sum >= m) return true;
    }
    return false;
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    ll l = 1, r = n, ans = -1;
    while(l <= r){
        ll mid = (r-l) / 2;
        mid += l;
        if(doableInNDays(mid)){
            ans = mid;
            r = (mid - 1);
        }
        else{
            l = (mid + 1);
        }
    }
    cout << ans << endl;
    return 0;
}