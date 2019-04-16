#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int a[100];

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;
        l--; r--;
        for(int i = l; i <= r; i++){
            a[i] = 1;
        }
    }
    int count = 0;
    for(int i = 0; i < m; i++){
        if(a[i]) count++;
    }
    cout << m - count << endl;
    for(int i = 0; i < m; i++){
        if(!a[i]) cout << i + 1 << ' ';
    }
    cout << endl;
    return 0;
}