#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

ll n, k, A, B, a[123456];

ll destruction_power(int l, ll r){
    ll q = upper_bound(a, a + k, r) - lower_bound(a, a + k, l);
    if(q == 0) return A;
    if(l == r) return B * q;
    ll mid = l + (r-l)/2;
    return min(destruction_power(l, mid) + destruction_power(mid+1LL, r), B * q * (r-l+1LL));

}

int main(){

    // variable declaration   
    // read input
    cin >> n >> k >> A >> B;
    ll end = (long long)1 << n;
    for(ll i = 0; i < k; i++){
        cin >> a[i];
    }
    sort(a, a + k);
    // print answer
    
    cout << destruction_power(1LL, end) << endl;
    // 
    return 0;
}