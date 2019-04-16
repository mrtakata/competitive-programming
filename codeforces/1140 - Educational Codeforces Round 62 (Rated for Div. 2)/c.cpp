/* Helped by QDEZ604 solution */
#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MAXN = 300000;
const ll MOD = 1000000007;
int n, k;
ll ans = 0;

vector<pair<int, int> > songs;
priority_queue<ll, vector<ll>, greater<ll> > pq;

bool compare(const pair<ll, ll> &a, const pair<ll, ll> &b){
    return a.second > b.second;
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int t, b;
        cin >> t >> b;
        songs.push_back(make_pair(t,b));
    }

    sort(songs.begin(), songs.end(), compare);

    ll ans = 0;
    ll sum_lengths = 0;

    for(int i = 0; i < n; i++){
        pq.push(songs[i].first);
        sum_lengths += songs[i].first;
        if(pq.size() > k){
            sum_lengths -= pq.top(); pq.pop();
        }
        ans = max(ans, 1LL * sum_lengths * songs[i].second);
    }
    cout << ans << endl;

    return 0;
}