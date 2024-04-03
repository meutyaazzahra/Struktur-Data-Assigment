# <h1 align="center">Laporan Praktikum Modul 4 - Linked List Circular dan Non Circular</h1>
<p align="center">Meutya Azzahra Efendi - 2311102166</p>
<p align="center">IF - 11 - E</p>

## Dasar Teori

### Circular Linked List
Sebuah circularly linked list memiliki jenis node yang sama dengan sebuah singly linked list. Artinya, setiap node dalam circularly linked list memiliki pointer next dan nilai elemen. Namun, daripada memiliki kepala (head) atau ekor (tail), node-node dari circularly linked list dihubungkan menjadi sebuah siklus. Jika kita menelusuri node-node dari circularly linked list dari mana pun dengan mengikuti pointer next, pada akhirnya kita akan mengunjungi semua node dan kembali ke node dari mana kita mulai. Meskipun circularly linked list tidak memiliki awal atau akhir, kita tetap memerlukan beberapa node yang ditandai sebagai node khusus, yang kita sebut sebagai kursor. Node kursor memungkinkan kita untuk memiliki tempat awal jika kita perlu menelusuri circularly linked list. Ada dua posisi yang penting dalam sebuah circular list. Yang pertama adalah elemen yang dirujuk oleh kursor, yang disebut sebagai belakang, dan elemen yang segera mengikuti ini dalam urutan siklik, yang disebut sebagai depan. Meskipun mungkin terdengar aneh untuk memikirkan sebuah circular list memiliki depan dan belakang, perhatikan bahwa, jika kita memotong link antara node yang dirujuk oleh kursor dan penerus langsung dari node ini, hasilnya adalah sebuah singly linked list dari node depan hingga node belakang.[1]
![Screenshot 2024-04-01 121335](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/86c4860a-d226-4ee9-a708-9ff4d5964313)

## Definisi fungsi-fungsi berikut untuk linked list circular:
-Front():Kembalikan elemen yang dirujuk oleh kursor; kesalahan terjadi jika daftar kosong.
-Back():Kembalikan elemen yang segera setelah kursor; sebuah kesalahan akan terjadi jika daftar kosong.
-Advance():Maju kursor ke simpul berikutnya dalam daftar.
-Add(e):Masukkan simpul baru dengan elemen e segera setelah kursor; jika daftar kosong, maka simpul ini menjadi kursor dan penunjuk berikutnya menunjuk pada dirinya sendiri.
-Remove(): Hapus simpul yang langsung setelah kursor (bukan kursor itu sendiri, kecuali jika itu adalah satu-satunya simpul); jika daftar menjadi kosong, kursor diatur menjadi null.

## Menghitung Node dalam Circular Linked List
![Screenshot 2024-04-03 115131](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/15f3dc7a-25e4-4b5a-bcf6-d470c4f2d0d9)
Circular Linked List dapat diakses melalui node yang ditandai kepala (head). Untuk menghitung node, list harus dilalui dari node yang ditandai head dengan bantuann arus node dummy dan menghentikan perhtungan saat arus mencapai node awal. Jika daftar kosong, head akan menjadi NULL dan dalam hal ini set count = 0. Jika tidak, setel pointer saat ini ke node pertama san terus menghitung sampai pointer saat ini mencapat node awal.

### Non Circular Linked List





   
## Guided 

### 1. Linked List Circular
```C++
#include <iostream>

using namespace std;

/// PROGRAM SINGLE LINKED LIST CIRCULAR

// Deklarasi Struct Node
struct Node
{
    string data;
    Node *next;
};

Node *head, *tail, *baru, *bantu, *hapus;

void init()
{
    head = NULL;
    tail = head;
}

// Pengecekan
int isEmpty()
{
    if (head == NULL)
        return 1; // true
    else
        return 0; // false
}

// Buat Node Baru
void buatNode(string data)
{
    baru = new Node;
    baru->data = data;
    baru->next = NULL;
}

// Hitung List
int hitungList()
{
    bantu = head;
    int jumlah = 0;

    while (bantu != NULL)
    {
        jumlah++;
        bantu = bantu->next;
    }

    return jumlah;
}

// Tambah Depan
void insertDepan(string data)
{
    // Buat Node baru
    buatNode(data);

    if (isEmpty() == 1)
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        while (tail->next != head)
        {
            tail = tail->next;
        }
        baru->next = head;
        head = baru;
        tail->next = head;
    }
}

// Tambah Belakang
void insertBelakang(string data)
{
    // Buat Node baru
    buatNode(data);

    if (isEmpty() == 1)
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        while (tail->next != head)
        {
            tail = tail->next;
        }

        tail->next = baru;
        baru->next = head;
    }
}

// Tambah Tengah
void insertTengah(string data, int posisi)
{
    if (isEmpty() == 1)
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        baru->data = data;
        // transversing
        int nomor = 1;
        bantu = head;
        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// Hapus Depan
void hapusDepan()
{
    if (isEmpty() == 0)
    {
        hapus = head;
        tail = head;

        if (hapus->next == head)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            delete hapus;

            while (tail->next != hapus)
            {
                tail = tail->next;
            }
            head = head->next;
            tail->next = head;
            hapus->next = NULL;

            delete hapus;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Hapus Belakang
void hapusBelakang()
{
    if (isEmpty() == 0)
    {
        hapus = head;
        tail = head;
        if (hapus->next == head)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            delete hapus;
            while (hapus->next != head)
            {
                hapus = hapus->next;
            }
            while (tail->next != hapus)
            {
                tail = tail->next;
            }
            tail->next = head;
            hapus->next = NULL;

            delete hapus;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Tengah
void hapusTengah(int posisi)
{
    if (isEmpty() == 0)
    {
        // transversing
        int nomor = 1;
        bantu = head;

        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }
        hapus = bantu->next;
        bantu->next = hapus->next;

        delete hapus;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus List
void clearList()
{
    if (head != NULL)
    {
        hapus = head->next;

        while (hapus != head)
        {
            bantu = hapus->next;
            delete hapus;
            hapus = bantu;
        }
        delete head;
        head = NULL;
    }
    cout << "List berhasil terhapus!" << endl;
}

// Tampilkan List
void tampil()
{
    if (isEmpty() == 0)
    {
        tail = head;
        do
        {
            cout << tail->data << ends;
            tail = tail->next;
        } while (tail != head);
        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
int main()
{
    init();
    insertDepan("Ayam");
    tampil();
    insertDepan("Bebek");
    tampil();
    insertBelakang("Cicak");
    tampil();
    insertBelakang("Domba");
    tampil();
    hapusBelakang();
    tampil();
    hapusDepan();
    tampil();
    insertTengah("Sapi", 2);
    tampil();
    hapusTengah(2);
    tampil();

    return 0;
}
```

#### Output :
![Screenshot 2024-04-03 094906](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/9ee11e9d-391d-494b-82f2-de1ce6c2cb09)

### Deskripsi Program:
Program ini adalah implementasi dari circular linked list dalam bahasa C++. Program ini memiliki fungsi-fungsi dasar untuk memanipulasi linked list seperti menambahkan elemen di depan, di belakang, atau di tengah, menghapus elemen di depan, di belakang, atau di tengah, menghitung jumlah elemen dalam linked list, dan menampilkan isi linked list. Struktur data linked list ini diatur sedemikian rupa sehingga setelah elemen terakhir ada, ia akan menunjuk kembali ke elemen pertama, membentuk lingkaran. Program dilengkapi dengan fungsi-fungsi untuk menginisialisasi linked list, memeriksa apakah linked list kosong, dan membersihkan linked list dari elemen-elemen yang ada. Pada bagian `main()`, terdapat contoh penggunaan fungsi-fungsi tersebut untuk menambah, menghapus, dan menampilkan elemen-elemen dalam linked list.

### 2. Linked List Non Circular
```C++
#include <iostream>
using namespace std;
/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node
struct Node
{
    int data;
    Node *next;
};
Node *head;
Node *tail;

// Inisialisasi Node
void init()
{
    head = NULL;
    tail = NULL;
}

// Pengecekan
bool isEmpty()
{
    if (head == NULL)
        return true;
    else
        return false;
}

// Tambah Depan
void insertDepan(int nilai)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
}

// Tambah Belakang
void insertBelakang(int nilai)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
}

// Hitung Jumlah List
int hitungList()
{
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while (hitung != NULL)
    {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}

// Tambah Tengah
void insertTengah(int data, int posisi)
{
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;

        // tranversing
        bantu = head;
        int nomor = 1;
        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }

        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// Hapus Depan
void hapusDepan()
{
    Node *hapus;
    if (isEmpty() == false)
    {
        if (head->next != NULL)
        {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}

// Hapus Belakang
void hapusBelakang()
{
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false)
    {
        if (head != tail)
        {
            hapus = tail;
            bantu = head;
            while (bantu->next != tail)
            {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}

// Hapus Tengah
void hapusTengah(int posisi)
{
    Node *bantu, *hapus, *sebelum;
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        int nomor = 1;
        bantu = head;
        while (nomor <= posisi)
        {
            if (nomor == posisi - 1)
            {
                sebelum = bantu;
            }
            if (nomor == posisi)
            {
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        sebelum->next = bantu;
        delete hapus;
    }
}

// Ubah Depan
void ubahDepan(int data)
{
    if (isEmpty() == 0)
    {
        head->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Tengah
void ubahTengah(int data, int posisi)
{
    Node *bantu;
    if (isEmpty() == 0)
    {
        if (posisi < 1 || posisi > hitungList())
        {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (posisi == 1)
        {
        }
        else
        {
            cout << "Posisi bukan posisi tengah" << endl;

            bantu = head;
            int nomor = 1;
            while (nomor < posisi)
            {
                bantu = bantu->next;
                nomor++;
            }
            bantu->data = data;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Belakang
void ubahBelakang(int data)
{
    if (isEmpty() == 0)
    {
        tail->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus List
void clearList()
{
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL)
    {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}

// Tampilkan List
void tampil()
{
    Node *bantu;
    bantu = head;
    if (isEmpty() == false)
    {
        while (bantu != NULL)
        {
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

int main()
{
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7, 2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();
    return 0;
}
```
#### Output :
![Screenshot 2024-04-03 100622](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/2eeef502-5072-4993-a964-7a3ec0811460)

### Deskripsi Program:
Program ini adalah implementasi dari linked list non-circular dalam bahasa C++. Linked list ini terdiri dari serangkaian simpul yang saling terhubung, di mana setiap simpul memiliki data integer dan pointer ke simpul berikutnya dalam urutan. Program ini menyediakan fungsi-fungsi dasar untuk memanipulasi linked list seperti menambah, menghapus, dan mengubah elemen-elemen dalam linked list. Fungsi-fungsi ini mencakup penambahan elemen di depan dan di belakang, penambahan elemen di posisi tengah, penghapusan elemen di depan, di belakang, dan di posisi tengah, serta pengubahan nilai elemen di depan, di belakang, dan di posisi tengah. Pada bagian `main()`, terdapat contoh penggunaan fungsi-fungsi tersebut untuk melakukan operasi-operasi tersebut pada linked list.


## Unguided 
Buatlah program menu Linked List Non Circular untuk menyimpan Nama dan NIM Mahasiswa, dengan menggunakan input dari user.

### 1. Buatlah menu untuk menambahkan, mengubah, menghapus, dan melihat Nama dan NIM Mahasiswa.
```C++
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
```

#### Output:
a. Tampilan Menu:
![Screenshot 2024-04-03 102402](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/ccd51665-fe63-4dd6-bf21-74f85d09d01b)

b. Tampilan Operasi Tambah:
![Screenshot 2024-04-03 104945](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/b384d095-22f4-4b19-bbf4-83c38f8b35f1)
![Screenshot 2024-04-03 105020](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/974c306d-59cb-46b1-a6d3-b33bef7b2df3)
![Screenshot 2024-04-03 105051](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/4ac66fbe-5eb0-49a4-ba0b-7667f7f34362)
![Screenshot 2024-04-03 105125](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/bfffec38-8810-4bfb-97d4-c369fc36ac5a)
![Screenshot 2024-04-03 105158](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/fac64b23-000d-422f-805a-9c5053758a5c)
![Screenshot 2024-04-03 105248](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/5944dec6-89ba-425f-a1de-fc9f20783890)

c. Tampilan Operasi Ubah:
![Screenshot 2024-04-03 105324](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/496490ab-a44c-45e0-9283-2820199282e5)
![Screenshot 2024-04-03 105405](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/1538f539-da6f-480b-86ab-754525c6d008)
![Screenshot 2024-04-03 105527](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/30d1230c-b343-48c7-9156-ebbb68c18515)

d. Tampilan Operasi Hapus:
![Screenshot 2024-04-03 105546](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/d5fe4703-f731-4f21-93ac-c70f3d7e2ebb)
![Screenshot 2024-04-03 105602](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/9602bd39-e59d-493a-815c-2fae07c36c1e)
![Screenshot 2024-04-03 105622](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/915a8d58-7267-4499-a0c7-c50f61f92649)

e. Tampilan Operasi Tampil Data
![Screenshot 2024-04-03 105642](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/6db8d055-570f-438d-8f59-b2eb4a14d546)

### 2. Setelah membuat menu, masukkan data sesuai urutan berikut, lalu tampilkan data yang telah dimasukkan. (Gunakan insert depan, belakang, atau tengah)
![image](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/a75d98dc-c245-4dff-920c-28226ce5f432)

#### Output:
![Screenshot 2024-04-03 111147](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/816fb09e-2608-4743-abb3-a7f9357511ec)
![Screenshot 2024-04-03 111205](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/d16a10c6-dc94-4810-96db-440cca928b1f)
![Screenshot 2024-04-03 111223](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/43cc1b72-7cc4-4898-877a-c09fe1a7c6c4)
![Screenshot 2024-04-03 111258](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/7b3960ed-d4e2-432c-9eab-c1cf0f5df190)
![Screenshot 2024-04-03 111324](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/f424d478-dcd1-408f-9a57-bda2190b5323)
![Screenshot 2024-04-03 111352](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/a351ae65-086c-4f04-b5e7-07df0bb93449)
![Screenshot 2024-04-03 111411](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/b373d5cb-ea3d-4d3f-a9a2-9b6150ee6fae)
![Screenshot 2024-04-03 111434](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/0a0ad20b-45c8-4b7b-ae3f-a5fda5704181)
![Screenshot 2024-04-03 111452](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/287efec6-3124-461c-bb9d-e8c6c6bc4a7d)
![Screenshot 2024-04-03 111513](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/70bb4fe7-8754-49a6-82bf-597fcb37c64a)
![Screenshot 2024-04-03 111543](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/319aa8cd-e254-4ce2-9dfd-36481c99e82c)

### 3. Lakukan perintah berikut:
a. Tambahkan data berikut diantara Farrel dan Dennis:
   Wati  2330004
![image](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/dfc85df9-adc1-42cd-a026-671ffadba30f)

b. Hapus data Dennis
![Screenshot 2024-04-03 112609](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/7c90aa0a-1a20-42b2-b172-49d44a99bdfb)

c. Tambahkan data berikut di awal:
   Owi  2330000
![Screenshot 2024-04-03 112702](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/2984c898-acdd-49f2-a903-eda9dd15a43d)

d. Tambahkan data berikut di akhir:
   Daavid 23300100
![Screenshot 2024-04-03 112740](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/b43fc24e-b924-4f1f-a9b0-8a12bd7f02d6)

e. Ubah data Udin menjadi data berikut:
   Idin  23300045
![Screenshot 2024-04-03 112909](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/ddf76e9d-f8c4-49ff-b66e-ec044f516b51)

f. Ubah data terakhir menjadi berikut:
   Lucy  233000101
![Screenshot 2024-04-03 113245](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/a35d0810-7815-48be-8028-76fca67dcd41)

g. Hapus data awal
![Screenshot 2024-04-03 113320](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/dc2b7ca7-1058-4fcc-a180-44493343238d)

h. Ubah data awal menjadi berikut:
   Bagas  2330002
![Screenshot 2024-04-03 113356](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/c47a5527-08cf-4261-ad9c-b601bb1597d3)

i. Hapus data akhir
![Screenshot 2024-04-03 113425](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/1c5df336-fb7e-4b11-b33a-052df04f8c53)

j. Tampilkan seluruh data
![Screenshot 2024-04-03 113449](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/8dd9e234-1168-4eb0-82f0-d642056603b9)

## Deskripsi Program
Program ini adalah implementasi dari linked list non-circular untuk menyimpan data mahasiswa. Setiap node dalam linked list ini berisi informasi tentang nama dan NIM seorang mahasiswa. Program ini menyediakan berbagai fungsi untuk melakukan operasi-operasi pada linked list, seperti menambahkan data di depan, di belakang, atau di tengah, mengubah data di depan, di belakang, atau di tengah, menghapus data di depan, di belakang, atau di tengah, menghapus seluruh data dalam linked list, serta menampilkan seluruh data yang tersimpan dalam linked list. Pengguna dapat memilih operasi yang ingin dilakukan melalui menu yang disediakan. Program akan terus berjalan dan menunggu input pengguna sampai pengguna memilih untuk keluar (pilihan 0).

## Kesimpulan
Linked list merupakan metode yang efektif untuk mengelola data secara dinamis, memungkinkan penambahan, penghapusan, pembaruan, dan akses data tanpa memerlukan alokasi memori statis sebelumnya. Kelebihan utama linked list adalah kemampuannya menangani data dengan ukuran yang tidak pasti dan memperbolehkan operasi penyisipan atau penghapusan elemen dengan cepat. Meskipun demikian, penggunaan linked list juga memiliki kelemahan seperti penggunaan memori tambahan untuk menyimpan pointer dan kompleksitas akses yang tidak secepat array. Meski begitu, linked list tetap menjadi pilihan populer dalam implementasi struktur data dinamis di C++ karena fleksibilitas dan kemampuannya dalam menangani situasi di mana jumlah elemen tidak pasti.
Kelebihan linked list antara lain penambahan elemen tidak terbatas dan penghapusan elemen lebih cepat. Namun, linked list juga memiliki kekurangan, seperti hanya dapat diakses secara sekuensial dan memerlukan lebih banyak memori dalam jumlah yang besar.
Secara keseluruhan, linked list adalah struktur data yang fleksibel dan efisien dalam operasi penyisipan dan penghapusan, namun perlu diperhatikan karakteristik dan kebutuhan spesifik dari aplikasi saat memilih menggunakan linked list sebagai struktur data.

## Referensi
[1] 

[2] 
