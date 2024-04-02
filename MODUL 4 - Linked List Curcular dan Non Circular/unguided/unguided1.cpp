//MEUTYA AZZAHRA EFENDI
//2311102166

#include <iostream>
#include <string>

using namespace std;

// Deklarasi Struct Node
struct Node {
    string nama;
    string nim;
    Node* next;
};

Node* head = nullptr;

// Buat Node Baru
Node* buatNode(string nama, string nim) {
    Node* baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = nullptr;
    return baru;
}

// Tambah Depan
void tambahDepan(string nama, string nim) {
    Node* baru = buatNode(nama, nim);
    if (head == nullptr) {
        head = baru;
    } else {
        baru->next = head;
        head = baru;
    }
    cout << "Data telah ditambahkan" << endl;
}

// Tambah Belakang
void tambahBelakang(string nama, string nim) {
    Node* baru = buatNode(nama, nim);
    if (head == nullptr) {
        head = baru;
    } else {
        Node* tail = head;
        while (tail->next != nullptr) {
            tail = tail->next;
        }
        tail->next = baru;
    }
    cout << "Data telah ditambahkan" << endl;
}

// Tambah Tengah
void tambahTengah(string nama, string nim, int posisi) {
    if (posisi <= 1) {
        tambahDepan(nama, nim);
        return;
    }
    Node* baru = buatNode(nama, nim);
    Node* bantu = head;
    for (int i = 1; i < posisi - 1 && bantu != nullptr; i++) {
        bantu = bantu->next;
    }
    if (bantu == nullptr) {
        cout << "Posisi tidak valid" << endl;
        return;
    }
    baru->next = bantu->next;
    bantu->next = baru;
    cout << "Data telah ditambahkan" << endl;
}

// Ubah Depan
void ubahDepan(string namaBaru, string nimBaru) {
    if (head == nullptr) {
        cout << "List masih kosong!" << endl;
        return;
    }
    head->nama = namaBaru;
    head->nim = nimBaru;
    cout << "Data depan berhasil diubah" << endl;
}

// Ubah Belakang
void ubahBelakang(string namaBaru, string nimBaru) {
    if (head == nullptr) {
        cout << "List masih kosong!" << endl;
        return;
    }
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }
    tail->nama = namaBaru;
    tail->nim = nimBaru;
    cout << "Data belakang berhasil diubah" << endl;
}

// Ubah Tengah
void ubahTengah(string namaBaru, string nimBaru, int posisi) {
    if (posisi <= 1) {
        ubahDepan(namaBaru, nimBaru);
        return;
    }
    Node* bantu = head;
    for (int i = 1; i < posisi && bantu != nullptr; i++) {
        bantu = bantu->next;
    }
    if (bantu == nullptr) {
        cout << "Posisi tidak valid" << endl;
        return;
    }
    bantu->nama = namaBaru;
    bantu->nim = nimBaru;
    cout << "Data pada posisi " << posisi << " berhasil diubah" << endl;
}

// Hapus Depan
void hapusDepan() {
    if (head == nullptr) {
        cout << "List masih kosong!" << endl;
        return;
    }
    Node* hapus = head;
    head = head->next;
    delete hapus;
    cout << "Data depan berhasil dihapus" << endl;
}

// Hapus Belakang
void hapusBelakang() {
    if (head == nullptr) {
        cout << "List masih kosong!" << endl;
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        cout << "Data belakang berhasil dihapus" << endl;
        return;
    }
    Node* tail = head;
    Node* prev = nullptr;
    while (tail->next != nullptr) {
        prev = tail;
        tail = tail->next;
    }
    prev->next = nullptr;
    delete tail;
    cout << "Data belakang berhasil dihapus" << endl;
}

// Hapus Tengah
void hapusTengah(int posisi) {
    if (posisi <= 1) {
        hapusDepan();
        return;
    }
    Node* bantu = head;
    Node* prev = nullptr;
    for (int i = 1; i < posisi && bantu != nullptr; i++) {
        prev = bantu;
        bantu = bantu->next;
    }
    if (bantu == nullptr) {
        cout << "Posisi tidak valid" << endl;
        return;
    }
    prev->next = bantu->next;
    delete bantu;
    cout << "Data pada posisi " << posisi << " berhasil dihapus" << endl;
}

// Hapus List
void hapusList() {
    while (head != nullptr) {
        Node* hapus = head;
        head = head->next;
        delete hapus;
    }
    cout << "Seluruh data berhasil dihapus" << endl;
}

// Tampilkan Data
void tampilkanData() {
    cout << "DATA MAHASISWA" << endl;
    cout << "NAMA\tNIM" << endl;
    Node* bantu = head;
    while (bantu != nullptr) {
        cout << bantu->nama << "\t" << bantu->nim << endl;
        bantu = bantu->next;
    }
}

int main() {
    int pilihan, posisi;
    string nama, nim, namaBaru, nimBaru;

    do {
        cout << "PROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampilkan Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Operasi : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "\n-Tambah Depan-" << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                tambahDepan(nama, nim);
                break;
            case 2:
                cout << "\n-Tambah Belakang-" << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                tambahBelakang(nama, nim);
                break;
            case 3:
                cout << "\n-Tambah Tengah-" << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                tambahTengah(nama, nim, posisi);
                break;
            case 4:
                cout << "\n-Ubah Depan-" << endl;
                cout << "Masukkan Nama Baru : ";
                cin >> namaBaru;
                cout << "Masukkan NIM Baru : ";
                cin >> nimBaru;
                ubahDepan(namaBaru, nimBaru);
                break;
            case 5:
                cout << "\n-Ubah Belakang-" << endl;
                cout << "Masukkan Nama Baru : ";
                cin >> namaBaru;
                cout << "Masukkan NIM Baru : ";
                cin >> nimBaru;
                ubahBelakang(namaBaru, nimBaru);
                break;
            case 6:
                cout << "\n-Ubah Tengah-" << endl;
                cout << "Masukkan Nama Baru : ";
                cin >> namaBaru;
                cout << "Masukkan NIM Baru : ";
                cin >> nimBaru;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                ubahTengah(namaBaru, nimBaru, posisi);
                break;
            case 7:
                cout << "\n-Hapus Depan-" << endl;
                hapusDepan();
                break;
            case 8:
                cout << "\n-Hapus Belakang-" << endl;
                hapusBelakang();
                break;
            case 9:
                cout << "\n-Hapus Tengah-" << endl;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                hapusTengah(posisi);
                break;
            case 10:
                cout << "\n-Hapus List-" << endl;
                hapusList();
                break;
            case 11:
                cout << "\n-Tampilkan Data-" << endl;
                tampilkanData();
                break;
            case 0:
                cout << "Program berakhir." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
        cout << endl;
    } while (pilihan != 0);

    return 0;
}
