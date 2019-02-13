#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

bool isVowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int main(){

    // variable declaration
    string s, t;

    // read input
    cin >> s >> t;

    int i = 0;
    if(s.size() != t.size()){
        cout << "No" << endl;
        return 0;
    }
    else{
        while(i < s.size()){
            if((isVowel(s[i]) && !isVowel(t[i])) || (!isVowel(s[i]) && isVowel(t[i]))){
                cout << "No" << endl;   
                return 0;             
            }
            i++;
        }
    }
    // print answer
    cout << "Yes" << endl;

    return 0;
}