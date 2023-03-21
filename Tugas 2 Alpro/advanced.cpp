#include <iostream>
using namespace std;

int max (int a, int b);
int min (int a, int b);
int maxArray(int arr[], int size);
int minArray(int arr[], int size);
bool isEven(int a);
bool isOdd(int b);
bool isFactor(int a, int b);
int sumEven(int arr[], int size);
int sumOdd(int arr[], int size);
int inputArr(int arr[], int size); //buat fungsi input array
void outputArr(int arr[], int size); //buat fungsi output array

int main() {
    int num, a, b, size;
    int arr[99];
    awal:
    cout << "== Selamat datang di program ANGKA ==" << endl;
    cout << "Silakan pilih 1 dari pilihan di bawah ini" << endl;
    cout << "================================================================" << endl;
    cout << "1. Mencari nilai lebih besar" << endl;
    cout << "2. Mencari nilai lebih kecil" << endl;
    cout << "3. Mencari nilai paling besar" << endl;
    cout << "4. Mencari nilai paling kecil" << endl;
    cout << "5. Apakah bilangan ini genap?" << endl;
    cout << "6. Apakah bilangan ini ganjil?" << endl;
    cout << "7. Apakah bilangan ini adalah faktor dari bilangan itu?" << endl;
    cout << "8. Jumlah dari bilangan genap" << endl;
    cout << "9. Jumlah dari bilangan ganjil" << endl;
    cout << "================================================================" << endl;
    cout << "Pilihanmu : "; cin >> num;
    cout << "================================================================" << endl;
    switch (num)
    {
    case 1: //max
        cout << "Masukkan angka pertama : "; 
        cin >> a;
        cout << "Masukkan angka kedua : "; 
        cin >> b;
        cout << "\nNilai yang lebih besar adalah : " << max(a, b);
        cout << endl;
        break;
    case 2: //min
        cout << "Masukkan angka pertama : "; 
        cin >> a;
        cout << "Masukkan angka kedua : "; 
        cin >> b;
        cout << "\nNilai yang lebih kecil adalah : " << min(a, b);
        cout << endl;
        break;
    case 3: //maxArr
        cout << "Masukkan jumlah angka yang ingin dimasukkan : ";
        cin >> size;
        cout << "Masukkan angka-angkamu!"<< endl;
        for (int i = 0; i < size; i++){
            inputArr(arr, i);
        }
        cout << "Angkamu dalam array : ";
        outputArr(arr, size);
        cout << "\nNilai paling besar adalah : " << maxArray(arr, size);
        cout << endl;
        break;
    case 4: //minArr
        cout << "Masukkan jumlah angka yang ingin dimasukkan : ";
        cin >> size;
        cout << "Masukkan angka-angkamu! " << endl;
        for (int i = 0; i < size; i++){
            inputArr(arr, i);
        }
        cout << "\nAngkamu dalam array : ";
        outputArr(arr, size);
        cout << "\nNilai paling kecil adalah : " << minArray(arr, size);
        cout << endl;
        break;
    case 5: //isEven
        cout << "Masukkan sebuah angka! ";
        cin >> a;
        cout << "Apakah ini bilangan genap? ";
        cout << boolalpha << isEven(a);
        cout << endl;
        break;
    case 6: //isOdd
        cout << "Masukkan sebuah angka! ";
        cin >> a;
        cout << "Apakah ini bilangan ganjil? ";
        cout << boolalpha << isOdd(a);
        cout << endl;
        break;
    case 7: //isFactor
        cout << "Masukkan sebuah angka! ";
        cin >> a;
        cout << "Masukkan angka yang menurutmu adalah faktor dari bilangan pertama ";
        cin >> b;
        cout << "Bilangan " << b << " adalah faktor dari bilangan " << a << "?";
        cout << boolalpha << isFactor;
        cout << endl;
        break;
    case 8: //sumEven
        cout << "Masukkan jumlah angka yang ingin dimasukkan : ";
        cin >> size;
        cout << "Masukkan angka-angkamu! " << endl;
        for (int i = 0; i < size; i++){
            inputArr(arr, i);
        }
        cout << "Angkamu dalam array : ";
        outputArr(arr, size);
        cout << "\nJumlah dari bilangan genap yang diinput adalah : ";
        cout << sumEven(arr, size);
        cout << endl;
        break;
    case 9: //sumOdd
        cout << "Masukkan jumlah angka yang ingin dimasukkan : ";
        cin >> size;
        cout << "Masukkan angka-angkamu! " << endl;
        for (int i = 0; i < size; i++){
            inputArr(arr, i);
        }
        cout << "Angkamu dalam array : ";
        outputArr(arr, size);
        cout << "\nJumlah dari bilangan ganjil yang diinput adalah : ";
        cout << sumOdd(arr, size);
        cout << endl;
        break;
    default:
        cout << "Inputmu tidak terdaftar di program ini, silakan coba ulang..." << endl;
        break;
    }
    cout << "================================================================" << endl;
    char ulang;
    cout << "Ulang program? (Y/T) ";
    cin >> ulang;
    if (ulang == 'y' || ulang == 'Y') {
        goto awal;
    } else {
        cout << "TENGS :)";
        return 0;
    }
}

int max (int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int min (int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int maxArray(int arr[], int size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } else {
            max = max;
        }
    }
    return max;
}

int minArray(int arr[], int size) {
    int min = 9999;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        } else {
            min = min;
        }
    }
    return min;
}

bool isEven(int a) {
    return a % 2 == 0;
}

bool isOdd(int b) {
    return b % 2 == 0;
}

bool isFactor(int a, int b) {
    return a % b == 0;
}

int sumEven(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            if (i + 1 == size) {
                cout << arr[i] << endl;
            } else {
                cout << arr[i] << " + ";
            }
            sum += arr[i];
        } else {
            sum = sum;
        }
    }
    return sum;
}

int sumOdd(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 1) {
            if (i + 1 == size) {
                cout << arr[i] << endl;
            } else {
                cout << arr[i] << " + ";
            }
            sum += arr[i];
        } else {
            sum = sum;
        }
    }
    return sum;
}

int inputArr(int arr[], int size) {
    cout << "Isi array indeks ke - " << size << " : ";
    cin >> arr[size];
    return arr[size];
}

void outputArr(int arr[], int size) {
    cout << "[";
    for (int i = 0; i < size; i++) {
        if (i + 1 == size) {
            cout << arr[i] << "]";
        } else {
            cout << arr[i] << ", ";
        }
    }
}