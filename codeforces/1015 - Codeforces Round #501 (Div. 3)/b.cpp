#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int mapS[26];
int mapT[26];

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    string s, t;
    cin >> n;
    cin >> s >> t;
    for(int i = 0; i < n; i++){
        mapS[s[i] - 'a']++;
        mapT[t[i] - 'a']++;
    }

    int moves = 0;
    for(int i = 0; i < 26; i++){
        if(mapS[i] != mapT[i]){
            moves = -1;
            break;
        }
    }
    if(moves == -1){
        cout << moves << endl;
        return 0;
    }

    vector<int> swaps;

    for(int i = n-1; i >= 0; i--){
        int j = 0;
        while(s[j] != t[i]){
            j++;
        }
        while(j < i){
            int aux = s[j];
            s[j] = s[j+1];
            s[j+1] = aux;
            j++;
            swaps.push_back(j);
        }
    }

    cout << swaps.size() << endl;
    for(int i = 0; i < swaps.size(); i++){
        cout << swaps[i] << ' ';
    }
    cout << endl;
    return 0;
}