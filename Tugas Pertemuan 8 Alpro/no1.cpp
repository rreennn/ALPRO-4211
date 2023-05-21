#include <iostream>
using namespace std;

bool ganjil(int x) {
    int odd = x%2;
    return odd == 1;
}

void inputArr(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << "Masukkan bilangan ke-" << i+1 << " : ";
        cin >> arr[i];
    }
}

void outputArr(int arr[], int size) {
    cout << "[";
    for(int i = 0; i < size; i++) {
        if (i+1 == size) {
            cout << arr[i] << "]";
        } else {
            cout << arr[i] << ", ";
        }
    }
}

void minEven(int arr[], int size) {
    int min = 9999;
    int loc;
    for(int i = 0; i < size; i++) {
        if (!ganjil(arr[i]) && arr[i] < min) {
            min = arr[i];
            loc = i+1;
        }
    }
    if (min == 9999) {
        cout << "Tidak ada bilangan genap";
    } else {
        cout << "Bilangan genap terkecil adalah " << min << " yaitu bilangan ke-" << loc;
    }
}

int main() {
    int arr[99], size; 
    cout << "Masukkan jumlah angka pada array!" << endl;
    cin >> size;
    inputArr(arr, size);
    cout << "Array yang sudah diinput: " << endl;
    outputArr(arr, size);
    cout << endl;
    minEven(arr, size);
    cout << endl;

    return 0;
}
