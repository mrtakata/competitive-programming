#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
#define MAXPOWER 30

int main(){

    // variable declaration
    int n, k, i, currentK;
    map<int, int> powersCount;

    // read input
    cin >> n >> k;

    if(k > n){
        cout << "NO" << endl;
        return 0;
    }

    // find min representation
    i = currentK = 0;
    while(n/2 > 0){
        if(n % 2 > 0){
            currentK++;
            powersCount[i] = 1;
        }
        n/=2;
        i++;
    }
    powersCount[i] = 1;
    currentK++;

    if(currentK > k){
        cout << "NO" << endl;
        return 0;
    }

    // find representation with k numbers
    int diff, change;
    while(currentK < k && i > 0){
        if(powersCount[i] > 0){
            diff = k - currentK;
            change = min(powersCount[i], diff);
            powersCount[i]-= change;
            currentK+= change;
            powersCount[i-1]+= 2 * change;
        }
        i--;
    }

    // print answer if exists
    cout << "YES" << endl;
    int currentPower;
    for(auto x : powersCount){
        currentPower = pow(2, x.first);
        for(int i = 0; i < x.second; i++){
            printf("%d ", currentPower);
        }
    }
    cout << endl;
    return 0;
}