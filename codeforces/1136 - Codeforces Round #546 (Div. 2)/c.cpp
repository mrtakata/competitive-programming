#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MAXN = 500;
ll a[MAXN][MAXN], b[MAXN][MAXN];


int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> b[i][j];
        }
    }

    // solution upper diagonal
    for(int i = 0; i < n; i++){
        map<ll, ll> hashmap;
        int temp_i = i;
        int j = 0;
        while(i >= 0 && j >= 0 && i < n && j < m){
            // cout << "i: " << i << ", j: " << j << endl;
            if(hashmap.find(a[i][j]) == hashmap.end()){
                hashmap[a[i][j]] = 1;
            }
            else{
                hashmap[a[i][j]]++;
            }
            i--; j++;
        }
        i = temp_i;
        j = 0;
        while(i >= 0 && j >= 0 && i < n && j < m){
            // cout << "i: " << i << ", j: " << j << endl;
            if(hashmap.find(b[i][j]) == hashmap.end() || hashmap[b[i][j]] == 0){
                cout << "NO" << endl;
                return 0;
            }
            else{
                hashmap[b[i][j]]--;
            }
            i--; j++;
        }
        i = temp_i;
    }

    // solution lower diagonal
    for(int j = 1; j < m; j++){
        map<ll, ll> hashmap;
        int i = n-1;
        int temp_j = j;
        while(i >= 0 && j >= 0 && i < n && j < m){
            // cout << "i: " << i << ", j: " << j << endl;
            if(hashmap.find(a[i][j]) == hashmap.end()){
                hashmap[a[i][j]] = 1;
            }
            else{
                hashmap[a[i][j]]++;
            }
            i--; j++;
        }
        i = n-1;
        j = temp_j;
        while(i >= 0 && j >= 0 && i < n && j < m){
            // cout << "i: " << i << ", j: " << j << endl;
            if(hashmap.find(b[i][j]) == hashmap.end() || hashmap[b[i][j]] == 0){
                cout << "NO" << endl;
                return 0;
            }
            else{
                hashmap[b[i][j]]--;
            }
            i--; j++;
        }
        j = temp_j;
    }

    cout << "YES" << endl;
    return 0;
}