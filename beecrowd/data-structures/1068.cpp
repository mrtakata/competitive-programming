#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(){
  short int count, i;
  string answer = "incorrect";
  char string_stream[1000];

  // test
  // string_stream = ")3+b*(2-c)(";

  // read

  // logic
  while( scanf("%s", string_stream)!= EOF ){
    count = 0;
    i = 0;

    while(string_stream[i] != '\0'){
      if (string_stream[i] == '('){
        count++;
      }
      else if(string_stream[i] == ')'){
        count--;
        if(count < 0){
          break;
        }
      }
      i++;
    }

    // answer
    answer = count == 0 ? "correct" : "incorrect";
    cout << answer << endl;
  }
  return 0;
}
