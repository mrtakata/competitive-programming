#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MAXN = 4001;

int n, a, b, c;
int ans;
int dp[MAXN];

int brute_force(int curr_size){
    if(curr_size == 0) return 0;
    if(curr_size < 0) return -0x3f3f3f3f;
    if(dp[curr_size] != -1) return dp[curr_size];

    return dp[curr_size] = 1 + max(max(brute_force(curr_size-a), brute_force(curr_size-b)), brute_force(curr_size-c));
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);
    memset(dp, -1, sizeof(dp));
    cin >> n;
    cin >> a >> b >> c;
    cout << brute_force(n) << endl;

    return 0;
}