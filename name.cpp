
#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "========================\n";
    cout << "    SIMPLE CALCULATOR\n";
    cout << "========================\n";

    cout << "Masukkan angka pertama: ";
    cin >> a;

    cout << "Pilih operator (+, -, *, /): ";
    cin >> op;

    cout << "Masukkan angka kedua: ";
    cin >> b;

    cout << "------------------------\n";

    switch (op) {
        case '+':
            cout << "Hasil: " << a + b;
            break;
        case '-':
            cout << "Hasil: " << a - b;
            break;
        case '*':
            cout << "Hasil: " << a * b;
            break;
        case '/':
            if (b != 0)
                cout << "Hasil: " << a / b;
            else
                cout << "Error: Tidak bisa dibagi 0";
            break;
        default:
            cout << "Operator tidak valid";
    }

    cout << "\n========================\n";
    return 0;
}
