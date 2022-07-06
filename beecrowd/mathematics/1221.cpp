#include <iostream>
#include <cmath>
using namespace std;

int isPrimo(int n){
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
  int numCases, number;
  cin >> numCases;

  while(numCases-- > 0){
    cin >> number;
    if(isPrimo(number)){
      cout << "Prime" << endl;
    }
    else{
      cout << "Not Prime" << endl;
    }
  }
  return 0;
}
