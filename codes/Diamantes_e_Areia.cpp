#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;

    cin >> n;

    while (n--) {
        string exp;
        cin >> exp;

        int dima = 0;
        int abertos = 0;

        for (int i=0; i < exp.length(); i++) {
            
            if (exp[i] == '<') {
                abertos++;
            } else if (exp[i] == '>') {
                if (abertos > 0) {
                    abertos--;
                    dima++;
                }
            }
        }

        cout << dima << "\n";
    }

    return 0;
}