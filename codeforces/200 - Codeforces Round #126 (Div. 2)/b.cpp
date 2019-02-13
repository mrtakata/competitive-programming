#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll n, juice, total;

int main(){
    cin >> n;
    total = 0;
    for(int i = 0; i < n; i++){
        cin >> juice;
        total += juice;
    }
    cout << std::setprecision(7) << total / float(n) << endl;
    return 0;
}