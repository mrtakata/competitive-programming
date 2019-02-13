#include <bits/stdc++.h>
using namespace std;
// define macros
#define ll long long int

int main(){

    // variable declaration
    int n;

    // read input
    cin >> n;

    int smallestOdd = 101, sum = 0, petals;
    // print answer
    for(int i = 0; i < n; i++){
        cin >> petals;
        sum+= petals;
        if(petals % 2 > 0 && petals < smallestOdd){
            smallestOdd = petals;
        }
    }
    if(sum % 2 == 0 && smallestOdd > 100){
        // return 0 if there are no odd number of petals in a flower
        cout << 0 << endl;
        return 0;
    }
    int answer = sum % 2 > 0 ? sum : sum - smallestOdd;
    cout << answer << endl;

    return 0;
}