#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int m, n;
    cin >> n >> m;

    int a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int sum = 0;
    int i = 0;
    while(m-- > 0 && a[i] < 0){
        sum += a[i];
        i++;
    }
    cout << -sum << endl;
    return 0;
}