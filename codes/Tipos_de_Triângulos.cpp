#include <iostream> // 1045
#include <cmath>
#include <algorithm>
#include <vector>   

using namespace std;

int main() {
    double a, b, c;

    cin >> a >> b >> c;

    vector<double> lista = {a, b, c};

    sort(lista.begin(), lista.end());

    a = lista[2];
    b = lista[1];
    c = lista[0];

    if (a >= b + c) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        // Angulos
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
            cout << "TRIANGULO RETANGULO" << endl;
        } else if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        } else {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        
        // Lados
        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (a == b || a == c || b == c) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}