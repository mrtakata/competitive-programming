#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<pair<int, int> > a;
    for(int i = 0; i < n; i++){
        int p, q;
        cin >> p >> q;
        a.push_back(make_pair(p,q));
    }

    sort(a.begin(), a.end());

    pair<int, int > prev = a[0];
    for(int i = 1; i < n; i++){
        if(prev.first < a[i].first && prev.second > a[i].second){
            cout << "Happy Alex" << endl;
            return 0;
        }
        prev = a[i];
    }
    cout << "Poor Alex" << endl;
    return 0;
}