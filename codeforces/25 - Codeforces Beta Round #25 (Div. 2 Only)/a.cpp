/* Solved with tutorial */
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MAXN = 100;
int n;

int main(){

    cin >> n;
    int a[n];
    int numEven = 0, numOdd = 0, lastEven, lastOdd;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0){
            numEven++;
            lastEven = i+1;
        }
        else{
            numOdd++;
            lastOdd = i+1;
        }
    }
    if(numEven == 1) cout << lastEven << endl;
    else cout << lastOdd << endl;
    return 0;
}