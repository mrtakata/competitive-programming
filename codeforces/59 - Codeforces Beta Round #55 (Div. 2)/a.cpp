#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char toLowercase(char c){
  return char(c - 'A' + 'a');
}

char toUppercase(char c){
  return char(c + 'A' - 'a');
}
int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);
  char input[100];
  cin >> input;

  // count occurrences
  int n_lower = 0, n_upper, total;
  int i = 0;
  while(input[i] != '\0'){
    if(input[i] > 96){
      n_lower++;
    }
    i++;
  }
  total = i;
  n_upper = total - n_lower;
  // res
  if(n_lower >= n_upper){
    i = 0;
    while(input[i] != '\0'){
      if(input[i] > 96){
        cout << input[i];
      }
      else{
        cout << toLowercase(input[i]);
      }
      i++;
    }
  }
  else{
    i = 0;
    while(input[i] != '\0'){
      if(input[i] < 96){
        cout << input[i];
      }
      else{
        cout << toUppercase(input[i]);
      }
      i++;
    }
  }

  cout << endl;
  return 0;
}
