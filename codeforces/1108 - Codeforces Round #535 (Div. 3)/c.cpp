#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    int n;
    string s;

    string seq[6] = {"RGB", "RBG", "GBR", "GRB", "BRG", "BGR"};

    int minorChange, count, j;
    string currentSequence;

    cin >> n;
    minorChange = n+1;
    cin >> s;
    // for each combination of letters
    for(int i = 0; i < 6; i++){
        count = 0;
        // count the minimum number of changes
        j = 0;
        while(j < n){
            // iterate over combination
            for(int k = 0; k < 3; k++){
                if (j >= n){
                    break;
                }
                if(s[j] != seq[i][k]){
                    count++;
                }
                j++;
            }
        }
        // update combination
        if(count < minorChange){
            minorChange = count;
            currentSequence = seq[i];
        }
    }
    cout << minorChange << endl;

    for(int i = 0; i < n; i++){
        cout << currentSequence[i % 3];
    }
    cout << endl;

    return 0;
}