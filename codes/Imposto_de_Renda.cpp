#include <iostream> // 1051
#include <iomanip>

using namespace std;

int main() {
    double salario, imposto;

    cin >> salario;

    if (salario <= 2000) {
        cout << "Isento" << endl;
        return 0;
    } else if (salario > 4500) {
        salario -= 2000;

        imposto = 1000 * 0.08;
        salario -= 1000;

        imposto += 1500 * 0.18;
        salario -= 1500;

        imposto += salario * 0.28;
    } else if (salario > 3000) {
        salario -= 2000;
        
        imposto = 1000 * 0.08;
        salario -= 1000;

        imposto += salario * 0.18;
    } else {
        salario -= 2000;
        
        imposto = salario * 0.08;
    }

    cout << fixed << setprecision(2);

    cout << "R$ " << imposto << endl;

    return 0;
}