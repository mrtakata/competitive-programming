#include <bits/stdc++.h>
#define ll long long int

using namespace std;

bool isLuckyDigit(int digit){
  return digit == 4 || digit == 7;
}

// max digits: 18, so only numbers with 4 or 7 lucky digits are
// almost lucky numbers
bool isAlmostLuckyNumber(int number){
  int digit, i = 10;
  if (number < 10){
    return isLuckyDigit(number);
  }
  else{
    return false;
  }
}

int countLuckyDigits(ll number){
  int digit, i = 10, count = 0;
  while(number / 1 != 0){
    digit = number % (i);
    if(isLuckyDigit(digit)){
      count++;
    }
    number /= (i);
  }
  return count;
}

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll number;
  string answer;
  cin >> number;
  answer = isAlmostLuckyNumber(countLuckyDigits(number)) ? "YES":"NO";
  cout << answer << endl;
  return 0;
}
