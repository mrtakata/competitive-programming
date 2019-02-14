#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    unsigned int digits[10], i, digit, max_frequency, answer;
    char string_stream[1002];
    //read
    while( scanf("%s", string_stream)!= EOF ){
        // reseting variables
        for(i = 0; i < 10; i++){
          digits[i] = 0;
        }
        i = 0;

        //counter
        while(string_stream[i] != '\0'){
          digit = string_stream[i] - '0';
          digits[digit]++;
          i++;
        }

        // find biggest number
        max_frequency = digits[0];
        answer = 0;
        for(i = 0; i < 10; i++){
          if(max_frequency <= digits[i] && answer < i){
            max_frequency = digits[i];
            answer = i;
          }
        }
        // answer
        cout << answer << endl;
  }
  return 0;
}
