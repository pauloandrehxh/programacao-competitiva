#include <iostream> // 1020

using namespace std;

int main() {
    int dias, meses, anos;

    cin >> dias;

    anos = dias / 365;
    dias = dias % 365;

    meses = dias / 30;
    dias = dias % 30;

    cout << anos << " ano(s)\n" << meses << " mes(es)\n" << dias << " dia(s)" << endl;  

    return 0;
}