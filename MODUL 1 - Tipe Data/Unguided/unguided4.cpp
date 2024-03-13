#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    
    map<string, string> hobi;
    hobi["Meutya"] = "membaca";
    hobi["Azzahra"] = "menyanyi";
    hobi["Efendi"] = "menulis";
    hobi["Minji"] = "berkuda";

    // Menampilkan hobi seseorang berdasarkan namanya
    cout << "Hobi Meutya: " << hobi["Meutya"]  << endl;
    cout << "Hobi Azzahra: " << hobi["Azzahra"]  << endl;

    // Mengubah hobi seseorang
    hobi["Efendi"] = "memanah";

    // Menampilkan hobi efendi setelah berubah
    cout << "Hobi Efendi setelah berubah : " << hobi["Efendi"]  << endl;

    // Memeriksa apakah seseorang ada dalam map
    string nama;
    cout << "Masukkan nama untuk memeriksa hobinya: ";
    cin >> nama;

    // Menggunakan find() untuk mencari key dalam map
    if (hobi.find(nama) != hobi.end()) {
        cout << "hobi " << nama << ": " << hobi[nama]  << endl;
    } else {
        cout << "Hobi tidak ditemukan untuk " << nama << endl;
    }

    return 0;
}
