#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
int n, k;
string s;
int letters[26];
int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> n >> k >> s;
    for(int i = 0; i < n; i++){
        letters[s[i]-'A']++;
    }
    int min_occur = letters[0];
    for(int i = 1; i < k; i++){
        if(letters[i] < min_occur){
            min_occur = letters[i];
        }
    }
    cout << k * min_occur << endl;
    return 0;
}