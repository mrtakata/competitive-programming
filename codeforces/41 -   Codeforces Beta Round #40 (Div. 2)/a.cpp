#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    string s1, s2;

    // read input
    cin >> s1 >> s2;
    if(s1.size() != s2.size()){
        cout << "NO" << endl;
        return 0;
    };
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] != s2[s2.size()-1-i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    // print answer
    cout << "YES" << endl;

    return 0;
}