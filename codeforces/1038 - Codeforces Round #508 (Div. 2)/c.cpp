#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> a, b;

    int val;
    for(int i = 0; i < n; i++){
        cin >> val;
        a.push_back(val);
    }
    for(int i = 0; i < n; i++){
        cin >> val;
        b.push_back(val);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll sumA, sumB;
    sumA = sumB = 0;

    while(a.size() > 0 || b.size() > 0){
        if(b.size() == 0){
            sumA +=a[a.size() - 1];
            a.pop_back();
        }
        else if(a.size() > 0){
            if(a[a.size() - 1] < b[b.size()-1]){
                b.pop_back();
            }
            else{
                sumA +=a[a.size() - 1];
                a.pop_back();
            }
        }
        else{
            b.pop_back();
        }

        if(a.size() == 0){
            if(b.size() > 0){
                sumB +=b[b.size() - 1];
                b.pop_back();
            }
        }
        else if(b.size() > 0){
            if(b[b.size() - 1] < a[a.size()-1]){
                a.pop_back();
            }
            else{
                sumB +=b[b.size() - 1];
                b.pop_back();
            }
        }
        else{
            a.pop_back();
        }

    }
    cout << sumA - sumB << endl;
    return 0;
}