#include <iostream>
#include <string>
using namespace std;
//define macros
#define ll long long int

bool isPrime(int n){
    int i = 2, limit = n/2;
    if( n == 1){
      return false;
    }
    if(n == 2) {
      return true;
    }
    while(i <= limit){
      if(n % i == 0){
        return false;
      }
      i++;
    }
    return true;
}

int main(int argc, char *argv[]){
  
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, val;
  // n = atoi(argv[1]);

  cin >> val;
  // for(int i = 0; i < n; i++){
  while(!cin.eof()){
    if(!isPrime(val)){
      cout << "Nada" << endl;
      // continue;
    }
    else{
      string s = to_string(val);
      bool isSuperPrime = true;
      for(int j = 0; j < s.size(); j++){
        if(s[j] == '0' || s[j] == '1' || s[j] == '4' || 
           s[j] == '6' || s[j] == '8' || s[j] == '9'){
          isSuperPrime = false;
          break;
        }
      }
      if(isSuperPrime){
        cout << "Super" << endl;
      }
      else{
        cout << "Primo" << endl;
      }
    }
    cin >> val;
  }
  
  return 0;
}