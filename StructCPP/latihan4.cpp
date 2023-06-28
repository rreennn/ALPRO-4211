#include <iostream>
#include <cstring>
using namespace std;

struct Mahasiswa
{
    char NIM[14];
    string Nama;
    string Jurusan;
    int TahunLulus;
};

int main() {
    Mahasiswa Data[4];
    strcpy(Data[0].NIM, "A11.2020.01234");
    Data[0].Nama = "Andi";
    Data[0].Jurusan = "Broadcasting";
    Data[0].TahunLulus = 2023;

    strcpy(Data[1].NIM, "A11.2010.01234");
    Data[1].Nama = "Budi";
    Data[1].Jurusan = "Sistem Informasi";
    Data[1].TahunLulus = 2013;

    strcpy(Data[2].NIM, "A11.2000.01234");
    Data[2].Nama = "Ali";
    Data[2].Jurusan = "DKV";
    Data[2].TahunLulus = 2003;

    strcpy(Data[3].NIM, "A11.1990.01234");
    Data[3].Nama = "Siti";
    Data[3].Jurusan = "Kesehatan";
    Data[3].TahunLulus = 1993;

    cout << "==========================DATA MAHASISWA==========================" << endl;
    cout << "NIM \t\t" << " Nama \t" << " Tahun Lulus \t\t" << " Jurusan \t\t" << endl;
    for(int i = 0; i < 4; i++) {
        cout << Data[i].NIM << "\t" << Data[i].Nama << "\t\t" << Data[i].TahunLulus << "\t\t" << Data[i].Jurusan << endl;
    }
}
