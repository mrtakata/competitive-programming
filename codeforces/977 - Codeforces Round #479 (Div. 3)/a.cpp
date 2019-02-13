#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll n;
  int k;
  cin >> n >> k;

  while (k-- > 0){
    if (n % 10 > 0){
      n--;
    }
    else{
      n = n / 10;
    }
    // cout << n << " ";
  }
  cout << n << endl;
  return 0;
}
