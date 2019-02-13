#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int answer = 0;
  int count = 0;
  int r,c;
  cin >> r >> c;
  char mat[r][c];

  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cin >> mat[i][j];
    }
  }

  for(int i = 0; i < r; i++){
    count = 0;
    for(int j = 0; j < c; j++){
      if(mat[i][j] == 'S'){
        count = 0;
        break;
      }
      if(mat[i][j] == 'x'){
        continue;
      }
      else{
        count++;
      }
    }
    if(count > 0){
      for(int j = 0; j < c; j++){
        mat[i][j] = 'x';
      }
    }
    answer+=count;
  }

  for(int i = 0; i < c; i++){
    count = 0;
    for(int j = 0; j < r; j++){
      if(mat[j][i] == 'S'){
        count = 0;
        break;
      }
      if(mat[j][i] == 'x'){
        continue;
      }
      else{
        count++;
      }
    }
    if(count > 0){
      for(int j = 0; j < r; j++){
        mat[j][i] = 'x';
      }
    }
    answer+=count;
  }

  cout << answer << endl;
  return 0;
}
