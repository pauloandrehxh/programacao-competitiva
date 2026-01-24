#include <iostream> // 1047

using namespace std;

int main() {
    int h_inicial, min_inicial, h_final, min_final, duracao;

    cin >> h_inicial >> min_inicial >> h_final >> min_final;

    int temp_inicial = h_inicial*60 + min_inicial;
    int temp_final = h_final*60 + min_final;

    if (temp_final > temp_inicial) {
        duracao = temp_final - temp_inicial;
    } else if (temp_inicial > temp_final) {
        duracao = 24*60 - temp_inicial + temp_final;
    } else {
        duracao = 24*60;
    }

    int hora = duracao / 60;
    int min = duracao % 60;

    cout << "O JOGO DUROU " << hora << " HORA(S) E " << min << " MINUTO(S)" << endl;

    return 0;
}