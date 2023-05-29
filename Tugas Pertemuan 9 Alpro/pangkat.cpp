#include <iostream>
using namespace std;

int pangkat(int a, int b) {
    if(b == 1) {
        return a;
    } else {
        return a * pangkat(a, b-1);
    }
}

int main() {
    int a, b;
    cout << "Masukkan angka yang akan dipangkatkan! : ";
    cin >> a;
    cout << "Masukkan angka pangkat! : ";
    cin >> b;
    cout << a << "^" << b << "=" << pangkat(a, b);
    return 0;
}