#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, val;
    cin >> n;
    vector<pair<int, int> > a;
    for(int i = 1; i <= n; i++){
        cin >> val;
        a.push_back(make_pair(val, i));
    }

    sort(a.begin(), a.end());
    if(a[0].first == a[1].first){
        cout << "Still Rozdil" << endl;
    }
    else{
        cout << a[0].second << endl;
    }
    return 0;
}