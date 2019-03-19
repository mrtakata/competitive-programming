#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAXN = 500000000;

ll n,m;
// int dp[MAXN];
int solve(ll m, ll n, int sofar){
    // if(dp[n] != -1) return dp[n];
    if(m == n) return sofar;
    else if(m % 2 != 0 && m % 3 != 0) return -1;
    else{
        // cout << "Sofar: " << sofar << ", n: " << n << endl;
        int a = -1;
        if(n*2 <= m) a = solve(m, n*2, sofar+1);
        int b = -1;
        if(n*3 <= m) b = solve(m, n*3, sofar+1);
        return max(a,b);
    }
}

int main(){
    // memset(dp, -1, MAXN * sizeof(int));
    // cout << dp[MAXN] << endl;

    cin >> n >> m;
    cout << solve(m,n,0) << endl;
    return 0;
}