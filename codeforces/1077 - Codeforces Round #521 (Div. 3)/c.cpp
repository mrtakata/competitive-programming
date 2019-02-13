#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int n;
    ll total = 0;
    cin >> n;

    pair<int, int> array[n];
    vector<int> answer;
    
    // read input
    for(int i = 0; i < n; i++){
        cin >> array[i].first;
        array[i].second = i;
        total+= array[i].first;
    }

    sort(array, array + n);
    int last = array[n-1].first;

    for(int i = 0; i < n - 1; i++){
        if(total - array[i].first - last == last){
            answer.push_back(array[i].second + 1);
        }
    }

    if(total-last-array[n-2].first == array[n-2].first){
        answer.push_back(array[n-1].second + 1);
    }

    cout << answer.size() << endl;
    for(auto x: answer){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}