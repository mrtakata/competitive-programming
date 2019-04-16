#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    ll vals[4], largest = 0, l_index;
    for(int i = 0; i < 4; i++){
        cin >> vals[i];
        if(vals[i] > largest){
            largest = vals[i];
            l_index = i;
        }
    }
    for(int i = 0; i < 4; i++){
        if(i != l_index){
            cout << largest - vals[i] << ' ';
        }
    }
    cout << endl;
    return 0;
}