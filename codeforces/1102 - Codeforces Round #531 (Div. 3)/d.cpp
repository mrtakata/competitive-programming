#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ll n;
    cin >> n;
    char s[n];
    int diff0, diff1, diff2, mean;
    mean = n/3;
    diff0 = diff1 = diff2 = -mean;

    for(int i = 0; i < n; i++){
        cin >> s[i];
        if(s[i] == '0'){
            diff0++;
        }
        else if(s[i] == '1'){
            diff1++;
        }
        else{
            diff2++;
        }
    }

    // changing from left to right
    // 2 -> 0; 2 -> 1; 1 -> 0
    for(int i = 0; i < n; i++){
        if(s[i] == '2'){
            if(diff2 > 0 && diff0 < 0){
                s[i] = '0';
                diff2--;
                diff0++;
            }
            else if(diff2 > 0 && diff1 < 0){
                s[i] = '1';
                diff2--;
                diff1++;
            }
        }
        else if(s[i] == '1'){
            if(diff1 > 0 && diff0 < 0){
                s[i] = '0';
                diff1--;
                diff0++;
            }
        }
    }
    // changing from right to left
    // 1 -> 2; 0 -> 2; 0 -> 1
    for(int i = n-1; i >= 0; i--){
        if(s[i] == '1'){
            if(diff1 > 0 && diff2 < 0){
                s[i] = '2';
                diff1--;
                diff2++;
            }
        }
        else if(s[i] == '0'){
            if(diff0 > 0 && diff2 < 0){
                s[i] = '2';
                diff0--;
                diff2++;
            }
            else if(diff0 > 0 && diff1 < 0){
                s[i] = '1';
                diff0--;
                diff1++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << s[i];
    }
    cout << endl;
    return 0;
}