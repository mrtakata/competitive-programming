#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    string s;
    vector<int> numbers;
    // read input
    cin >> s;
    for(int i = 0; i < s.size(); i+=2){
        numbers.push_back(s[i]-'0');
    }
    sort(numbers.begin(), numbers.end());
    // print answer
    for(int i = 0; i < numbers.size() - 1; i++){
        cout << numbers[i] << "+";
    }    
    cout << numbers[numbers.size()-1] << endl;

    return 0;
}