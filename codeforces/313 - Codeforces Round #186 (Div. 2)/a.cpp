#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    ll n;

    // read input
    cin >> n;

    if(n >= 0){
        cout << n << endl;
    }
    else if(n > -10){
        cout << 0 << endl;
    }
    else{
        string s = to_string(n);
        if(n > -100 && n % 10 == 0){
            cout << 0 << endl;
            return 0;
        }
        else if(s[s.size()-1] > s[s.size()-2]){
            s.erase(s.size()-1, 1);
        }
        else{
            s.erase(s.size()-2, 1);
        }
        cout << s << endl;
    }
        

    return 0;
}