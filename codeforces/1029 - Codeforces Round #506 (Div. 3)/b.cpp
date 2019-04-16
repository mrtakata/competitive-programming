#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const int MAXN = 200000;

ll a[MAXN];
int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<ll> b;
    b.push_back(a[0]);
    int answer = 1;

    for(int i = 1; i < n; i++){
        if(a[i] > 2 * b[b.size()-1]){
            if(answer < b.size()){
                answer = b.size();
            }
            b.clear();
        }
        b.push_back(a[i]);
    }
    if(answer < b.size()){
        answer = b.size();
    }
    cout << answer << endl;
    return 0;
}