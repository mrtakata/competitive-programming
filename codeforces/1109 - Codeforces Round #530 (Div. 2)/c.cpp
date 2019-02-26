#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

// variable declaration
string s;
int k;

int dp[200][200];
string dpS[200][200];

string solve(string sofar, int pos){
    string a, b;
    if (pos >= s.size()){
        if(sofar.size() == k){
            return sofar;
        }
        else{
            return "Impossible";
        }
    }
    if(sofar.size() > k){
        return "Impossible";
    }
    // cout << sofar << endl;
    if(dp[pos][sofar.size()] != -1){
        return dpS[pos][sofar.size()];
    } 
    dp[pos][sofar.size()] = 1;

    if(pos+1 < s.size() && s[pos+1] == '?'){
        a = solve(sofar, pos+2);
        sofar.push_back(s[pos]);
        b = solve(sofar, pos+2);

        if(a == "Impossible"){
            return dpS[pos][sofar.size()-1] = b;
        }
        return dpS[pos][sofar.size()-1] = a;
    }
    else if(pos+1 < s.size() && s[pos+1] == '*'){
        a = solve(sofar, pos+2);    // retira
        sofar.push_back(s[pos]);
        b = solve(sofar, pos);      // passa

        if(a == "Impossible"){
            return dpS[pos][sofar.size()-1] = b;
        }
        return dpS[pos][sofar.size()-1] = a;
    }
    else{
        sofar.push_back(s[pos]);
        return dpS[pos][sofar.size()-1] = solve(sofar, pos+1);   
    }
}

int main(){

    // read input
    cin >> s >> k;
    memset(dp, -1, sizeof(dp));
    cout << solve("", 0) << endl;

    return 0;
}