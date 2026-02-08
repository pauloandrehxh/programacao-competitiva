#include <iostream> // 1079
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        float n1, n2, n3;
        cin >> n1 >> n2 >> n3;

        float media = (n1*2 + n2*3 + n3*5) / 10;


        cout << fixed << setprecision(1) << media << endl; 
    }

    return 0;
}