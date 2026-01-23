#include <bits/stdc++.h> // 1038

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int cod, qtd;
    float valor;

    cin >> cod >> qtd;

    switch(cod) {
        case 1:
            valor = 4.00;
            break;
        case 2:
            valor = 4.50;
            break;
        case 3:
            valor = 5.00;
            break;
        case 4:
            valor = 2.00;
            break;
        case 5:
            valor = 1.50;
            break;
    }

    cout << fixed << setprecision(2) << "Total: R$ " << valor*qtd << endl;

    return 0;
}