#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll n;
map<int, int> groups;
int main(){

    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
        groups[a[i]]++;
    }
    // cout << "1: " << groups[1]<< ", 2: " << groups[2]
    //     << ", 3: " << groups[3]<< ", 4: "  <<groups[4] << endl;

    int ans = groups[4]; // getting taxis for groups of 4
    groups[4] = 0;

    if(groups[2] > 0){
        ans +=groups[2]/2;
        groups[2] %=2; 
    } // pairing groups of 2

    int aux;
    if(groups[3] && groups[1]){
        aux = min(groups[1], groups[3]);
        ans+= aux;
        groups[1] -= aux;
        groups[3] -= aux;
    } // filling groups of 3 with guys alone

    if(groups[3]){
        ans += groups[3];
        groups[3] = 0;
    } // getting taxis for groups of 3 remaining

    if(groups[2]){
        aux = 2;
        while(groups[1] && aux < 4) {
            groups[1]--;
            aux++;
        }
        groups[2]--;
        ans++; 
    } // fill last group of 2 if any

    // putting all groups of 1 in the same car
    ans += groups[1]/4;
    groups[1] = groups[1] % 4;
    if(groups[1]) ans++; // another car for the remainder

    cout << ans << endl;

    return 0;
}