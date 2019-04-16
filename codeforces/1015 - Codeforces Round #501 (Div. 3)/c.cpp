#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const int MAXN = 100000;
vector<pair<ll, int> >diffs;
vector<ll> as;
vector<ll> bs;

ll total_sumA = 0, total_sumB = 0;
int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    ll n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        diffs.push_back(make_pair(b-a, i));
        as.push_back(a);
        bs.push_back(b);
        total_sumA+=a;
        total_sumB+=b;
    }
    if(total_sumB > m){
        cout << -1 << endl;
        return 0;
    }

    sort(diffs.begin(), diffs.end());
    int i = 0;
    int answer = 0;
    while(i < n && total_sumA > m){
        int index = diffs[i].second;
        total_sumA-= as[index];
        total_sumA+= bs[index];
        answer++;
        i++;
    }

    cout << answer << endl;
    return 0;
}