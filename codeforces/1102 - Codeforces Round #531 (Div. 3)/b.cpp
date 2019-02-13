#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main(){

    set<int> used[5001];

    int n, k, color;
    cin >> n >> k;
    int input[n], output[n];
    bool foundAnswer = true;

    //read numbers
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }

    // coloring
    color = 0;
    int tries = 0;

    for(int i = 0; i < n; i++){
        while(used[input[i]].find(color) != used[input[i]].end() && tries < k){
            color = (color + 1) % k;
            tries++;
        }
        if(tries >= k){
            foundAnswer = false;
            break;
        }
        tries = 0;
        output[i] = color + 1;
        used[input[i]].insert(color);
        color = (color + 1) % k;
    }
    
    // print answer
    if(!foundAnswer){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        for(int i = 0; i < n; i++){
            cout << output[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}