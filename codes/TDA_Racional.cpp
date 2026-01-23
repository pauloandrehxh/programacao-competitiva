#include <iostream> // 1022
#include <cmath> // para usar abs()

using namespace std;

// Máximo Divisor Comum (Algoritmo de Euclides)
int mdc(int a, int b) {
    if (b == 0) return a;
    return mdc(b, a % b);
}

int main() {
    int n; // casos de teste

    cin >> n;

    while (n) {
        int n1, d1, n2, d2;
        char barra, operador;

        cin >> n1 >> barra >> d1 >> operador >> n2 >> barra >> d2;

        int num_final, den_final;

        if (operador == '+') {
            num_final = n1 * d2 + n2 * d1;
            den_final = d1 * d2;
        } else if (operador == '-') {
            num_final = n1 * d2 - n2 * d1;
            den_final = d1 * d2;
        } else if (operador == '*') {
            num_final = n1 * n2;
            den_final = d1 * d2;
        } else if (operador == '/') {
            num_final = n1 * d2;
            den_final = n2 * d1;
        }

        // MDC funciona melhor com valores positivos
        int divisor = mdc(abs(num_final), abs(den_final));

        int num_simp = num_final / divisor;
        int den_simp = den_final / divisor;
        
        cout << num_final << "/" << den_final << " = " << num_simp << "/" << den_simp << endl;

        n--;
    }
    return 0;
}