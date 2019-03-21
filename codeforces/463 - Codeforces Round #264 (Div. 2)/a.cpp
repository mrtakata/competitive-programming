#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int n, s;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int ans = -1;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        if(s * 100 >= x * 100 + y){
            int sweets = (s * 100 - (x * 100 + y)) % 100;
            if(sweets > ans) ans = sweets;
        }
    }
    cout << ans << endl;
    return 0;
}