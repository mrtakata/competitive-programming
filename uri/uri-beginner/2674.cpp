#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int isPrime(int n){
    int i = 2, limit = sqrt(n), answer = 1;
    if(n < 2) {
        answer = 0;
    }
    else{
        while(i <= limit){
            if(n % i == 0){
                answer = 0;
            }
            i++;
        }
    }
    return answer;
}

int main(){
  int primeDigits[4] = {2, 3, 5, 7}, number, i = 0;
  string answer, number_string;
  int isSuperPrime = 1;
  cin >> number;


  number_string = std::to_string(number);
  if(!isPrime(number)){
    answer = "Nada";
  }
  else{
    //super primo
    while( (i < number_string.size()) || isSuperPrime){
      if( !isPrime( atoi(std::c_str(number_string[i]) ) ){
        isSuperPrime = 0;
      }
      i++;
    }

    if(isSuperPrime){
      answer = "Super";
    }else{
      answer = "Primo";
    }

  }


  cout << answer << endl;
  return 0;
}
