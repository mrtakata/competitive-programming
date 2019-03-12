#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MAXN = 1000000001;

set<char> letters;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int k;
    string s;
    cin >> k >> s;

    for(int i = 0; i < s.size(); i++){
        // check characters used
        if(s[i] != '?' && letters.find(s[i]) == letters.end()){
            letters.insert(s[i]);
        }
    }
    if(letters.size() > k){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    
    for(int i = s.size()/2; i >=0 ; i--){
        int j = s.size()-1-i;
        // cout << s[i] << ", " << s[j] << endl;
        if(s[i] != '?'){  // s[i] is a letter
            if(s[j] != '?' && s[i] != s[j]){ // different letters
                cout << "IMPOSSIBLE" << endl;
                return 0;
            }
            else{ // s[j] is '?', copy letter
                s[j] = s[i];
            }
        }
        else if(s[j] != '?'){ // s[i] ?, s[j] is a letter
            s[i] = s[j];
        }
        else{ // both '?'
            if(letters.size() < k){ // find smallest new letter
                for(int l = k-1; l >=0; l--){
                    char curr_letter = 'a' + l;
                    if(letters.find(curr_letter) == letters.end()){
                        s[i] = s[j] = curr_letter;
                        letters.insert(curr_letter);
                        break;
                    }
                }
            }
            else{// find letter to be put in case size == k
                for(int l = 0; l < k-1; l++){
                    char curr_letter = 'a' + l;
                    if(letters.find(curr_letter) != letters.end()){
                        s[i] = s[j] = curr_letter;
                        break;
                    }
                }  
            }
        }
    }

    if(letters.size() < k){
        cout << "IMPOSSIBLE" << endl;
    }
    else{
        cout << s << endl;
    }
    return 0;
}