#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int n, count = 0, pointer;
    cin >> n; 
    string s;
    char prev;
    string x;

    cin >> s;

    for(int i = 0; i < n; i++){
        prev = s[i];
        pointer = i;

        while( i < n && s[i] == prev){
            i++;
        }
        
        // which char to fill
        x = "RGB";
        x.erase(x.find(prev), 1);
        if(i < n){
            x.erase(x.find(s[i]), 1);
        }

        for(int j = pointer+1; j <= i-1; j+=2){
            s[j] = x[0];
            count++;
        }
        i = pointer;
    }

    // print answer
    cout << count << endl;
    cout << s << endl;

    return 0;
}