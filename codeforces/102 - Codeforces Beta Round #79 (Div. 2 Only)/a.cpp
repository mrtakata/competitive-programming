#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    string s;

    // read input
    cin >> s;
    ll sum;
    int ans = 0;
    do{
        sum = 0;
        for(int i = 0; i < s.size(); i++){
            sum += s[i] - '0';
        }
        if(sum >= 10 || s.size() > 1) ans++;
        s = to_string(sum);
    }while(sum >= 10);
    // print answer
    cout << ans << endl;

    return 0;
}