#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);

  string input, output;
  int answer = 0;
  cin >> input;
  for(int i = 0; i < input.size(); i++){
    if(input[i] == 'H' || input[i] == 'Q' || input[i] == '9'){
      answer++;
      break;
    }
  }
  output = answer > 0 ? "YES" : "NO";
  cout << output << endl;
  return 0;
}
