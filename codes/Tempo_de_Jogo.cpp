#include <iostream> // 1046

using namespace std;

int main() {
    int h_inicial, h_final, duracao;

    cin >> h_inicial >> h_final;

    if (h_inicial == h_final) {
        duracao = 24;
    } else if (h_inicial > h_final) {
        duracao = 24 - h_inicial + h_final;
    } else {
        duracao = h_final - h_inicial;
    }

    cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
    
    return 0;
}