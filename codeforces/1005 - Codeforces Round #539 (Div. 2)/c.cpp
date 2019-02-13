#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
map<int, int> values;

int main(){

    // variable declaration
    int n;
    
    // read input
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        values[a[i]]++;
    }
    int answer = 0;
    for(int i = 0; i < n; i++){
        bool found = false;
        for(int j = 0; j < 31; j++){
            ll power = 1 << j;
            
            if(values.count(power - a[i])){
                if(2 * a[i] == power){
                    if(values[a[i]] > 1){
                        found = true;
                        break;
                    }
                }
                else{
                    found = true;
                    break;
                }
            }
        }
        if(!found){
            answer++;
        }
    }
    // print answer
    cout << answer << endl;

    return 0;
}