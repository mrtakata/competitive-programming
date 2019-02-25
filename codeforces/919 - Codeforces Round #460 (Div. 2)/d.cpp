#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MAXN = 300001;
vector<int> g[MAXN];
int vis[MAXN];
int n, m;
vector<array<int, 26> > letterCount(MAXN);
string pos;
stack<int> st;

void dfs(int u){
    vis[u] = 1;
    for(auto v : g[u]){
        if(vis[v] == 0) dfs(v);
        if(vis[v] == 1){
            cout << -1 << endl;
            exit(0);
        }
    }
    vis[u] = 2;
    st.push(u);
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> n >> m >> pos; 

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
    }

    // check for cycles
    for(int i = 0; i < n; i++){
        if(!vis[i]) dfs(i);
    }

    int answer = 0;
    while(!st.empty()){
        int u = st.top(); st.pop();
        letterCount[u][pos[u]-'a']++;
        for(auto v: g[u]){
            for(int i = 0; i < 26; i++){
                letterCount[v][i] = max(letterCount[v][i], letterCount[u][i]);
            }
        }
        answer = max(answer, *max_element(letterCount[u].begin(), letterCount[u].end()));
    }
    cout << answer << endl;
    return 0;
}
