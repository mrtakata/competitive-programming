#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, v;
    cin >> n >> v;
    int moneySpent;

    moneySpent = v >= n ? n - 1 : v;
    int i = 1;
    while(i + v < n){
        i++;
        moneySpent += i;
    }
    cout << moneySpent << endl;
    return 0;
}