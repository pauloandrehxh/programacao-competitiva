#include <iostream> // 1036
#include <cmath>
#include <iomanip>

using namespace std;

// Use #include <cmath> ou <bits/stdc++.h>.
// Raiz quadrada: sqrt(delta).
// Potência: pow(b, 2) ou b*b.

int main() {
    double a, b, c, x1, x2, delta;

    cin >> a >> b >> c;

    delta = (pow(b, 2) - 4*a*c);

    if (a == 0 || delta < 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    x1 = (b*(-1) + sqrt(delta)) / (2*a);
    x2 = (b*(-1) - sqrt(delta)) / (2*a);

    cout << fixed << setprecision(5); 
    cout << "R1 = " << x1 << endl;
    cout << "R2 = " << x2 << endl;

    return 0;
}