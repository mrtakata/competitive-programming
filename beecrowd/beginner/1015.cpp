#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Point{
    float x;
    float y;
};

float euclidianDistance(Point a, Point b){
    return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}

int main(){
  Point a, b;

  std::cout << std::fixed;
  std::cout << std::setprecision(4);

  cin >> a.x >> a.y;
  cin >> b.x >> b.y;

  cout << euclidianDistance(a, b) << endl;
  return 0;
}
