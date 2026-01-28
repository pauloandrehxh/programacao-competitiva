#include <iostream> // 1052
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<string> meses = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    cout << meses[n-1] << endl;

    return 0;
}