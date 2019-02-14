#include <iostream>
#include <cstdio>
using namespace std;

int main(){

  //fazer uma soma sem carry
  unsigned int a, b, answer;

  //mock

  // leitura

  while(scanf("%u %u", &a, &b) != EOF){
    answer = a ^ b;
    cout << answer << endl;
  }
  return 0;
}
