#include <iostream> // 1048
#include <iomanip>

using namespace std;

int main() {
    double salario, reajuste;
    int aumento;

    cin >> salario;

    if (salario <= 400) {
        aumento = 15;
    } else if (salario <= 800) {
        aumento = 12;
    } else if (salario <= 1200) {
        aumento = 10;
    } else if (salario <= 2000) {
        aumento = 7;
    } else {
        aumento = 4;
    }

    reajuste = salario * aumento / 100;
    salario += reajuste;

    cout << fixed << setprecision(2);
    
    cout << "Novo salario: " << salario << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: " << aumento << " %" << endl;

    return 0;
}