#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    const double bonus = 0.15;
    double salary, sales, total;
    string sellerName;

    cin >> sellerName;
    cin >> salary;
    cin >> sales;

    total = salary + sales * bonus;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "TOTAL = R$ " << total << endl;
    return 0;
}
