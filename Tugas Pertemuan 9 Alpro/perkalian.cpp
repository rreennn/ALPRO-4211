#include <iostream>
using namespace std;

int perkalian(int a, int b) {
    if(a == 0) {
        return a;
    } else {
        return b + perkalian(a-1, b);
    }
}

int main() {
    int a, b;
    cout << "Masukkan angka pertama! : ";
    cin >> a;
    cout << "Masukkan angka kedua! : ";
    cin >> b;
    cout << a << "x" << b << "=" << perkalian(a, b);
    return 0;
}