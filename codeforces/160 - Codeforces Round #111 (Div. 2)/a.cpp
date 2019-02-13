#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int n, a[101], totalSum = 0, mySum = 0, count = 0;

    // read input
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        totalSum += a[i];
    }
    sort(a, a+n);

    for(int i = n-1; i >=0; i--){
        totalSum -= a[i];
        mySum += a[i];
        count++;
        if(mySum > totalSum){
            cout << count << endl;
            return 0;
        }
    }
    // print answer
    cout << n << endl;

    return 0;
}