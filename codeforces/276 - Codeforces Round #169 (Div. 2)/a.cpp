#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll joy(ll k, ll f, ll t){
    return k > t ? f : f - (t - k);
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    ll n, k, f, t, answer, current;
    cin >> n >> k;

    // set answer with first answer
    cin >> f >> t;
    answer = joy(k, f, t);
  
    // loop through rest
    for (int i = 1; i < n; i++){
        cin >> f >> t;
        current = joy(k, f, t);
        if (answer < current){
            answer = current;
        }
    }
    
    cout << answer << endl;
    return 0;
}
