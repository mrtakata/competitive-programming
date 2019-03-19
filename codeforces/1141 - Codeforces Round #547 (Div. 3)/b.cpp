#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MAXN = 200000;
ll n;
int a[MAXN];
int main(){

    cin >> n;
    int max_streak=0, curr_streak = 0;
    bool counting = false;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 1){
            if(!counting){
                counting = true;
                curr_streak = 1;
            }
            else{
                curr_streak++;
                if(curr_streak > max_streak){
                    max_streak = curr_streak;
                }
            }
        }
        else{
            if(counting){
                if(curr_streak > max_streak){
                    max_streak = curr_streak;
                }
                counting = false;
                curr_streak = 0;
            }
        }
    }
    int i = 0;
    while(counting && a[i] == 1 && i < n){
        curr_streak++;
        i++;
    }
    if(curr_streak > max_streak){
        max_streak = curr_streak;
    }
    cout << max_streak << endl;
    return 0;
}