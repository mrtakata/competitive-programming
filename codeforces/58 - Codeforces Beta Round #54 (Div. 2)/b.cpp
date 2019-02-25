#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll n;

int main(){

    cin >> n;
    int i = n/2;
    cout << n << ' ';
    while(i>0){
        if(n % i == 0){ // n divisivel por i
            cout << i << ' ';
            n = i;
            i = n/2;
        }
        else{
            i--;
        }   
    }
    cout << endl;
    return 0;
}