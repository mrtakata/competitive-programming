#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

const int MAX = 21;
int mat[MAX][MAX];

void printMat(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
}

map<int, int> nums;
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
        int i = 0, j = 0;
        for(auto x: nums){
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
        bool hasOdd = false;
        int i = 0, j = 0;
        for(auto x : nums){
            if(x.second % 2 > 0){
                if(!hasOdd){
                    hasOdd = true;
                    
                    mat[n/2][n/2] = x.first;
                    x.second--;                
                    for(int i = 0; i < n/2; i++){
                        mat[(n/2)-1][n/2] = mat[(n/2)+1][n/2] = x.first;                            
                        x.second-=2;
                    }
                }
                else{
                    cout << "NO" << endl;
                    return 0;
                }
            }
            else{
                if(x.second % 4 == 0 && i + j <= n/2){
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
        }
    }
    cout << "YES" << endl;
    printMat(n);
    return 0;
}