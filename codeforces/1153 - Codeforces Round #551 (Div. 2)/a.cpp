#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, t;
    cin >> n >> t;
    int best_route = 1, time = 10000000;
    for(int i = 1; i <= n; i++){
        int s,d;
        cin >> s >> d;

        while(s < t){
            s+=d;
        }
        if(s <= time){
            time = s;
            best_route = i;
        }
    }

    cout << best_route << endl;
    return 0;
}