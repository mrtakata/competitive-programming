#include <iostream>
using namespace std;

typedef struct{
  int num;
  int den;
}tFraction;

int calculateMDC(tFraction f){
	int aux;
	int n1 = f.num, n2 = f.den;
	while(n1 % n2 != 0){
		aux = n1;
		n1 = n2;
		n2 = aux % n2;
	}
	return n2;
}

tFraction sum(tFraction n1, tFraction n2){
	tFraction ans;
	ans.num = n1.num * n2.den + n2.num * n1.den;
	ans.den = n1.den * n2.den;
  	return  ans;
}

tFraction subtraction(tFraction n1, tFraction n2){
  	tFraction ans;
	ans.num = n1.num * n2.den - n2.num * n1.den;
	ans.den = n1.den * n2.den;
  	return  ans;
}

tFraction multiplication(tFraction n1, tFraction n2){
  	tFraction ans;
	ans.num = n1.num * n2.num;
	ans.den = n1.den * n2.den;
  	return  ans;
}

tFraction division(tFraction n1, tFraction n2){
  	tFraction ans;
	ans.num = n1.num * n2.den;
	ans.den = n1.num * n2.den;
  	return  ans;
}

tFraction arrangeSign(tFraction n1){
	if(n1.den < 0){
		n1.num *= -1;
		n1.den *= -1;
	}
	return n1;
}
tFraction simplify(tFraction n1){
	int mdc = calculateMDC(n1);
	tFraction ans;
	ans.num = n1.num / mdc;
	ans.den = n1.den / mdc;
	return ans;
}


int main(){
	int n;
	tFraction f1, f2;
	int foundBegin, foundEnd;
	string equation;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> equation;
		foundBegin = (size_t)equation.find(" / ");
		f1.num = equation.substr(0, foundBegin);
		foundEnd = (size_t)equation.substr(foundBegin+3, equation.end()).find(' ');
		f1.den = equation.substr(foundBegin+3, foundEnd);
	}
	cout << f1.num << '/' << f1.den << endl;
  	return 0;
}
