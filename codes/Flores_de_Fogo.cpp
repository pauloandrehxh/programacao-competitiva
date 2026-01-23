#include <iostream> //1039
#include <cmath>

using namespace std;

int main() {
    int r1, x1, y1, r2, x2, y2;
    double dist;

    // Enquanto houver leitura de dados (EOF)
    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) {
        // Calculando distancia dos dois centros
        dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

        if (r1 >= r2 + dist) {
            cout << "RICO" << endl;
        } else {
            cout << "MORTO" << endl;
        }
    }

    return 0;
}