#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int
const ll MAXN = 100;
int n;
vector<pair<int, int> > book;
int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;
        book.push_back(make_pair(l,r));
    }

    int page;
    cin >> page;

    for(int i = 0; i < n; i++){
        if(book[i].second >= page){
            cout << n - i << endl;
            return 0;
        }
    }
    return 0;
}