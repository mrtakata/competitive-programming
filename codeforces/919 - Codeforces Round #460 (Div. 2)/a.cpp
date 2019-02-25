#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MAXN = 1000000001;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cout << fixed << setprecision(8);
    int n, m, a, b;
    float min_ratio = 100, ratio;

    cin >> n >> m;
    while(n-- > 0){
        cin >> a >> b;
        ratio = a/(float) b;
        if(ratio < min_ratio) min_ratio = ratio;
    }
    cout << m * min_ratio << endl;
    return 0;
}