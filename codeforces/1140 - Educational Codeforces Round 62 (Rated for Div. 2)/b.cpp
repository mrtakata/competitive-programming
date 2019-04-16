#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MAXN = 1000000001;
const ll MOD = 1000000007;
ll n, t;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> t;
    while(t-- > 0){
        cin >> n;
        string s;
        cin >> s;
        int left = n, right = n;
        for(int i = 0; i < n; i++){
            if(s[i] == '>'){
                left = i;
                break;
            }
        }
        for(int i = n-1; i >=0; i--){
            if(s[i] == '<'){
                right = n-(i+1);
                break;
            }
        }
        cout << min(left, right) << endl;
    }

    return 0;
}