#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float nilai1, nilai2, nilai3;
};

int main() {
    Mahasiswa mhs;
    float rataRata, ipk;

    // Meminta input data mahasiswa
    cout << "Masukkan Nama: ";
    cin >> mhs.nama;

    cout << "Masukkan NIM: ";
    cin >> mhs.nim;

    // Meminta input tiga nilai mata kuliah
    cout << "Masukkan nilai mata kuliah 1: ";
    cin >> mhs.nilai1;

    cout << "Masukkan nilai mata kuliah 2: ";
    cin >> mhs.nilai2;

    cout << "Masukkan nilai mata kuliah 3: ";
    cin >> mhs.nilai3;

    // Menghitung rata-rata nilai dan IPK
    rataRata = (mhs.nilai1 + mhs.nilai2 + mhs.nilai3) / 3;
    ipk = rataRata / 25;  // Misalkan skala nilai 0-100 dikonversi ke IPK 0-4

    // Menampilkan data mahasiswa dan IPK
    cout << "\nData Mahasiswa:" << endl;
    cout << "Nama: " << mhs.nama << endl;
    cout << "NIM: " << mhs.nim << endl;
    cout << "Rata-rata nilai: " << rataRata << endl;
    cout << "IPK: " << ipk << endl;

    return 0;
}