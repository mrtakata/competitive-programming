#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int houses[100];
int isDisturbed(int a){
    return houses[a-1] & houses[a+1] & !houses[a];
}
int main(){

    // variable declaration
    int n, answer = 0;
    
    // read input
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> houses[i];
    }
    bool flag = false;
    for(int i = 1; i < n - 1; i++){
        if(isDisturbed(i)){
            if(isDisturbed(i-2) && !flag){
                flag = true;
            }
            else{
                answer++;
                flag = false;
            }
        }
    }
    // print answer
    cout << answer << endl;

    return 0;
}