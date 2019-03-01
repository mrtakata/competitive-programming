// Solution from gogairemashvili

#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

ll h, a, r, d;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    string s;
    cin >> s;


    // What is the minimum costs to not let have the substring happen
    for(int i = 0; i < n; i++){
        ll val;
        cin >> val;
        if(s[i] == 'h'){    // 'h'
            h += val;
        }
        else if(s[i] == 'a'){   // "ha"
            a = min(h, a + val);
        }
        else if(s[i] == 'r'){    // "har"
            r = min(a, r + val);
        }
        else if(s[i] == 'd'){    // "hard"
            d = min(r, d + val);
        }
    }
    cout << d << endl;
    return 0;
}