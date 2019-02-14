#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int n;

    // read input
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // solution
    sort(a, a+n);
    int answer = 0;
    int curr_height = 0;
    int used = 0;
    while(used < n){
        answer++;
        curr_height = 0;
        for(int i = 0; i < n; i++){
            if(a[i] >= curr_height){
                a[i] = -1; // used
                curr_height++;
                used++;
            }
        }
    }
    // print answer
    cout << answer << endl;

    return 0;
}