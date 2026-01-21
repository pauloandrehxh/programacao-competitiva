#include <iostream>
#include <iomanip> // Controla casas decimais

using namespace std;

int main() {
    double raio, area;
    double n = 3.14159;

    cin >> raio;

    area = n * (raio * raio);

    // Configurando para mostrar 4 casas decimais
    cout << fixed << setprecision(4);

    // Imprime
    cout << "A=" << area << endl;

    return 0;
}