#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const int MAXN = 100000;

int n, val, previous;

int counts[2];

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);
    counts[0] = counts[1] = 0;

    cin >> n;
    int ans = 2;
    cin >> val;
    // read first
    val--;
    previous = val;
    counts[val]++;

    for(int i = 1; i < n; i++){
        cin >> val;
        val--;
        if(previous == val) counts[val]++;
        else{
            // cout << "1: " << counts[0] << ", 2: " << counts[1] << endl;
            ans = max(ans, min(counts[0], counts[1]) * 2);
            counts[val]=1;
            previous = val;
        }
    }

    cout << max(ans, min(counts[0], counts[1]) * 2) << endl;
    return 0;
}