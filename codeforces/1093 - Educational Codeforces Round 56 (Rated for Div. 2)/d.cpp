#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MOD = 998244353git;
const int MAX = 300000;
int t;
vector<int> g[MAX];
int colored[MAX];
int sets[2];
bool isOk = true;

ll POWMOD(int a, int b){
    ll ret = 1;
    for(int i = 0; i < b; i++){
        ret = (ret * a) % MOD;
    }
    return ret;
}

void dfs(int u, int color){
    colored[u] = color;
    sets[color]++;
    // cout << "Initial Node: " << u << ", color: "<< color <<  endl;
    for(auto &v : g[u]){
        if(colored[u] == colored[v]){ // same color, break
            // cout << "nodes: (" << u << ", " << v << ")" << endl;
            isOk = false;
            break;
        }
        else if(colored[v] == -1){
            dfs(v, 1-color);
        }
    }
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> t;
    while(t-- > 0){
        int n, m;
        cin >> n >> m;

        // resetting
        for(int i = 0; i < n; i++){
            g[i].clear();
            colored[i] = -1;
        }
        isOk = true;

        // read
        for(int i = 0; i < m; i++){
            int u, v;
            cin >> u >> v;
            u--; v--;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        // solve
        ll answer = 1;
        for(int i = 0; i < n; i++){
            // cout << "Found component" << endl;
            sets[0] = sets[1] = 0;
            if(colored[i] == -1){
                dfs(i, 0);
                answer = (answer * (POWMOD(2, sets[0]) + POWMOD(2, sets[1]) % MOD)) % MOD;
            }
            if(!isOk){
                break;
            }
        }
        if(isOk){
            cout << answer << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}