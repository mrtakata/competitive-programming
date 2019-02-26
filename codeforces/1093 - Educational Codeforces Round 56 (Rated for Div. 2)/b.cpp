#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    ll n;
    string s;
    int pos;
    bool isPalindrome;
    char aux;

    // read input
    cin >> n;

    // solution
    for(int i = 0; i < n; i++){
        cin >> s;
        
        isPalindrome = true;
        pos = -1;
        // cacar palindromo
        for(int j = 0; j <= s.size() / 2; j++){
            // if not palindrome, checkout
            if(s[j] != s[s.size()-1-j]){
                isPalindrome = false;
                break;
            }
            // find next different char
            if(s[j] != s[0]){
                if(pos == -1){
                    pos = j;
                }
            }
        }

        if(!isPalindrome){
            cout << s << endl;
            continue;
        }
        if(pos == -1){
            cout << -1 << endl;
        }
        else{
            aux = s[0];
            s[0] = s[pos];
            s[pos] = aux;
            cout << s << endl;
        }
    }

    return 0;
}