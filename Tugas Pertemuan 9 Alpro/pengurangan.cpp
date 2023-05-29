#include <iostream>
using namespace std;

int pengurangan(int a, int b) {
    if(b==0) {
        return a;
    } else {
        return pengurangan(a, b-1) - 1;
    }
}

int main() {
    int a, b;
    cout << "Masukkan angka pertama! :";
    cin >> a;
    cout << "Masukkan angka kedua! :";
    cin >> b;
    cout << a << "-" << b << "=" << pengurangan(a, b);
}