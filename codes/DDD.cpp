#include <iostream>
#include <string>

using namespace std;

int main() {
    int ddd;
    string regiao;

    cin >> ddd;

    switch (ddd) {
        case  61:
            regiao = "Brasilia";
            break;
        case  71:
            regiao = "Salvador";
            break;
        case  11:
            regiao = "Sao Paulo";
            break;
        case  21:
            regiao = "Rio de Janeiro";
            break;
        case  32:
            regiao = "Juiz de Fora";
            break;
        case  19:
            regiao = "Campinas";
            break;
        case  27:
            regiao = "Vitoria";
            break;
        case  31:
            regiao = "Belo Horizonete";
            break;
        default:
            cout << "DDD nao cadastrado" << endl;
            return 0;
    }

    cout << regiao << endl;
    
    return 0;
}