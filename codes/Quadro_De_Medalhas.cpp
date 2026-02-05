#include <iostream> // 2312
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct Country {
    string name;
    int gold, silver, bronze;
};

bool compare(Country a, Country b) {

    if (a.gold != b.gold) return a.gold > b.gold;

    if (a.silver != b.silver) return a.silver > b.silver;

    if (a.bronze != b.bronze) return a.bronze > b.bronze;

    return a.name < b.name;
}

int main() {
    int n;
    cin >> n;

    vector<Country> medals(n);

    for (int i = 0; i < n; i++) {
        cin >> medals[i].name >> medals[i].gold >> medals[i].silver >> medals[i].bronze;
    }

    sort(medals.begin(), medals.end(), compare);

    for (Country c : medals) {
        cout << c.name << " " << c.gold << " " << c.silver << " " << c.bronze << "\n";
    }

    return 0;
}