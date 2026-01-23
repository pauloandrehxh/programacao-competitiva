#include <iostream> // 1042 Hard Code

using namespace std;

int main() {
    int a, b, c, v1, v2, v3;

    cin >> a >> b >> c;

    v1 = a;
    v2 = b;
    v3 = c;

    if (v1 <= v2 && v2 <= v3) {
        cout << v1 << "\n" << v2 << "\n" << v3 << endl;
    } else if (v1 <= v3 && v3 <= v2) {
        cout << v1 << "\n" << v3 << "\n" << v2 << endl;
    } else if (v2 <= v1 && v1 <= v3) {
        cout << v2 << "\n" << v1 << "\n" << v3 << endl;
    } else if (v2 <= v3 && v3 <= v1) {
        cout << v2 << "\n" << v3 << "\n" << v1 << endl;
    } else if (v3 <= v1 && v1 <= v2) {
        cout << v3 << "\n" << v1 << "\n" << v2 << endl;
    } else if (v3 <= v2 && v2 <= v1) {
        cout << v3 << "\n" << v2 << "\n" << v1 << endl;
    }

    cout << "\n" << a << "\n" << b << "\n" << c << endl;

    return 0;
}