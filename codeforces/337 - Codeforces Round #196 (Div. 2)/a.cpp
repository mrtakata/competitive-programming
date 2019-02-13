#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int LARGEST = 1001;
int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);
  
  int n, m;
  cin >> n >> m;

  int array[m];
  for(int i = 0; i < m; i++){
    cin >> array[i];
  }

  sort(array, array + m);

  // looking for the smallest difference
  int minDiff = array[m - 1] - array[0];
  int currDiff;
  int pos = 0;
  for(int i = 0; i <= m-n; i++){
    currDiff = array[n+i-1] - array[i];
    if(minDiff > currDiff){
      minDiff = currDiff;
    }
  }
  cout << minDiff << endl;
  return 0;
}
