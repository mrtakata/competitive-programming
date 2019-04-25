#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const int MAXN = 300000;
const int MAXM = 500000;
vector<int> g[MAXN];
int n, m;
vector<int> q;
int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int kid;
        cin >> kid;
        kid--;
        q.push_back(kid);
    }
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
    }

    set<int> to_pass;
    to_pass.insert(q[n-1]);
    int answer = 0;

    for(int i = n-2; i>= 0; i--){
        int count = 0;
        for(auto &v : g[q[i]]){
            if(to_pass.find(v) != to_pass.end()){
                count++;
            }
        }
        if(count == to_pass.size()){
            answer++;
        }
        else{
            to_pass.insert(q[i]);
        }
    }
    cout << answer << endl;
    return 0;
}