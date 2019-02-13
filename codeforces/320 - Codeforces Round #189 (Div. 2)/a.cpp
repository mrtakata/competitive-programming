#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    string s;

    // read input
    cin >> s;
    int state = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            state = 1;
        }
        else if(s[i] == '4'){
            if(state == 1){
                // found 14
                state = 2;
            }
            else if(state == 2){
                // found 144
                state = 0;
            }
            else{
                cout << "NO" << endl;
                return 0;
            }
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    // print answer
    cout << "YES" << endl;

    return 0;
}