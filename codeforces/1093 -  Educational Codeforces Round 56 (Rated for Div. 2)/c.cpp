#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    ll n;
    
    // read input
    cin >> n;
    ll a[n];
    ll b[n/2];
    ll counter = 0;
    ll diff;
    // rules
    // a >= 0
    // b[i] = a[i] + a[n-i+1]
    // a sorted in non decreasing order
    for(int i = 0; i < n/2; i++){
        cin >> b[i];
    }

    a[0] = counter;
    a[n-1] = b[0] - counter;
    for(int i = 1; i < n/2; i++){
        if(b[i] > b[i-1]){
            diff = b[i] - b[i-1];
            a[i] = counter + diff;
            a[n-i-1] = b[i] - diff - counter;
            counter += diff;            
        }
        else{
            a[i] = counter;
            a[n-i-1] = b[i] - counter;            
        }
    }
    // print answer
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout <<endl;

    return 0;
}