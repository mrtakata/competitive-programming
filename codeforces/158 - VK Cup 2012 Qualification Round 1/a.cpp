#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MAXN = 50;
int n, k, ans;
int points[MAXN];
int almost = 0, extra = 0;

int main(){

    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> points[i];
        if(i < k){
            if(points[i] < 1){
                almost++;
            }
        }
        if(i >= k){
            if(points[i] == points[k-1]){
                extra++;
            }
        }
    }
    if(almost > 0){ 
        cout << k - almost << endl;
        return 0;
    }
    else{
        cout << k + extra << endl;
    }
    return 0;
}