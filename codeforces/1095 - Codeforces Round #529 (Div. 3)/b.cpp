#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int n, answer;
    // read input
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    
    // solution
    sort(array, array+n);
    // remove max
    answer = abs(array[0]-array[n-2]);
    // remove min
    answer = answer < abs(array[1]-array[n-1]) ? answer : abs(array[1]-array[n-1]);
    // print answer
    cout << answer << endl;

    return 0;
}