#include <iostream> // 1259
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> pares, impares;

    while (n--) {
        int num;
        cin >> num;

        if (num % 2 == 0) {
            pares.push_back(num);
        } else {
            impares.push_back(num);
        }
    }

    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end(), greater<int>());

    for (int n : pares) {
        cout << n << "\n";
    }

    for (int n : impares) {
        cout << n << "\n";
    }

    return 0;
}