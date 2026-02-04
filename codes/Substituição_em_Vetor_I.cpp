#include <iostream> // 1172
#include <vector>

using namespace std;

int main() {
    vector<int> vetor(10);

    for (int i=0; i<10; i++) {

        int num;
        cin >> num;

        if (num <= 0) {
            vetor[i] = 1;
        } else {
            vetor[i] = num;
        }
    }

    for (int i=0; i<10; i++) {
        cout << "X[" << i << "] = " << vetor[i] << endl;
    }

    return 0;
}