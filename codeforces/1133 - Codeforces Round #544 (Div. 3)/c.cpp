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
    
    ll a[n];

    for(int i = 0; i < n; i++){ 
        cin >> a[i];
    }

    sort(a, a+n);
    int ans = 1;
    int j = 0;
    for(int i = 0; i < n; i++){
        while(j < n && a[j] - a[i] <= 5){
            j++;
            ans = max(ans, j - i);
        }
    }

    cout << ans << endl;
    return 0;
}