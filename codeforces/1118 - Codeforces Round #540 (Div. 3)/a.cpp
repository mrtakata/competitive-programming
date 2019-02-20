#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, ans = 0;
    cin >> n;
    int a[n];
    ll sum = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    for(int i = 0; i < n; i++){
        sum-= a[i];
        if(sum % 2 == 0) ans++;
        sum+= a[i];
    }
    cout << ans << endl;
    return 0;
}