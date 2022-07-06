#include <iostream>
#include <cmath>
using namespace std;

int isPrimo(int n){
    int i = 2, limit = sqrt(n), answer = 1;
    if(n < 2) {
        answer = 0;
    }
    else{
        while(i <= limit){
            if(n % i == 0){
                answer = 0;
            }
            i++;
        }
    }
    return answer;
}

void printIsPrimo(int n){
    if(isPrimo(n)){
        cout << n << " eh primo" << endl;
    }
    else{
        cout << n << " nao eh primo" << endl;
    }
}

int main(){

    int primo, nEntradas;
    // int tests[4] = {8, 51, 17, 101};
    cin >> nEntradas;

    for(int i = 0; i < nEntradas; i++){
        cin >> primo;
        printIsPrimo(primo);
    }
    return 0;
}
