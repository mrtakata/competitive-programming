#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MAXN = 1000000001;
const ll MOD = 1000000007;
ll n;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> n;
    int a[n];
    int nDays = 0, lastMistery = 0;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(lastMistery < a[i]){
            lastMistery = a[i];
        }
        if(lastMistery == i){
            nDays++;
        }
    }

    cout << nDays << endl;
    return 0;
}