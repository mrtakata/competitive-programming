/* Solved with tutorial */
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MAXN = 1000;
ll n;
map<string, string> edges;
set<string> mid_nicks;

int main(){

    cin >> n;

    for(int i = 0; i < n; i++){
        string prv, nxt;
        cin >> prv >> nxt;
        edges[prv] = nxt;
        mid_nicks.insert(nxt);
    }

    vector< pair<string, string> > ans;
    for(__typeof(edges.begin()) nick = edges.begin(); nick != edges.end(); nick++){
        if(mid_nicks.count(nick->first)){
            continue;
        }
        string curr = nick->first;

        while(edges.count(curr)){
            curr = edges[curr];
        }

        ans.push_back(make_pair(nick->first, curr));
    }

    cout << ans.size() << endl;

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i].first << " " << ans[i].second << endl;
    }

    return 0;
}