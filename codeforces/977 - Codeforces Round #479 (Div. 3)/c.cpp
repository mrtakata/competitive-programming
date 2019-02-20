#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll n, k;
  cin >> n >> k;
  ll a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a, a+n);
  if(k == 0){
    if(a[k] <= 1) cout << -1 << endl;
    else cout << a[k] - 1 << endl;
  }
  else{
    k--;
    if(a[k] == a[k+1]) cout << -1 << endl;
    else cout << a[k] << endl;
  }
  return 0;
}