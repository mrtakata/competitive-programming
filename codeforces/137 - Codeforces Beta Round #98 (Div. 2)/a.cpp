#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    string s;

    // read input
    cin >> s;

    char prev = s[0];
    int ans = 1, in_hand = 1;

    // solution
    for(int i = 1; i < s.size(); i++){
        if(prev != s[i] || in_hand == 5){
            ans++;
            prev = s[i];
            in_hand = 1;
        }
        else{
            in_hand++;
        }
    }
    // print answer
    cout << ans << endl;

    return 0;
}