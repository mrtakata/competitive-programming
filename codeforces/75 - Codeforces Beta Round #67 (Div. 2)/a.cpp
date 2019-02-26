#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    string n1, n2;
    string n1_copy = "", n2_copy = "", sum1 = "";
    cin >> n1 >> n2;
    string sum1_with_zeroes = to_string(stoll(n1) + stoll(n2));

    for(int i = 0; i < sum1_with_zeroes.size(); i++){
        if(sum1_with_zeroes[i] == '0') continue;
        sum1+= sum1_with_zeroes[i];
    }

    for(int i = 0; i < n1.size(); i++){
        if(n1[i] == '0') continue;
        n1_copy+= n1[i];
    }
    for(int i = 0; i < n2.size(); i++){
        if(n2[i] == '0') continue;
        n2_copy+= n2[i];
    }
    
    ll sum2 = stoll(n1_copy) + stoll(n2_copy);
    if(stoll(sum1) == sum2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO"  << endl;
    }
    return 0;
}