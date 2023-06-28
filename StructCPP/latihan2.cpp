#include <iostream>
using namespace std;

struct Sepeda
{
    string Merk;
    string Type;
    int Tahun;
    int Harga;
};

int main() {
    struct Sepeda SepedaPolygon;
    SepedaPolygon.Merk = "Polygon";
    SepedaPolygon.Type = "Sepeda Gunung";
    SepedaPolygon.Tahun = 2013;
    SepedaPolygon.Harga = 2000000;
    cout << "Merk Sepeda : " << SepedaPolygon.Merk << endl;
    cout << "Type Sepeda : " << SepedaPolygon.Type << endl;
    cout << "Tahun Sepeda : " << SepedaPolygon.Tahun << endl;
    cout << "Harga Sepeda : " << SepedaPolygon.Harga << endl;
    return 0;
}
