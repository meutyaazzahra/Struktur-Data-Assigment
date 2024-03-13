#include <iostream>
using namespace std;

// Fungsi untuk menjumlahkan dua buah bilangan
int tambah166(int a, int b){
    return a+b;
}

// Fungsi untuk mengalikan dua buah bilangan
float kali166(float a, float b){
    return a*b;
}

int main(){
    int angka1 = 23;
    int angka2 = 18;
    float bil1 = 3;
    float bil2 = 66;

    // Memanggil fungsi penjumlahan
    int hasil_tambah166 = tambah166(angka1, angka2);
    cout << "Hasil Penjumlahan: " << hasil_tambah166 << endl;

    // Memanggil fungsi perkalian
    float hasil_kali166 = kali166(bil1, bil2);
    cout << "Hasil Perkalian:" << hasil_kali166 << endl;

    return 0;
}