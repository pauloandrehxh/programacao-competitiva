#include <iostream> // 1060

using namespace std;

int main() {
    double n;
    int qtdPositivos = 0;

    for (int i=0; i<6; i++) {
        cin >> n;

        if (n > 0) {
            qtdPositivos += 1;
        }
    }

    cout << qtdPositivos << " valores positivos" << endl;

    return 0;
}