#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main(){

    int n, x, y, current, count = 0;
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++){
        cin >> current;
        if(current <= x){
            count++;
        }
    }
    if(x <= y){
        cout << ceil(count/2.0) << endl;
    }
    else{
        cout << n << endl;
    }
    return 0;
}