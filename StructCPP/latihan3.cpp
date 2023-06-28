#include <iostream>
using namespace std;
#define PHI 3.14;

struct HitungBenda
{
    public:
    int p, l;
    float r, t;
    int LuasPersegiPanjang(int p, int l);
    float LuasLingkaran(float r);
    float VolumeKerucut(float t, float LuasLingkaran);
    float VolumeBola(float r);
};

int HitungBenda::LuasPersegiPanjang(int p, int l) {
    int luas = p * l;
    return luas;
}

float HitungBenda::LuasLingkaran(float r) {
    float luas = r * r * PHI;
    return luas;
}

float HitungBenda::VolumeKerucut(float t, float LuasLingkaran) {
    float volume = LuasLingkaran * t;
    return volume;
}

float HitungBenda::VolumeBola(float r) {
    float volume = 4/3 * r * r * r * PHI;
    return volume;
}

int main() {
    typedef struct HitungBenda Luas;
    Luas PersegiPanjang;
    PersegiPanjang.p = 13;
    PersegiPanjang.l = 5;
    cout << "Luas Persegi Panjang : " << PersegiPanjang.LuasPersegiPanjang(PersegiPanjang.p, PersegiPanjang.l) << endl;
    Luas Lingkaran;
    Lingkaran.r = 16;
    cout << "Luas Lingkaran : " << Lingkaran.LuasLingkaran(Lingkaran.r) << endl;
    typedef struct HitungBenda Volume;
    Volume Kerucut;
    Kerucut.r = 12;
    Kerucut.t = 7;
    cout << "Volume Kerucut : " << Kerucut.VolumeKerucut(Kerucut.t, Kerucut.LuasLingkaran(Kerucut.r)) << endl;
    Volume Bola;
    Bola.r = 4;
    cout << "Volume Bola : " << Bola.VolumeBola(Bola.r) << endl;
    cout << endl;
}