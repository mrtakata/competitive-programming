#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void quick_sort(int v[], int left, int right){
  int i = left, j = right;
  int tmp;
  int pivot = v[(left+right) /2];

  while(i <= j){
    while(v[i] < pivot){
      i++;
    }
    while (v[j] > pivot){
      j--;
    }
    if (i <= j){
      tmp = v[i];
      v[i] = v[j];
      v[j] = tmp;
      i++;
      j--;
    }
  }
  if (left < j){
    quick_sort(v, left, j);
  }
  if (i < right){
    quick_sort(v, i, right);
  }
}

// void quick_sort(int v[], int left, int right){
//   int index = partition(v, left, right);
//   if(left < index - 1){
//     quick_sort(v, left, index - 1);
//   }
//   if(index < right){
//     quick_sort(v, index, right);
//   }
// }

void print_vec(int v[], int max){
  for(int i = 0; i < max; i++){
    cout << v[i] << " ";
  }
}

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, k, count = 0, i = 0;
  cin >> n >> k;

  int vec[n];
  while(i < n){
    cin >> vec[i];
    i++;
  }
  quick_sort(vec, 0, n);
  print_vec(vec, n);
  // cout << answer << endl;
  return 0;
}
