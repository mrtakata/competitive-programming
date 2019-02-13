#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    ll n = 8;
    string s;
    char previous;
    // read input
    while(n-- > 0){
        cin >> s;
        previous = s[0];
        for(int i =1; i < 8; i++){
            if(s[i] == previous){
                cout << "NO" << endl;
                return 0;
            }
            else{
                previous = s[i];
            }
        }
    }

    // print answer
    cout << "YES" << endl;

    return 0;
}