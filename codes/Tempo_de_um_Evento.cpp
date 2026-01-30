#include <iostream> // 1061
#include <string>

using namespace std;

int main() {
    int dia_i, hora_i, min_i, seg_i, dia_f, hora_f, min_f, seg_f, tempo_i, tempo_f;
    string resto;

    cin >> resto >> dia_i;

    cin >> hora_i >> resto >> min_i >> resto >> seg_i;

    cin >> resto >> dia_f;

    cin >> hora_f >> resto >> min_f >> resto >> seg_f;

    tempo_i = dia_i*3600*24 + hora_i*3600 + min_i*60 + seg_i;
    tempo_f = dia_f*3600*24 + hora_f*3600 + min_f*60 + seg_f;

    int tempo, dia, hora, min, seg;

    tempo = tempo_f - tempo_i;

    dia = tempo / (3600*24);
    tempo = tempo % (3600*24);

    hora = tempo / 3600;    
    tempo = tempo % 3600;    
    
    min = tempo / 60;
    tempo = tempo % 60;

    seg = tempo;

    cout << dia << " dia(s)\n" << hora << " hora(s)\n" << min << " minuto(s)\n" << seg << " segundo(s)\n";

    return 0;
}