#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int n, r, a = 0, previousCount;;
    int begin, end;
    bool isUseless = true;
    // read input
    cin >> n >> r;
    int array[n];
    int heated[1000] = {0};

    for(int i = 0; i < n; i++){
        cin >> array[i];
        if(array[i] == 1){
            begin = i-r+1 > 0 ? i-r+1 : 0;
            end   = i+r < n ? i+r : n;
            for(int j= begin; j < end; j++){
                heated[j]++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(heated[i] == 0){
            cout << -1 << endl;
            return 0;
        }

        if(array[i] == 1){
            isUseless = true;
            begin = i-r+1 > 0 ? i-r+1 : 0;
            end   = i+r < n ? i+r : n;
            previousCount = a;
            for(int j= begin; j < end; j++){
                if(heated[j] == 1){
                    isUseless = false;
                }
            }
            if(isUseless){
                for(int j= begin; j < end; j++){
                    heated[j]--;
                }
            }
            else{
                a++;
            }
        }
    }

    // print answer
    cout << a << endl;;

    return 0;
}