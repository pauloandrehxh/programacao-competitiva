#include <iostream> // 1019

using namespace std;

int main() {
    int segundos, min, horas;

    cin >> segundos;

    horas = segundos / 3600;
    segundos = segundos % 3600;

    min = segundos / 60;
    segundos = segundos % 60;

    cout << horas << ":" << min << ":" << segundos << endl;

    return 0;
}