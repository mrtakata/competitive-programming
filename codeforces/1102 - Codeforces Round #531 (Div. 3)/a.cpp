#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ll n;
    cin >> n;

    if( (n * (n + 1) / 2) % 2 == 0){
        cout << 0 << endl;
    }
    else{
        cout << 1 << endl;
    }
    
    return 0;
}