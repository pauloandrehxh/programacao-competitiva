#include <iostream> // 1042 Usando vector e sort
#include <algorithm> // Para ordenação
#include <vector>    // Para usar vetores (listas dinâmicas)

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    vector<int> lista = {a, b, c};

    sort(lista.begin(), lista.end());

    cout << lista[0] << "\n" << lista[1] << "\n" << lista[2] << endl;

    cout << endl;

    cout << a << "\n" << b << "\n" << c << endl;

    return 0;
}