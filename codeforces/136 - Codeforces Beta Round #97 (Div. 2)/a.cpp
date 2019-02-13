#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, p[101], answer[101];

  cin >> n;

  for(int i = 1; i <= n; i++){
    cin >> p[i];
    answer[p[i]] = i;
  }

  for(int i = 1; i <= n; i++){
    cout << answer[i] << " ";
  }
  cout << endl;
  return 0;
}
