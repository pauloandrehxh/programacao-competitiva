#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n1, n2, media;

    cin >> n1;
    cin >> n2;

    media = (n1*3.5 + n2*7.5) / 11.0;

    // Configurando para mostrar 5 casas decimais
    cout << fixed << setprecision(5);

    // Imprime
    cout << "MEDIA = " << media << endl;

    return 0;
}