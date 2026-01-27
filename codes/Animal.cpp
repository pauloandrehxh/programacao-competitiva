#include <iostream> // 1049
#include <string>

using namespace std;

int main() {
    string a, b, c, especie;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a == "vertebrado") {
        if (b == "ave") {
            if (c == "carnivoro") {
                especie = "aguia";
            } else {
                especie = "pomba";
            }
        } else {
            if (c == "onivoro") {
                especie = "homem";
            } else {
                especie = "vaca";
            }
        }
    } else {
        if (b == "inseto") {
            if (c == "hematofago") {
                especie = "pulga";
            } else {
                especie = "lagarta";
            }
        } else {
            if (c == "hematofago") {
                especie = "sanguessuga";
            } else {
                especie = "minhoca";
            }
        }
    }

    cout << especie << endl;

    return 0;
}