#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
// define macros
#define ll long long int

bool isVowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

int main(){

    // variable declaration
    string s, s2;
    char c;
    // read input
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        c = tolower(s[i]);
        if(!isVowel(c)){
            s2.push_back('.');
            s2.push_back(c);
        }
    }
    // print answer

    cout << s2 << endl;

    return 0;
}