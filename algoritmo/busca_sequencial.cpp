#include <iostream>
#include <vector>

using namespace std;

int buscaSequencial(vector<int>& lista, int alvo) {
    for (int i=0; i < lista.size(); i++) {
        if (lista[i] == alvo) {
            return i;
        }
    }
    return -1;
}

int main() {
    int x;
    cin >> x; 
    vector<int> numeros = {10,50,70,30,80,100,20};
    int posicao = buscaSequencial(numeros, x);

    if (posicao != -1) cout << "Achei no indice: " << posicao << endl;
    else cout << "Nao achei!" << endl;

    return 0;
}