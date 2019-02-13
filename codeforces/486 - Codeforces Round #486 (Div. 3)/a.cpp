#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 100

typedef struct{
    int first, second;
} tPair;

int k, n, j;
bool has_answer = false;
int inputs[MAX];
tPair ans[MAX];

bool find(int number){
    for(int i = 0; i < j ; i++){
        if (number == ans[i].first){
            return true;
        }
    }
    return false;
}
int main(){

    // read k and n and generate arrays
    cin >> n >> k;

    // read inputs
    for(int i = 0; i < n ; i++){
        cin >> inputs[i];
    }

    // solver
    j = 0;
    for(int i = 0; i < n; i++){
        if( !find(inputs[i]) ){
            ans[j].first = inputs[i];
            ans[j].second = i+1;
            j++;
        }

        if( j == k){
            has_answer = true;
            break;
        }
    }

    // answer
    if(has_answer){
        cout << "YES" << endl;
        for(int i = 0; i < k; i++){
            cout << ans[i].second << " ";
        }
        cout << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}