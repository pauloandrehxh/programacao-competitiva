#include <iostream> // 1548
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;

    while (n--) {
        int m; 
        cin >> m;

        vector<int> v(m);

        for (int i=0; i < m; i++) {
            cin >> v[i];
        }

        vector<int> v_sorted = v;

        sort(v_sorted.begin(), v_sorted.end(), greater<int>());

        int same = 0;

        for (int i=0; i < m; i++) {
            if (v[i] == v_sorted[i]) {
                same++;
            }
        }

        cout << same << endl;

    }

    return 0;
}