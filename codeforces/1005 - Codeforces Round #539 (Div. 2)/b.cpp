#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    string s, t;

    // read input
    cin >> s >> t;

    if(s.size() == 0){
        cout << t.size() << endl;
    }
    else if(t.size() == 0){
        cout << s.size() << endl;
    }
    else{
        while(s.size() > 0 && t.size() > 0 && 
            s[s.size()-1] == t[t.size()-1]){
                s.erase(s.size()-1, 1);
                t.erase(t.size()-1, 1);
            }
        // print answer
        cout << s.size() + t.size() << endl;;
    }

    return 0;
}