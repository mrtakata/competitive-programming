#include <bits/stdc++.h>
#define ll long long int

using namespace std;

bool isPrime(int n){
  return (n == 2 || n == 3 || n == 5 || n == 7);
}

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int divisors[4], d, answer = 0;

  for(int i = 0; i < 4; i++){
    cin >> divisors[i];
  }
  cin >> d;
  bool hash[100001] = {false}, dividedByOne = false;

  for(int i = 0; i < 4; i++){
    if(divisors[i] == 1){
      answer = d;
      dividedByOne = true;
      break;
    }
    else{
      for(int j = divisors[i]; j <= d; j+= divisors[i]){
        if(!hash[j]){
          hash[j] = true;
        }
      }
    }
  }
  if(!dividedByOne){
    for(int i = 1; i <= d; i++){
      if(hash[i]){
        answer++;
      }
    }
  }
  cout << answer << endl;
  return 0;
}
