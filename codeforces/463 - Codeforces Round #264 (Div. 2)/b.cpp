#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    ll n;

    // read input
    cin >> n;
    int h[n];
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    int cost = h[0], currHeight = h[0], energy = 0;
    for(int i = 1; i < n; i++){
        if(currHeight + energy < h[i]){
            cost += h[i]-currHeight-energy;
            currHeight = h[i];
            energy = 0;
        }
        else{
            energy+= currHeight - h[i];
            currHeight = h[i];
        }
    }
    // print answer
    cout << cost << endl;

    return 0;
}