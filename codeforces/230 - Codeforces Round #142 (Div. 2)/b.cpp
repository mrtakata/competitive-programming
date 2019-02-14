#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

bool isPrime(int n){
    if(n == 1) return false;
    int j = 2;
    while(j <= sqrt(n)){
        if(n % j == 0){
            return false;
        }
        j++;
    }
    return true;
}
int main(){

    // variable declaration
    int n;
    ll val, root;
    // read input
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> val;
        
        root = sqrt(val);
        if(val != root * root){
            cout << "NO" << endl;
        }
        else if(!isPrime(root)){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}