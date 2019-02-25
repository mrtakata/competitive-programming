#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    if(n > 0 && a < n){
        ans = b >= n-a ? n-a : b + 1;
    }
    
    cout << ans << endl;
    return 0;
}