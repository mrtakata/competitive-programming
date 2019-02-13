#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, m, k;
  long int klargest = 0, value;
  cin >> n >> m >> k;
  // long int mat[n][m];

  for(int i = n; i >= 1; i--){
    for(int j = m; j >= 1; j--){
      // mat[i-1][j-1] = i*j;
      value = i*j;
      if(value > klargest){
        klargest = value;
      }
      k--;
      if(k == 0){
        break;
      }
    }
  }
  // for(int i = 0; i < n; i++){
  //   for(int j = 0; j < m; j++){
  //     cout << mat[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  cout << klargest << endl;
  return 0;
}
