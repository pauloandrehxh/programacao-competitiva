#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int buscaBinaria(vector<int>& lista, int alvo) {
    int inicio = 0;
    int fim = lista.size() - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        cout << "\nProcurando entre indices " << inicio << " e " << fim << ". Meio: " << meio << endl;

        if (lista[meio] == alvo) {
            return meio;
        }

        if (lista[meio] < alvo) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> numeros = {7, 4, 2, 3, 1, 5, 8, 6};

    // Obs: Para usar busca binaria, os numeros tem que estar ordenados.
    sort(numeros.begin(), numeros.end());

    cout << "Vetor Ordenado: \n";
    for(int n : numeros) cout << n << " ";
    
    int alvo;
    cout << "\n\nDigite um numero para buscar: ";
    cin >> alvo;

    int resultado = buscaBinaria(numeros, alvo);

    if (resultado != -1) {
        cout << "\nEncontrado na posicao: " << resultado << endl;
    } else {
        cout << "\nNao encontrado." << endl;
    }

    return 0;
}