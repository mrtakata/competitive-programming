#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int s, n, x, y;
    vector< pair<int, int> > dragons;
    // read input
    cin >> s >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        dragons.push_back(make_pair(x,y));
    }
    sort(dragons.begin(), dragons.end());
    for(int i = 0; i < n; i++){
        if(s <= dragons[i].first){
            cout << "NO" << endl;
            return 0;
        }
        else{
            s += dragons[i].second;
        }
    }
    // print answer
    cout << "YES" << endl;

    return 0;
}