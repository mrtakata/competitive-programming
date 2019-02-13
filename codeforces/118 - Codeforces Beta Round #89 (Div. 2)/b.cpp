#include <bits/stdc++.h>
#define ll long long int

#define MAXSIZE 20
using namespace std;
char mat[MAXSIZE][2*MAXSIZE];
int height, width;
// handkerchief has 4 * n + 1 spaces
void printMat(){
  for(int i = 0; i < height; i++){
    for(int j = 0; j < width; j++){
      if(mat[i][j]!='\0'){
        cout << mat[i][j];
      }
    }
    cout << endl;
  }
}

void fillLeft(int n, int x, int y){
  char fill;
  while(n >=0){
    y-=2;
    fill = '0' + n;
    mat[x][y] = fill;
    n--;
  }
}

void fillRight(int n, int x, int y){
  char fill;
  while(n >= 0){
    y+=2;
    fill = '0' + n;
    mat[x][y] = fill;
    n--;
  }
  while(++y<width){
    mat[x][y]='\0';
  }
}

void fillUp(int n, int x, int y){
  char fill;
  while(n >=0){
    x--;
    fill = '0' + n;
    mat[x][y] = fill;
    n--;
    fillLeft(n, x, y);
    fillRight(n, x, y);
  }
}

void fillDown(int n, int x, int y){
  char fill;
  while(n >=0){
    x++;
    fill = '0' + n;
    mat[x][y] = fill;
    n--;
    fillLeft(n, x, y);
    fillRight(n, x, y);
  }
}

void printHandkerchief(int n){
  height = 2*n+1;
  width =  4*n+1;

  for(int i = 0; i < height; i++){
    for(int j = 0; j < width; j++){
      mat[i][j] = ' ';
    }
  }

  char start = '0'+n;
  int x = height/2;
  int y = width/2;
  mat[x][y] = start;

  fillUp(n - 1, x, y);
  fillDown(n - 1, x, y);
  fillLeft(n - 1, x, y);
  fillRight(n - 1, x, y);
  printMat();
}

int main(){

  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  printHandkerchief(n);
  return 0;
}
