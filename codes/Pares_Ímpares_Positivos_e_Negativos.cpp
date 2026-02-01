#include <iostream> // 1066

using namespace std;

int main() {
    int n; 
    int qtdPares = 0, qtdImpares = 0, qtdNegativos = 0, qtdPositivos = 0;
    
    for (int i=0; i<5; i++) {

        cin >> n;
        
        if (n % 2 == 0) {
            qtdPares++;
        } else {
            qtdImpares++;
        }

        if (n > 0) {
            qtdPositivos++;
        } else if (n < 0) {
            qtdNegativos++;
        }
    }

    cout << qtdPares << " valor(es) par(es)\n";
    cout << qtdImpares << " valor(es) impar(es)\n";
    cout << qtdPositivos << " valor(es) positivo(s)\n";
    cout << qtdNegativos << " valor(es) negativo(s)\n";

    return 0;
}