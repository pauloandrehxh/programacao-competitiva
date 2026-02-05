#include <iostream> // 1071

using namespace std;

int main() {
    int x, y;
    int soma_impares = 0;
    int min, max;

    cin >> x;
    cin >> y;

    if (x < y) {
        min = x;
        max = y;
    } else {
        min = y;
        max = x;
    }

    // ENTRE x e y: LOOP EXCLUSIVO
    for (int i = min+1; i < max; i++) {
        if (i % 2 != 0) {
            soma_impares += i;
        }
    }

    cout << soma_impares << endl; 

    return 0;
}