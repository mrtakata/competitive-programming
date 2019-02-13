#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int n;
    int angle;
    // read input
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> angle;
        if(angle < 60){
            cout << "NO" << endl;
        }
        else if(360 % (180-angle) != 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}