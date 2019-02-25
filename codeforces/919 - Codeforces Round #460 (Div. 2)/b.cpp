#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MAXN = 1000000001;

bool isPerfect(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum == 10;
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int k, ans = 18;
    cin >> k;
    while(k > 0){
        ans++;
        if(isPerfect(ans)){
            k--;
        } 
    }    
    cout << ans << endl;
    return 0;
}