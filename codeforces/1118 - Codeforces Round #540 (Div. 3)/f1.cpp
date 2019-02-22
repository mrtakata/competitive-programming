#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const int MAXN = 301234;

vector<int> graph[MAXN];
int colors[MAXN], visited[MAXN];
int n;

// TODO Implement dfs
pair<int, int>  sofar[MAXN];
int n_red, n_blue;
int ans;

void dfs(int vertex){
    visited[vertex] = 1;
    sofar[vertex].first  += colors[vertex] == 1;
    sofar[vertex].second += colors[vertex] == 2;
    for(auto v : graph[vertex]){
        if(!visited[v]){
            dfs(v);
            sofar[vertex].first += sofar[v].first;
            sofar[vertex].second += sofar[v].second;
            ans += sofar[v].first == n_red && sofar[v].second == 0;
            ans += sofar[v].first == 0 && sofar[v].second == n_blue;
        }
    }
}

void print_colors(){
    for(int i = 0; i < n; i++){
        cout << "Node "  << ": " << i << sofar[i].first << ", " << sofar[i].second << endl;
    }
}

void print_graph(){
    for(int node = 0; node < n; node++){
        cout << "Node " << node << ": ";
        for(int j = 0; j < graph[node].size(); j++){
            cout << graph[node][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);
    memset(visited, 0, sizeof(int) * MAXN);
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> colors[i];
        n_red += (colors[i] == 1);
        n_blue += (colors[i] ==2);
    }

    for(int i = 0; i < n-1; i++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    ans = 0;
    dfs(0);
    cout << ans << endl;
    return 0;
}