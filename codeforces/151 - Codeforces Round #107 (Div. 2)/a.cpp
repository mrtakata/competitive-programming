#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll joy(ll k, ll f, ll t){
    return k > t ? f : f - (t - k);
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, k, l, c, d, p, nl, np;
    int answer, aux;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int ml_total = k * l;
    int slices_total = c * d;

    answer = ml_total / nl / n;

    aux = slices_total / n;
    if (aux < answer){
        answer = aux;
    }
    
    aux = p / np / n;

    if (aux < answer){
        answer = aux;
    }

    cout << answer << endl;
    return 0;
}
