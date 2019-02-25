#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MAXN = 1000000001;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int a[n];
    memset(a, 0, sizeof(int) * n);
    int next_free = 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int i = 1;
    while(i <= n){
        if(a[i-1] != i){
            cout << i << endl;
            return 0;
        }
        i++;
    }
    cout << i << endl;
    return 0;
}