#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string s;

const int ST_0 = 0;
const int ST_H = 1;
const int ST_E = 2;
const int ST_L1 = 3;
const int ST_L2 = 4;
const int ST_O = 5;

int main(){
    int state = 0, i = 0;
    cin >> s;
    while(i < s.size() && state < ST_O){
        switch(state){
            case ST_0:{
                if(s[i] == 'h'){
                    state = ST_H;
                }
                break;
            }
            case ST_H:{
                if(s[i] == 'e'){
                    state = ST_E;
                }
                break;
                
            }
            case ST_E:{
                if(s[i] == 'l'){
                    state = ST_L1;
                }
                break;
                
            }
            case ST_L1:{
                if(s[i] == 'l'){
                    state = ST_L2;
                }
                break;
                
            }
            case ST_L2:{
                if(s[i] == 'o'){
                    state = ST_O;
                }
                break;
                
            }   
            default:{
                i++;
            }         
        }
        i++;
    }
    if(state == ST_O){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}