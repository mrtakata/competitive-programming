#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

bool isPalindrome(string s){
    for(int i = 0; i <= s.size()/2; i++){
        char begin = s[i], end = s[s.size()-1-i];
        if(abs(end - begin) > 0 && abs(end - begin) != 2){
            return false;
        }
    }
    return true;
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int len;
        string s;
        cin >> len >> s;
        if(isPalindrome(s)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}