#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        int num;
        cin >> num;

        if (num == 0) {
            cout << "NULL\n";
            continue;
        }

        if (num % 2 == 0) {
            cout << "EVEN ";
        } else {
            cout << "ODD ";
        }

        if (num > 0) {
            cout << "POSITIVE\n";
        } else {
            cout << "NEGATIVE\n";
        }
    }

    return 0;
}