#include <iostream> // 1064
#include <iomanip>

using namespace std;

int main() {
    double n;
    int qtdPositivos = 0;
    double somaTotal = 0;

    for (int i=0; i<6; i++) {
        cin >> n;

        if (n > 0) {
            qtdPositivos += 1;
            somaTotal += n;
        }
    }

    double media = somaTotal / qtdPositivos;

    cout << fixed << setprecision(1) << qtdPositivos << " valores positivos\n" << media << "\n";

    return 0;
}