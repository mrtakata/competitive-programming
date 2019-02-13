#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int n, m;
ll timeSpent = 0;
int tasks[100000];
int currHouse = 0;

int main(){

    // read input
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> tasks[i];
        tasks[i]--;
    }
    
    int diff;
    for(int i = 0; i < m; i++){
        if(tasks[i] >= currHouse){
            diff = tasks[i] - currHouse;
            timeSpent+=diff;
            currHouse = tasks[i];
        }
        else{
            diff = n - currHouse + tasks[i];
            timeSpent+= diff;
            currHouse = tasks[i];
        }
    }
    // print answer
    cout <<timeSpent<<endl;

    return 0;
}