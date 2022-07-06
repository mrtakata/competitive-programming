#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main() {

    //  * Escreva a sua solução aqui
    //  * Code your solution here
    //  * Escriba su solución aquí

    const double pi = 3.14159;
    double r;

    cin >> r;
    std::cout   << std::fixed;
    std::cout   << std::setprecision(3);
    std::cout   << "VOLUME = "
                << (4.0/3) * pi * r * r * r << endl;
    return 0;
}
