#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

bool compare(const pair<ll, ll> &a, const pair<ll, ll> &b){
    return a.second > b.second;
}

int main(){

    // variable declaration
    ll n, k, value;
    map<ll, ll> hash;
    vector< pair<ll, ll> > frequencies;

    // read input
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> value;
        if(hash.find(value) == hash.end()){
            hash[value] = 1;
        }
        else{
            hash[value]++;
        }
    }

    for(auto x: hash){
        frequencies.push_back(make_pair(x.first, x.second));
    }

    sort(frequencies.begin(), frequencies.end(), compare);

    for(int i = 0; i < frequencies.size()-k; i++){
        frequencies.pop_back();
    }

    // print answer
    for (auto x : frequencies){
        cout << x.second << " ";
    }

    cout << endl;

    return 0;
}