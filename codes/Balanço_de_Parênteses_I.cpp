#include <iostream>
#include <string>

using namespace std;

int main() {
    string exp;

    while (cin >> exp) {
        int saldo = 0;
        bool erro = false;
        
        for (int i=0; i < exp.length(); i++) {

            if (exp[i] == '(') {
                saldo++;
            } else if (exp[i] == ')') {
                saldo--;
            }

            if (saldo < 0) {
                erro = true;
                break;
            }
        }

        if (!erro && saldo == 0) {
            cout << "correct\n";
        } else {
            cout << "incorrect\n";
        }
    }

    return 0;
}