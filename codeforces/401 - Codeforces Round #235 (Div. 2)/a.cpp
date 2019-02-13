#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, x, sum = 0, aux, answer = 0;
  cin >> n >> x;

  // getting sum of all items
  for(int i = 0; i < n; i++){
    cin >> aux;
    sum += aux;
  }
  sum = abs(sum);
  while(sum > 0){
    answer++;
    sum-= x;
  }
  cout << answer << endl;
  return 0;
}
