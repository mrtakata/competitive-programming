#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll n;

int main(){

    cin >> n;
    int n1, n2, previous;
    int list[n];

    for (int i = 0 ; i < n; i++){
        cin >> list[i];
    }

    sort(list, list + n);
    n1 = previous =  list[n-1];
    for (int i = n-2; i >= 0; i--){
        if(n1 % list[i] == 0 && list[i] != previous){
            previous = list[i];
        }
        else{
            n2 = list[i];
            break;
        }
    }
    cout << n1 << " " << n2 << endl;
    return 0;
}