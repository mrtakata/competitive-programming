#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

map<char, int> alpha;
map<int, char> rev;

int column_to_number(string s){
    int number=0;
    for(int i = 0; i < s.size() ; i++){
        number += alpha[s[i]] * pow(26, s.size()-1-i);
    }
    return number;
}



int main(){

    for(int i = 0; i < 26; i++) {
        alpha.insert(pair<char, int>('A' + i, i+1));
    }
    rev.insert(pair<int, char>(0, 'Z'));
    for(int i = 0; i < 26; i++) {
        rev.insert(pair<int, char>(i+1, 'A' + i));
    }
    // variable declaration
    string s;

    // read input
    cin >> s;

    // print answer
    cout << column_to_number(s) << endl;

    return 0;
}