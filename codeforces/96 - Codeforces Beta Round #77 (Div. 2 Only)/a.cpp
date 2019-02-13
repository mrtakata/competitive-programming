#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    string s;
    int count = 0;
    char currentTeam = '2';
    // read input
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == currentTeam){
            count++;
            if(count == 7){
                cout << "YES" << endl;
                return 0;
            }
        }
        else{
            count = 1;
            currentTeam = s[i];
        }
    }
    // print answer
    cout << "NO" << endl;

    return 0;
}