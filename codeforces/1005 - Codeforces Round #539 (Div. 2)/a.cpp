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
    vector<int> stairways;
    cin >> a[0];
    for(int i = 1; i < n; i++){
        cin >> a[i];
        if(a[i] == 1){
            stairways.push_back(a[i-1]);
        }
    }
    stairways.push_back(a[n-1]);
    // print answer
    cout << stairways.size() << endl;
    for(int i = 0; i < stairways.size(); i++){
        cout << stairways[i] << " ";
    }
    cout << endl;
    return 0;
}