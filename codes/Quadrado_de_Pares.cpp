#include <iostream> // 1073

using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i=2; i <= n; i+=2) {
        cout << i << "^2 = " << i*i << "\n";
    } 

    return 0;
}