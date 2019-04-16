#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    string t;
    int n, k;
    cin >> n >> k;
    cin >> t;

    string s = t;

    string add = t;

    for(int i = 1; i < n; i++){
        if(s.substr(i, n) + s.substr(n-i, n) == t){
            // cout << s.substr(n-i, n) <<", "<< s.substr(i, n) << endl;
            add=s.substr(n-i, n);
            break;
        }
    }

    for(int j = 0; j < k-1; j++){
        s+= add;
    }
    cout << s << endl;
    return 0;
}