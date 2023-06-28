#include <iostream>
using namespace std;

struct Sepeda {
    string Merk;
    string Type;
    int Tahun;
    int Harga;
};

int main() {
    struct Sepeda Data;
    struct Sepeda *pData;
    pData = &Data;

    pData->Merk = "Polygon";
    pData->Type = "Sepeda Gunung";
    pData->Tahun = 2003;
    pData->Harga = 2000000;

    cout << "Data Sepeda" << endl;
    cout << "Merk: " << pData->Merk << endl;
    cout << "Type: " << pData->Type << endl;
    cout << "Tahun: " << pData->Tahun << endl;
    cout << "Harga: " << pData->Harga << endl;

    return 0;
}