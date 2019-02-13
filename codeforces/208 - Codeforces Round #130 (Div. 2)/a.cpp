#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    string s;

    // read input
    cin >> s;
    int pos;
    pos = s.find("WUB");
    while(pos != string::npos){
        s.replace(pos, 3, " ");
        pos = s.find("WUB");
    }
    // print answer
    cout << s << endl;

    return 0;
}