#include <iostream>

using namespace std;

int main() {
    int x, y, a, b, c, d;
    bool threatened = false;

    cout << "Введите координаты короля (x, y): ";
    cin >> x >> y;

    cout << "Введите координаты ладьи (a, b): ";
    cin >> a >> b;

    cout << "Введите координаты слона (c, d): ";
    cin >> c >> d;

    if (x == a || y == b) {
        cout << "Ладья угрожает королю." << endl;
        threatened = true;
    }

    if (abs(x - c) == abs(y - d)) {
        cout << "Слон угрожает королю." << endl;
        threatened = true;
    }

    if (!threatened) {
        cout << "Королю ничего не угрожает." << endl;
    }

    return 0;
}