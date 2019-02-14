#include <iostream>
using namespace std;

struct tFraction{
  int num;
  int den;
};

tFraction sum(tFraction n1, tFraction n2){
  return (n1.num * n2.den + n2.num * n1.den) / (n1.den * n2.den);
}

tFraction subtraction(tFraction n1, tFraction n2){
  return (n1.num * n2.den - n2.num * n1.den) / (n1.den * n2.den);
}

tFraction multiplication(tFraction n1, tFraction n2){
  return (n1.num * n2.num) / (n1.den * n2.den);
}

tFraction division(tFraction n1, tFraction n2){
  return (n1.num * n2.den) / (n1.num * n2.den);
}

tFraction simplification(tFraction n1, tFraction n2){

}

int calculateMmc(int n1, n2){

}

int main(){

  return 0;
}
