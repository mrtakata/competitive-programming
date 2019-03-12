/* 
    solution inspired by indian_ 
    The cost of removing every edge is determined
    by the energy of the node
*/
#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MAXN = 1000;
const ll MAXM = 2000;

int n, m;
int ans;
int energy[MAXN];
int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    ans = 0;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> energy[i];
    }

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        ans += min(energy[u], energy[v]);
    }

    cout << ans << endl;
    return 0;
}