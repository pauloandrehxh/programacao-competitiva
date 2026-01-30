#include <iostream> // 1065

using namespace std;

int main() {
    int n; 
    int qtdPares = 0;
    
    for (int i=0; i<5; i++) {

        cin >> n;
        
        if (n % 2 == 0) {
            qtdPares++;
        }
    }

    cout << qtdPares << " valores pares\n";

    return 0;
}