#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

const int MAX = 21;
int mat[MAX][MAX];
map<int, int> nums;
map<int, int> borders;

void printMat(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int a[n*n];
    // memset(mat, 0, sizeof(mat[0][0]) * n * n);
    
    for(int i = 0; i < n * n; i++){
        cin >> a[i];
        nums[a[i]]++;
    }
    if(n % 2 == 0){
        // filling corners 
        int i = 0, j = 0;
        for(auto &x: nums){
            if(x.second % 4 != 0){
                cout << "NO" << endl;
                return 0;
            }
            for(int k = 0; k < x.second / 4; k++){
                mat[i][j] = mat[n-1-i][j] = 
                mat[i][n-1-j] = mat[n-1-i][n-1-j] = x.first;
                i++;
                if(i >= n/2){
                    i = 0; 
                    j++;
                }
            }
        }
    }
    else{
        int i = 0, j = 0, iCol = 0, jCol = n/2, iRow = n/2, jRow = 0;
        bool alreadyFound = false, midColFilled = false, midRowFilled = false;
        int currentTotal = 0, totalBorders = n * n - n - n + 1;

        for(auto &x : nums){
            // not possible if more than 1 value has odd occurrences
            if(x.second % 2 > 0){
                if(alreadyFound){
                    cout << "NO" << endl;
                    return 0;
                }
                else{
                    alreadyFound = true;
                    mat[n/2][n/2] = x.first;
                    x.second--;                  
                }
            }
            // separate values to fill borders
            while(x.second / 4 > 0 && currentTotal < totalBorders){
                currentTotal += 4;
                x.second -= 4;
                borders[x.first] += 4;
            }
    
            // fill middle values
            if(!midRowFilled){// filling mid row
                while(x.second > 0 && !midRowFilled){
                    mat[iRow][jRow] = mat[iRow][n-1-jRow] = x.first;
                    x.second-=2;
                    jRow++;
                    if(jRow == n/2) midRowFilled = true;
                }
            }
            if(!midColFilled){  // filling mid col
                while(x.second > 0 && !midColFilled){
                    mat[iCol][jCol] = mat[n-1-iCol][jCol] = x.first;
                    x.second -=2;
                    iCol++;
                    if(iCol == n/2) midColFilled = true;
                }
            }
        }
        // fill corners, just like n even
        if(currentTotal != totalBorders){
            cout << "NO" << endl;
            return 0;
        }

        for(auto &x: borders){
            
            if(x.second % 4 != 0){
                cout << "NO" << endl;
                return 0;
            }
            for(int k = 0; k < x.second / 4; k++){
                mat[i][j] = mat[n-1-i][j] = 
                mat[i][n-1-j] = mat[n-1-i][n-1-j] = x.first;
                i++;
                if(i >= n/2){
                    i = 0; 
                    j++;
                }
            }
        }
    }
    cout << "YES" << endl;
    printMat(n);
    return 0;
}