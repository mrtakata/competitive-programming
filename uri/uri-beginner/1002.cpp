#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    const double pi = 3.14159;
    double A, R;

    cin >> R;
    A = pi * R * R;
    std::cout << std::fixed;
    std::cout << std::setprecision(4);
    std::cout << "A=" << A << endl;
    return 0;
}
