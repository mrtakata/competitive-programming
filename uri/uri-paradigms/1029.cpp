#include <iostream>
#include <cstdio>
using namespace std;

int num_calls = 0;

int fibonacci(int n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else{
        num_calls+=2;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {


    int nValue, result, nTests;

    // mock test
    // nValue = 4;
    cin >> nTests;

    while (nTests > 0){
        cin >> nValue;
        result = fibonacci(nValue);

        // answer
        printf("fib(%d) = %d calls = %d\n", nValue, num_calls, result);
        num_calls = 0;
        nTests--;
    }
    return 0;
}
