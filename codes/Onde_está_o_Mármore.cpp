#include <iostream> // 1025
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, q;
    int caso = 1;

    while (true) {
        cin >> n >> q;

        if (n == 0 && q == 0) {
            break;
        }

        vector<int> v(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        cout << "CASE# " << caso << ":\n";

        for (int i = 0; i < q; i++) {
            int alvo;
            cin >> alvo;

            auto it = lower_bound(v.begin(), v.end(), alvo);

            if (it != v.end() && *it == alvo) {
                cout << alvo << " found at " << (it - v.begin() + 1) << endl;
            } else {
                cout << alvo << " not found" << endl;
            }
            
        }

        caso++;
    }

    return 0;
}