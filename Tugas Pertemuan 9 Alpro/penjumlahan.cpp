#include <iostream>
using namespace std;

int penjumlahan(int a, int b) {
    if(b == 0) {
        return a;
    } else {
        return 1 + penjumlahan(a, b-1);
    }
}

int main() {
    int a, b;
    cout << "Masukkan angka pertama! : ";
    cin >> a;
    cout << "Masukkan angka kedua! : ";
    cin >> b;
    cout << a << "+" << b << "=" << penjumlahan(a, b);
    return 0;
}