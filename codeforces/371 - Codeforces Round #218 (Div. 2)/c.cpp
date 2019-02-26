#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MAXN = 1000000001;

int rB, rS, rC;
int aB, aS, aC;
int pB, pS, pC;
int priceOfHamburger, saved;
ll money;

bool canMakeNHamburgers(ll qt){
    ll nB = qt * rB;
    ll nS = qt * rS;
    ll nC = qt * rC;
    
    nB = max((ll)0, nB-aB);
    nS = max((ll)0, nS-aS);
    nC = max((ll)0, nC-aC);

    return (ll)(nB * pB + nS * pS + nC * pC) <= money;
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    string s;
    cin >> s;
    rB = 0, rS = 0, rC = 0;
    for(int i = 0; i < s.size(); i++){ 
        if(s[i] == 'B') rB++;
        else if(s[i] == 'S') rS++;
        else if(s[i] == 'C') rC++;
    }    
    cin >> aB >> aS >> aC;
    cin >> pB >> pS >> pC;
    cin >> money;
    
    ll l = 1, r = 10123456789012, ans = 0;

    while(l <= r){
        ll mid = l + (r-l)/2;
        if(canMakeNHamburgers(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    
    cout << ans << endl;

    return 0;
}