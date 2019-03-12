#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MAXN = 5000;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;

    if(n == 2) cout << 6 << endl;
    else{
        cout << n * 3 + min(abs(k-1), abs(k-n)) << endl;
    }    
    return 0;
}