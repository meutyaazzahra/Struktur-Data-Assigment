#include <iostream>
#include <string>
using namespace std;

// Deklarasi struct
struct pasien {
    string nama;
    int umur;
    string diagnosa;
};

int main(){
    // Deklarasi array dari struct pasien
    const int jumlah_pasien = 3;
    pasien pasien[jumlah_pasien];

    // Mengisi nilai anggota struct untuk setiap pasien
    pasien[0].nama = "Jennie";
    pasien[0].umur = 20;
    pasien[0].diagnosa = "kanker otak";

    pasien[1].nama = "Kai";
    pasien[1].umur = 21;
    pasien[1].diagnosa= "Tipes";

    pasien[2].nama = "Irene";
    pasien[2].umur = 22;
    pasien[2].diagnosa = "Pneunomia";

    // Menampilkan informasi setiap pasien
    for (int i=0; i < jumlah_pasien; i++){
        cout << "Pasien " << i+1 << ":" << endl;
        cout << "Nama: " << pasien[i].nama << endl;
        cout << "Umur: " << pasien[i].umur << endl;
        cout << "Diagnosa: " << pasien[i].diagnosa << endl;
        cout << endl;
    }
    return 0;
}