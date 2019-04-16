#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
ll lMax, rMax, n;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> n;
    vector<pair<ll, ll> > lefts;
    vector<pair<ll, ll> > rights;
    for(int i = 0; i < n; i++){
        ll l, r;
        cin >> l >> r;
        lefts.push_back(make_pair(l, i));
        rights.push_back(make_pair(r, i));
    }
    sort(lefts.begin(), lefts.end());
    sort(rights.begin(), rights.end());
    ll answer = rights[0].first - lefts[lefts.size()-1].first;
    if(answer < 0) answer = 0;  // current intersection length

    ll tmp;
    if(rights[0].second == lefts[lefts.size()-1].second){
        tmp = rights[1].first - lefts[lefts.size()-2].first;
        if(tmp > answer) answer = tmp;
    }
    else{
        tmp = rights[1].first - lefts[lefts.size()-1].first;
        if(tmp < rights[0].first - lefts[lefts.size()-2].first){
            tmp = rights[0].first - lefts[lefts.size()-2].first;
        }
        if(tmp > answer) answer = tmp;
    }

    cout << answer << endl;
    return 0;
}