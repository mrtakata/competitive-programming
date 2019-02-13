#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int checkLexicOrder(string a, string b){
  int i = 0;
  while(i < a.size()){
    if(tolower(a[i]) > tolower(b[i])){
      return 1;
    }
    if(tolower(a[i]) < tolower(b[i])){
      return -1;
    }
    i++;
  }
  return 0;
}
int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);

  string a, b;
  cin >> a >> b;
  cout << checkLexicOrder(a, b) << endl;
  return 0;
}
