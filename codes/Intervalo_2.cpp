#include <iostream> // 1072

using namespace std;

int main() {
    int n;
    cin >> n;

    int in = 0, out = 0; 

    while (n--) {
        int x;
        cin >> x;

        if (x >= 10 && x <= 20) {
            in++;
        } else {
            out++;
        }
    }

    cout << in << " in\n" << out << " out\n";

    return 0;
}