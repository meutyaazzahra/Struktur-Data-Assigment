#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    string nama;
    int nim;
    string prodi;

public:
    // Konstruktor untuk inisialisasi objek Student
    Mahasiswa(string n, int a, string m) {
        nama = n;
        nim = a;
        prodi = m;
    }

    // Fungsi untuk menampilkan informasi mahasiswa
    void menampilkanInformasi() {
        cout << "Nama: " << nama << endl;
        cout << "Nim: " << nim << endl;
        cout << "Prodi: " << prodi << endl;
    }

    // Fungsi untuk mengubah jurusan mahasiswa
    void prodibaru(string prodibaru) {
        prodi = prodibaru;
    }
};

int main() {
    // Membuat objek dari class Student
    Mahasiswa Mahasiswa1("Meutya Azzahra Efendi", 166, "Informatic");

    // Menampilkan informasi mahasiswa
    cout << "mahasiswa 1 Info:" << endl;
    Mahasiswa1.menampilkanInformasi();

    // Mengubah jurusan mahasiswa
    Mahasiswa1.prodibaru("Pendidikan dokter");

    // Menampilkan informasi mahasiswa setelah perubahan
    cout << "\nSetelah pindah prodi:" << endl;
    Mahasiswa1.menampilkanInformasi();

    return 0;
}
