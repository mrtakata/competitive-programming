#include <bits/stdc++.h>
#define ll long long int

using namespace std;

long int tor(long int a, long int b){
  long int c = 0;
  int count = 0;
  while(a != 0 || b != 0){
    c += ( ( (a % 3) + (b % 3) ) % 3 ) * pow(3, count);
    a = a/3;
    b = b/3;
    count++;
  }
  return c;
}

long int findMidTor(long int a, long int c){
  long int b = 0;
  int count = 0;
  while( (a != 0 || c!= 0)){
    b +=  ( ( ((c % 3) + 3) - a % 3 ) % 3 ) * pow(3, count);
    a = a/3;
    c = c/3;
    count++;
  }
  return b;
}

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);

  long int a, c = 0;
  cin >> a >> c;

  cout << findMidTor(a, c) << endl;
  return 0;
}
