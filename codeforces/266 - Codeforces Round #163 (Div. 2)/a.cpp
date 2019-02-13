#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);

  // input
  int n, answer = 0, i = 0;
  string rocks;
  cin >> n;
  cin >> rocks;

  // solution
  while ( i < rocks.size() ) {
    if (i != rocks.size() - 1 && rocks[i] == rocks[i+1]){
      rocks.erase(rocks.begin() + i);
      answer++;
    }
    else{
      i++;
    }
  }
  // answer
  cout << answer;
  return 0;
}
