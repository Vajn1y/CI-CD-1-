#include <iostream>

using namespace std;

int main() {
    int x, y, a, b, c, d;
    bool threatened = false;

    cout << "������� ���������� ������ (x, y): ";
    cin >> x >> y;

    cout << "������� ���������� ����� (a, b): ";
    cin >> a >> b;

    cout << "������� ���������� ����� (c, d): ";
    cin >> c >> d;

    if (x == a || y == b) {
        cout << "����� �������� ������." << endl;
        threatened = true;
    }

    if (abs(x - c) == abs(y - d)) {
        cout << "���� �������� ������." << endl;
        threatened = true;
    }

    if (!threatened) {
        cout << "������ ������ �� ��������." << endl;
    }

    return 0;
}