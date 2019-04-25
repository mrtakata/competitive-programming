#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MOD = 1000000007;
const int MAXN = 100000;
const int MAXK = 100;
int n, k;
vector<int> g[MAXN];
int visited[MAXN];

ll POWMOD(int a, int b){
    ll ret = 1;
    for(int i = 0; i < b; i++){
        ret = ((ret % MOD) * (a % MOD)) % MOD;
    }
    return ret;
}

int dfs(int u){
    visited[u] = 1;
    int count = 0;
    for(auto &v : g[u]){
        if(!visited[v]){
            count += dfs(v);
        }
    }
    return 1 + count;
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);
    memset(visited, 0, sizeof(visited));
    cin >> n >> k;

    for(int i = 0; i < n-1; i++){
        int u, v, color;
        cin >> u >> v >> color;
        u--; v--;
        if(color == 0){
            g[u].push_back(v);
            g[v].push_back(u);
        }
    }

    vector<ll> component_sizes;
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            component_sizes.push_back(dfs(i));
        }
    }

    ll sum_components = 0;
    for(int i = 0; i < component_sizes.size(); i++){
        sum_components = (sum_components + POWMOD(component_sizes[i], k)) % MOD;
    }
    ll answer = POWMOD(n, k);
    answer = (((answer - sum_components) % MOD) + MOD) % MOD;
    cout << answer << endl;

    return 0;
}