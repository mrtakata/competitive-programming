#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

ll solve(ll mid, ll n, ll m){
  mid--;
  ll ans = 0;
  for(ll i = 1; i <= n; i++){
    ans += min((ll)m, (ll)mid/i);
  }
  return ans;
}

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll n, m;
  ll k;
  cin >> n >> m >> k;

  ll left = 1, right = (ll) (n * m + 1);

  while(left < right){
    ll mid = (left+right)/2;
    if(solve(mid, n, m) < k) left = mid + 1;
    else right = mid;
  }
  cout << left - 1 << endl;

  return 0;
}