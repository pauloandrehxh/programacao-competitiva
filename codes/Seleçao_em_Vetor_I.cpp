#include <iostream> // 1174
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    vector<float> A(100);

    for (int i=0; i < 100; i++) {
        cin >> A[i];
    }

    cout << fixed << setprecision(1);

    for (int i = 0; i < 100; i++) {
        if (A[i] <= 10) {
            cout << "A[" << i << "] = " << A[i] << "\n";
        }
    }

    return 0;
}