#include <iostream>
#include <cmath>
using namespace std;

struct Point{
  int x;
  int y;
};


int main(){

  Point init, end;
  int answer;
  //read
  cin >> init.x >> init.y >> end.x >> end.y;
  while(!((init.x == 0) && (init.y == 0) && (end.x == 0) && (end.y == 0))){

    //logic
    // if in same place, return 0
    if( (init.x - end.x) == 0 && (init.y - end.y) == 0){
      answer = 0;
    }
    // if end is horizontal or vertical, return 1
    else if ( (init.x - end.x == 0) || (init.y - end.y == 0) ){
      answer = 1;
    }
    // if diagonal, return 1, else 2
    else if( abs(init.x - end.x) ==  abs(init.y - end.y) ){
      answer = 1;
    }
    else{
      answer = 2;
    }
    // if end is horizontal, vertical or diagonal, return 1
    // else return 2

    //answer
    cout << answer << endl;

    //new input
    cin >> init.x >> init.y >> end.x >> end.y;
  };
  return 0;
}
