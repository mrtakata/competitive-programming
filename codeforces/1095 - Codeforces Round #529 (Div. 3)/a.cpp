#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int n, t, count;
    string s;

    // read input
    cin >> n;
    cin >> s;

    // solving
    // (t(t+1))/2 = n
    // print answer
    t = 0; 
    count = 1;
    while(t < s.length()){
        cout << s[t];
        count++;
        t+=count;
    }
    cout << endl;
    return 0;
}