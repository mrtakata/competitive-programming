#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef std::map<string, string> DDDList;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    DDDList l;
    string answer;
    string searchedDDD;

    l["61"] = "Brasilia";
    l["71"] = "Salvador";
    l["11"] = "Sao Paulo";
    l["21"] = "Rio de Janeiro";
    l["32"] = "Juiz de Fora";
    l["19"] = "Campinas";
    l["27"] = "Vitoria";
    l["31"] = "Belo Horizonte";

    cin >> searchedDDD;

    answer = l.count(searchedDDD) ? l[searchedDDD] : "DDD nao cadastrado";
    std::cout << answer << endl;
    return 0;
}
