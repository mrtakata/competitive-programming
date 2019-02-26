#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
#define MAX 3012345

const long long int MODULO = 998443353;

int t, n, m, u, v;
int group_colored_count[2];
bool not_bipartited;
int vertex_color[MAX];
vector<int> graph[MAX];

void dfs(int curr_vertex, int color){
    vertex_color[curr_vertex] = color;
    group_colored_count[color]++;
    for(auto to : graph[curr_vertex]){
        if(vertex_color[to] == -1){ // not visited
            dfs(to, 1 - color); 
        }
        if((vertex_color[curr_vertex] ^ vertex_color[to]) == 0){ // same color
            not_bipartited = true;
        }
    }
}

int main(){

    // variable declaration
    int t;

    // read input
    cin >> t;

    while(t-- > 0){
        cin >> n >> m; // n vertex, m edges
        for(int i = 0; i < n; i++){
            graph[i].clear();
            vertex_color[i] = -1;
        }

        for(int i = 0; i < m; i++){
            cin >> u >> v;
            u--; v--;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        int answer = 1;
        for(int i = 0; i < n; i++){
            if(vertex_color[i] != -1){ // visited
                continue;
            }
            not_bipartited = false;
            group_colored_count[0] = group_colored_count[1] = 0;
            dfs(i, 0);
            if(not_bipartited){
                cout << 0 << endl;
                break;
            }
            int curr = ((ll) pow(group_colored_count[0], 2) + (ll) pow(group_colored_count[1], 2)) % MODULO;
            answer = (answer * 1LL * curr) % MODULO;
        }

        if(!not_bipartited){
            cout << answer << endl;
        }
    }

    return 0;
}