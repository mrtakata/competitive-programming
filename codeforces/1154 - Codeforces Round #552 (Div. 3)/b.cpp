#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

const int MAXN = 100;
int a[MAXN];
set<int> nums;
int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        nums.insert(a[i]);
    }
    if(nums.size() > 3){
        cout << "-1" << endl;
        return 0;
    }
    else if(nums.size() == 3){
        vector<ll> vals;
        for(auto num : nums){
            vals.push_back(num);
        }
        sort(vals.begin(), vals.end());
        if(vals[1] - vals[0] != vals[2]-vals[1]){
            cout << -1 << endl;
            return 0;
        }
        else{
            cout << vals[1] - vals[0] << endl;
        }
    }
    else if(nums.size() == 2){
        int sum = 0, last_num;
        vector<int> vals;
        for(auto num : nums){
            sum += num;
            vals.push_back(num);
        }
        if(sum % 2 > 0){
            cout << abs(vals[1]-vals[0]) << endl;
            return 0;
        }
        else{
            cout << abs(sum/2 - vals[1]) << endl;
            return 0;
        }
    }
    else{
        cout << 0 << endl;
        return 0;
    }
    return 0;
}