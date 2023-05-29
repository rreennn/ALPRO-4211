#include <iostream>
using namespace std;

int pembagian(int a, int b) {
    if(a < b) {
        return 0;
    } else {
        return 1 + pembagian(a-b, b);
    }
}

int main() {
    int a, b;
    cout << "Masukkan angka pertama! : ";
    cin >> a;
    cout << "Masukkan angka kedua! : ";
    cin >> b;
    cout << a << "/" << b << "=" << pembagian(a, b);
    return 0;
}