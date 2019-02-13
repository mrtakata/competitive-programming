#include <bits/stdc++.h>
#define ll long long int

using namespace std;

bool is_beautiful_year(string year){
  return year[0] != year[1] && year[0] != year[2] &&
         year[0] != year[3] && year[1] != year[2] &&
         year[1] != year[3] && year[2] != year[3];
}

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);
  string year;
  cin >> year;
  int y = stoi(year) + 1;
  while(!is_beautiful_year(to_string(y))){
    y++;
  }
  cout << y << endl;
  return 0;
}
