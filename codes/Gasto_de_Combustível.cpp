#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int h, vel_media;
    double dist, litros_necessarios;
    int consumo = 12; // km/l

    cin >> h;
    cin >> vel_media;

    dist = (double) vel_media * h;

    litros_necessarios = dist / consumo; 

    cout << fixed << setprecision(3);

    // Imprime
    cout << litros_necessarios << endl;

    return 0;
}