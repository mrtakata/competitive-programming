#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int



int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    ll a, b, c;
    cin >> a >> b >> c;
    ll n_weeks = a/3;
    if(n_weeks > b/2) n_weeks = b/2;
    if(n_weeks > c/2) n_weeks = c/2;
    a -= 3 * n_weeks;
    b -= 2 * n_weeks;
    c -= 2 * n_weeks;
    ll ans = 7 * n_weeks;

    int max_food = 0;
    int food[7] = {0, 0, 1, 2, 0, 2, 1};
    // cout << a << ' ' << b << ' ' << c << endl;
    for(int i = 0; i < 7; i++){
        ll vals[3] = {a,b,c};
        // calculating for the last week
        // sequence: a a b c a c b
        int day = 0;
        int curr = 0;
        while(vals[0] >= 0 && vals[1] >= 0 &&  vals[2] >= 0){
            // cout << food[(i + day) % 7] << ' ';
            vals[food[(i + day) % 7]]--;
            if(vals[food[(i + day) % 7]] >= 0){
                day++;
                curr++;
            }
        }
        // cout << endl;
        if(curr > max_food){
            max_food = curr;
        }

    }
    cout << ans + max_food << endl;

    return 0;
}