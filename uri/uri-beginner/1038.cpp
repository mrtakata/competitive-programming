#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    std::vector<float> pt;
    pt.push_back(4.00);
    pt.push_back(4.50);
    pt.push_back(5.00);
    pt.push_back(2.00);
    pt.push_back(1.50);

    int id, quantity;
    float total;

    cin >> id >> quantity;
    id--;
    total = pt[id] * quantity;

    std::cout << "Total: R$ " << total << endl;
    return 0;
}
