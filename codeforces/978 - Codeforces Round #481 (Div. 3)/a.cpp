#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int n, vet[1000];

void printVet(){
  for(int i = 0; i < n; i++){
    cout << vet[i] << " ";
  }
  cout << endl;
}

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int i = 0;

  cin >> n;
  while(i < n){
    cin >> vet[i];
    i++;
  }

  printVet();
  return 0;
}
