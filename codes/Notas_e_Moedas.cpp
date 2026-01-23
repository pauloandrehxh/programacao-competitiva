#include <iostream> // 1021

using namespace std;

int main() {

    double valor;
    int centavos;

    cin >> valor; // em reais

    // O (int) garante a conversão explícita, e o +0.5 corrige o erro de precisão
    centavos = (valor * 100) + 0.5;

    cout << "NOTAS:" << endl;

    cout << centavos / 10000 << " nota(s) de R$ 100.00" << endl;
    centavos = centavos % 10000;

    cout << centavos / 5000 << " nota(s) de R$ 50.00" << endl;
    centavos = centavos % 5000;

    cout << centavos / 2000 << " nota(s) de R$ 20.00" << endl;
    centavos = centavos % 2000;

    cout << centavos / 1000 << " nota(s) de R$ 10.00" << endl;
    centavos = centavos % 1000;

    cout << centavos / 500 << " nota(s) de R$ 5.00" << endl;
    centavos = centavos % 500;

    cout << centavos / 200 << " nota(s) de R$ 2.00" << endl;
    centavos = centavos % 200;

    cout << "MOEDAS:" << endl;

    cout << centavos / 100 << " moeda(s) de R$ 1.00" << endl;
    centavos = centavos % 100;

    cout << centavos / 50 << " moeda(s) de R$ 0.50" << endl;
    centavos = centavos % 50;

    cout << centavos / 25 << " moeda(s) de R$ 0.25" << endl;
    centavos = centavos % 25;

    cout << centavos / 10 << " moeda(s) de R$ 0.10" << endl;
    centavos = centavos % 10;

    cout << centavos / 5 << " moeda(s) de R$ 0.05" << endl;
    centavos = centavos % 5;

    cout << centavos / 1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}