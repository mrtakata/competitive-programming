#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const int N = INT_MAX;
int n;
int a[100];
int dp[100][3];

int solve(int pos, int last){
    if(pos >= n) return 0;
    if(dp[pos][last] != -1) return dp[pos][last];

    if(a[pos] == 0){
        return dp[pos][last] = 1 + solve(pos+1, 0);
    }
    if(a[pos] == 1){
        if(last == 1) return dp[pos][last] = 1 + solve(pos+1, 0);
        else return dp[pos][last] = solve(pos+1, 1);
    }
    if(a[pos] == 2){
        if(last == 2) return dp[pos][last] = 1 + solve(pos+1, 0);
        else return dp[pos][last] = solve(pos+1, 2);
    }

    int a, b;
    a = b = INT_MAX;
    if(last != 1) {
        a = solve(pos+1, 1);
    }
    if(last != 2){
        b = solve(pos+1, 2);
    }

    return dp[pos][last] = min(a,b);
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cout << solve(0, 0) << endl;

    return 0;
}