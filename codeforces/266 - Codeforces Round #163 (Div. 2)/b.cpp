#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);

  // input
  int n, t;
  string queue;
  char aux;
  cin >> n >> t;
  cin >> queue;

  // solution
  for (int i = 0; i < t; i++){
    for(int j = 0; j < queue.size(); j++){
      if (queue[j] == 'B' && queue[j+1] == 'G' && j != queue.size() - 1){
        aux = queue[j + 1];
        queue[j+1] = queue[j];
        queue[j] = aux;
        j++;
      }
    }
  }
  // answer
  cout << queue;
  return 0;
}
