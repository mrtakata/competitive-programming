#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, current;
  int answer = 0;

  cin >> n >> current;
  int lowest, highest;
  lowest = highest = current;

  for(int i = 1; i < n; i++){
    cin >> current;
    if(current < lowest){
      answer++;
      lowest = current;
    }
    else if(current > highest) {
      answer++;
      highest = current;
    }
  }
  cout << answer << endl;
  return 0;
}
