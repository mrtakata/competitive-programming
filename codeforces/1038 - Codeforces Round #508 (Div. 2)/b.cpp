#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
int n;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);
    // 2 4 6 8 10 12 14 16= 72
    // 1 3 5 7 9 11 13 15= 64
    cin >> n;

    if(n <= 2){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;

    cout << n/2 << " ";
    for(int i = 2; i <= n; i+=2) cout << i << " ";
    cout << endl;

    cout << ceil(n/2.0) << " ";
    for(int i = 1; i <= n; i+=2) cout << i << " ";
    cout << endl;
    return 0;
}