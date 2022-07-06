#include <iostream>
#include <iomanip>
#define NCOLS 12
using namespace std;

int main(){

    int nLinha;
    char op;
    float answer = 0.0;
    float m[NCOLS][NCOLS];

    // mock scenario
    // nLinha = 2;
    // op = 'M';
    // for(int i = 0; i < NCOLS; i++){
    //     for (int j = 0; j < NCOLS; j++){
    //         m[i][j] = i+j + 0.548;
    //         printf("%.1f ", m[i][j]);
    //     }
    //     printf("\n");
    // }

    // fim teste

    // leitura
    cin >> nLinha;
    cin >> op;

    for(int i = 0; i < NCOLS; i++){
        for (int j = 0; j < NCOLS; j++){
            cin >> m[i][j];
        }
    }

    // soma
    for(int i = 0; i < NCOLS; i++){
        answer+= m[nLinha][i];
    }

    // output format
    cout << fixed;
    cout << setprecision(1);

    // output
    if(op == 'S'){
        cout << answer << endl;
    }
    else{
        cout << answer/NCOLS << endl;
    }
    return 0;
}
