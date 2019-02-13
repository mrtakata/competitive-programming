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
    vector<int> neg, pos, zeroes;
    for(int i = 0; i < n; i++){
        cin >> a[n];
        if(a[n] == 0){
            zeroes.push_back(a[n]);
        }
        else if(a[n] > 0){
            pos.push_back(a[n]);
        }
        else{
            neg.push_back(a[n]);
        }
    }
    if(pos.size() == 0){
        pos.push_back(neg[0]);
        pos.push_back(neg[1]);
        neg.erase(neg.begin());
        neg.erase(neg.begin());
    }
    if(neg.size() % 2 == 0){
        zeroes.push_back(neg[0]);
        neg.erase(neg.begin());
    }
    // print answer
    cout << neg.size() << " ";
    for(int i = 0; i < neg.size(); i++){
        cout << neg[i] << " ";
    };
    cout << endl;

    cout << pos.size() << " ";
    for(int i = 0; i < pos.size(); i++){
        cout << pos[i] << " ";
    };
    cout << endl;

    cout << zeroes.size() << " ";
    for(int i = 0; i < zeroes.size(); i++){
        cout << zeroes[i] << " ";
    };
    cout << endl;

    return 0;
}