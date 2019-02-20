#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    ll a[n];
    ll largest = -1;
    int count = 0, maxStreak = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == largest){
            count++;
            if(count > maxStreak){
                maxStreak = count;
            }
        }
        else{
            count = 0;
            if(a[i] > largest){
                largest = a[i];
                maxStreak = count = 1;
            }
        }
    }
    cout << maxStreak << endl;
    return 0;
}