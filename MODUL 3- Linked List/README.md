# <h1 align="center">Laporan Praktikum Modul 3 - Linked list</h1>
<p align="center">Meutya Azzahra Efendi - 2311102166</p>
<p align="center">IF - 11 - E</p>

## Dasar Teori

Linked list adalah struktur data yang paling dasar. Linked list terdiri atas sejumlah unsur-unsur dikelompokkan, atau terhubung, bersama-sama di suatu deret yang spesifik. Linked list bermanfaat di dalam memelihara koleksi-koleksi data, yang serupa dengan array yang sering digunakan. Secara rinci, linked list lebih efisien di dalam melaksanakan penyisipan dan penghapusan. Linked list juga menggunakan alokasi penyimpanan secara dinamis, yang merupakan penyimpanan yang dialokasikan pada run time . Karena di dalam banyak aplikasi, ukuran dari data itu tidak diketahui pada saat kompile, hal ini bisa merupakan suatu atribut yang baik juga. Setiap node akan berbentuk struct dan memiliki satu buah field bertipe struct yang sama.
1.	Single linked list
Dalam single linked list, setiap simpul memiliki pointer yang mengarah ke simpul berikutnya, sehingga elemen-elemen linked list hanya dapat diakses dalam satu arah, dari awal hingga akhir.

2.	Double linked list
Dalam double linked list setiap simpul memiliki dua pointer, satu mengarah ke simpul sebelumnya dan satu mengarah ke simpul berikutnya. Hal ini memungkinkan pergerakan maju dan mundur dalam linked list.

3.	Circular linked list
Circular linked list adalah bentuk khusus dari single atau double linked list dimana simpul terakhir mengarah Kembali ke simpul pertama sehingga membentuk lingkaran.

Berikut merupakan operasi-operasi yang dapat dilakukan pada linked list:
1.	Operasi penciptaan simpul pada linked list
Operasi penciptaan simpul pada linked list melibatkan pembuatan simpul pertama dari linked list, yang disebut sebagai \textit{head} atau \textid{node} pertama. Langkah-langkahnya meliputi memberikan nilai awal terhadap variabel pointer dan inisialisasi linked list. Jika kondisi linked list masih kosong, maka simpul baru akan diciptakan. Langkah-langkah ini merupakan tahap awal dalam membangun linked list sebelum melakukan operasi-operasi lain seperti penyisipan, pennghapusan, dan penelusuran.
2.	Operasi penghapusan pada linked list
Untuk menghancurkan simpul pada linked list, Langkah-langkahnya meliputi:
- Mencari simpul yang akan dihapus
-	Mengubah pointer simpul sebelum simpul yang akan dihapus
-	Menghapus simpul yang ditunjuk
Dalam melakukan penghapusan simpul, perlu diperhatikan bahwa simpul yang dihapus harus dihapus dari memori agar tidak menimbulkan memory leak. Oleh karena itu, setelah simpul dihapus, memori yang digunakan oleh simpul tersebut harus dikembalikam ke sistem operasi.
4.	Inisialisasi linked list
Langkah-langkahnya meliputi:
-	Membuat variabel pointer yang menunjuk ke simpul pertama (head) dengan nilai null
-	Menentukan tipe data yang akan disimpan dalam linked list
-	Menentukan jumlah elemen awal dalam linked list
-	Mengisi linked list dengan elemen-elemen awal jika ada
Dalam melakukan inisialisasi linked list, perlu diperhatikan bahwa variabel pointer harus diatur dengan nilai null agar tidak menunjuk ke alamt memori yang tidak valid. Selain itu, tipe data dan jumlah elemen awal dalam linked list juga harus ditentukan terlebih dahulu sebelum melakukan inisialisasi.
Setelah melakukan inisialisasi linked list, beberapa operasi yang harus dilakukan meliputi:
-	Pemeriksaan list kosong
-	Penyisipan simpul sebagai simpul pertama setelah simpul tertentu sebagai simpul terakhir
-	Menghapus simpul
-	Penelusuran linked list
Dengan melakukan operasi-operasi ini setelah inisialisasi linked list, anda dapat memastikan bahwa linked list telah diinisialisasi dengan benar dan siap untuk melakukan operasi-operasi lain seperti penyisipan, penghapusan, dan penelusuran.
Linked list memiliki kelebihan dan kekurangan seagai berikut:

-Kelebihan:
1.	Penambahan elemen tidak terbatas: linked list memungkinkan penambahan elemen tanpa perlu mengalokasikan memori secara berurutan, sehingga memungkinkan untuk diubah secara dinamis
2.	Penghapusan elemen lebih cepat: operasi penghapusan elemen pada linked list dapat dilakukan dengan mudah dan relative cepat

-Kekurangan:
1.	Hanya bisa diakses secara sekuensial: linked list memerlukan traversal dari awal hingga elemen yang diinginkan, sehingga akses data secara acak tidak dapat dilakukan secara efisien
2.	Memerlukan lebih banyak memori dalam jumlah yang besar: linked list memerlukan lebih banyak memori dibandingkan dengan array karena setiap elemen harus menyimpan alamat dari elemen berikutnya


   
## Guided 

### 1. Single Linked List

```C++
#include <iostream>
using namespace std;

/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node
struct Node
{
    // komponen/member
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
    Node *hapus, *bantu, *bantu2;
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
                bantu2 = bantu;
            }
            if (nomor == posisi)
            {
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
        delete hapus;
    }
}
// Ubah Depan
void ubahDepan(int data)
{
    if (isEmpty() == false)
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
    if (isEmpty() == false)
    {
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
    if (isEmpty() == false)
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
<img width="960" alt="Screenshot 2024-03-26 162915" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/ad997add-9eed-4baa-8626-30d76b825092">


Program yang diberikan adalah implementasi dari sebuah linked list non-circular menggunakan bahasa pemrograman C++. Linked list adalah struktur data linear di mana setiap elemen disimpan secara terpisah dalam objek yang disebut "node". Setiap node memiliki dua bagian utama: data yang menyimpan nilai elemen dan pointer yang menunjuk ke node berikutnya dalam urutan.

### 2. Double Linked List

```C++
#include <iostream>
using namespace std;


class Node {
    public:int data;
    Node* prev;
    Node* next;
};
class DoublyLinkedList {
        public:
        Node* head;
        Node* tail;
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
    }
    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } 
        else {
            tail = newNode;
        }
        head = newNode;
    }
    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } 
        else {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData) {
        Node* current = head;while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};


int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```

#### Output :
<img width="960" alt="Screenshot 2024-03-26 163731" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/5800afae-e7c8-4c22-8500-b27491a9a057">

<img width="960" alt="Screenshot 2024-03-26 163953" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/065acc5a-9c6d-48f1-b489-8ed9c665fe73">

<img width="227" alt="Screenshot 2024-03-26 164102" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/c778446d-8faa-4d1e-80e1-b11fb3f2b7d7">




Program yang diberikan adalah implementasi dari Doubly Linked List menggunakan C++. Doubly Linked List adalah struktur data linear di mana setiap elemen disimpan dalam sebuah node yang memiliki dua pointer, yaitu pointer ke node sebelumnya (prev) dan pointer ke node selanjutnya (next). Program ini memungkinkan pengguna untuk menambah, menghapus, memperbarui, menghapus semua data, dan menampilkan data dalam Doubly Linked List melalui antarmuka konsol.


## Unguided 

### 1. Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user. Lakukan operasi berikut:
####    a. Masukkan data sesuai urutan berikut. (Gunakan insert depan, belakang atau tengah). Data pertama yang dimasukkan adalah nama dan usia anda.
####    b. Hapus data Akechi
####    c. Tambahkan data berikut diantara John dan Jane : Futaba 18
####    d. Tambahkan data berikut diawal : Igor 20
####    e. Ubah data Michael menjadi : Reyn 18
####    f. Tampilkan seluruh data

```C++
//MEUTYA AZZAHRA EFENDI
//2311102166


#include <iostream>
#include <string>

using namespace std;

// Struktur Node
struct Node {
    string nama;
    int usia;
    Node* next;
};

// Kelas Linked List
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Fungsi untuk menyisipkan data di akhir daftar
    void sisipkan(string nama, int usia) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->usia = usia;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Fungsi untuk menampilkan semua data dalam daftar
    void tampilkan() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->nama << " " << temp->usia << endl;
            temp = temp->next;
        }
    }

    // Fungsi untuk menghapus node berdasarkan nama
    void hapusNode(string nama) {
        if (head == nullptr) {
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;

        // Jika node head sendiri menyimpan nama yang akan dihapus
        if (temp != nullptr && temp->nama == nama) {
            head = temp->next;
            delete temp;
            return;
        }

        // Mencari node yang akan dihapus
        while (temp != nullptr && temp->nama != nama) {
            prev = temp;
            temp = temp->next;
        }

        // Jika nama tidak ada dalam daftar
        if (temp == nullptr) {
            return;
        }

        // Memutuskan hubungan node dari linked list
        prev->next = temp->next;
        delete temp;
    }

    // Fungsi untuk menyisipkan node setelah node tertentu
    void sisipkanSetelah(string namaSebelum, string nama, int usia) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->usia = usia;

        Node* temp = head;
        while (temp != nullptr && temp->nama != namaSebelum) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << namaSebelum << " tidak ditemukan dalam daftar." << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Fungsi untuk menyisipkan node di awal daftar
    void sisipkanDiAwal(string nama, int usia) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->usia = usia;

        newNode->next = head;
        head = newNode;
    }

    // Fungsi untuk mengubah data berdasarkan nama
    void ubah(string nama, string namaBaru, int usiaBaru) {
        Node* temp = head;
        while (temp != nullptr && temp->nama != nama) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << nama << " tidak ditemukan dalam daftar." << endl;
            return;
        }

        temp->nama = namaBaru;
        temp->usia = usiaBaru;
    }
};

int main() {
    LinkedList daftar;

    // Memasukkan data
    daftar.sisipkan("Meutya", 19);
    daftar.sisipkan("John", 19);
    daftar.sisipkan("Jane", 20);
    daftar.sisipkan("Michael", 18);
    daftar.sisipkan("Yusuke", 19);
    daftar.sisipkan("Akechi", 20);
    daftar.sisipkan("Hoshino", 18);
    daftar.sisipkan("Karin", 18);

    char pilihan;
    string nama, namaBaru;
    int usia, usiaBaru;

    do {
        cout << "Menu:" << endl;
        cout << "a. Tampilkan semua data" << endl;
        cout << "b. Hapus data Akechi" << endl;
        cout << "c. Tambahkan data di antara John dan Jane" << endl;
        cout << "d. Tambahkan data di awal" << endl;
        cout << "e. Ubah data Michael" << endl;
        cout << "f. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 'a':
                break;
            case 'b':
                daftar.hapusNode("Akechi");
                cout << "Data Akechi telah dihapus." << endl;
                break;
            case 'c':
                cout << "Masukkan nama dan usia yang ingin ditambahkan: ";
                cin >> nama >> usia;
                daftar.sisipkanSetelah("John", nama, usia);
                break;
            case 'd':
                cout << "Masukkan nama dan usia yang ingin ditambahkan di awal: ";
                cin >> nama >> usia;
                daftar.sisipkanDiAwal(nama, usia);
                break;
            case 'e':
                cout << "Masukkan nama dan usia baru untuk Michael: ";
                cin >> namaBaru >> usiaBaru;
                daftar.ubah("Michael", namaBaru, usiaBaru);
                break;
            case 'f':
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }

        // Menampilkan data setelah setiap operasi
        cout << "Data mahasiswa:" << endl;
        daftar.tampilkan();
        cout << endl;

    } while (pilihan != 'f');

    return 0;
}
```

#### Output:
a. <img width="960" alt="Screenshot 2024-03-26 193547" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/18737f57-f2d5-491d-94d8-b943c8f87ea7">

b. <img width="960" alt="Screenshot 2024-03-26 193658" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/6348167b-1363-49ae-a594-976ba6cc2308">

c. <img width="960" alt="Screenshot 2024-03-26 193850" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/14d75ae6-c1e6-4d90-89f4-ee498eb60dd3">

d. <img width="960" alt="Screenshot 2024-03-26 193945" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/7dbccd32-342d-4e76-843f-3f6c22690526">

e. <img width="960" alt="Screenshot 2024-03-26 194028" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/5f3f3fc3-7b3b-45a1-8598-a5b006f8ea5e">

f. <img width="960" alt="Screenshot 2024-03-26 194106" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/978f78cc-9ebd-4146-b7eb-94733fcd4c0b">


Program yang diberikan adalah sebuah aplikasi sederhana untuk mengelola daftar mahasiswa menggunakan struktur data linked list. Program ini memungkinkan pengguna untuk melakukan beberapa operasi, seperti menampilkan semua data mahasiswa, menghapus data mahasiswa dengan nama tertentu, menambahkan data mahasiswa di antara dua mahasiswa tertentu, menambahkan data mahasiswa di awal daftar, serta mengubah data mahasiswa berdasarkan nama.


### 2. Soal mengenai Double Linked List Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / di urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama produk dan harga.
### Nama Produk Harga
### Originote 60.000
### Somethinc 150.000
### Skintific 100.000
### Wardah 50.000
### Hanasui 30.000

### Case:
### 1. Tambahkan produk Azarine dengan harga 65000 diantara Somethinc dan Skintific
### 2. Hapus produk wardah
### 3. Update produk Hanasui menjadi Cleora dengan harga 55.000
### 4. Tampilkan menu seperti dibawah ini

### Toko Skincare Purwokerto
### 1. Tambah Data
### 2. Hapus Data
### 3. Update Data
### 4. Tambah Data Urutan Tertentu
### 5. Hapus Data Urutan Tertentu
### 6. Hapus Seluruh Data
### 7. Tampilkan Data
### 8. Exit
### Pada menu 7, tampilan akhirnya akan menjadi seperti dibawah ini :

### Nama Produk Harga
### Originote 60.000
### Somethinc 150.000
### Azarine 65.000
### Skintific 100.000
### Cleora 55.000

```C++
//MEUTYA AZZAHRA EFENDI
//2311102166


#include <iostream>
using namespace std;

struct Node {
    string namaProduk;
    double harga;
    Node* prev;
    Node* next;
};

class LinkedList {
private:
    Node* head;
    Node* tail;
public:
    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void tambahData(string nama, double harga) {
        Node* newNode = new Node;
        newNode->namaProduk = nama;
        newNode->harga = harga;
        newNode->prev = NULL;
        newNode->next = NULL;

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void hapusData(string nama) {
        Node* current = head;
        while (current != NULL) {
            if (current->namaProduk == nama) {
                if (current == head && current == tail) {
                    head = tail = NULL;
                } else if (current == head) {
                    head = head->next;
                    head->prev = NULL;
                } else if (current == tail) {
                    tail = tail->prev;
                    tail->next = NULL;
                } else {
                    current->prev->next = current->next;
                    current->next->prev = current->prev;
                }
                delete current;
                return;
            }
            current = current->next;
        }
        cout << "Produk tidak ditemukan!" << endl;
    }

    void updateData(string nama, string newName, double newHarga) {
        Node* current = head;
        while (current != NULL) {
            if (current->namaProduk == nama) {
                current->namaProduk = newName;
                current->harga = newHarga;
                return;
            }
            current = current->next;
        }
        cout << "Produk tidak ditemukan!" << endl;
    }

    void tambahDataUrutanTertentu(string nama, double harga, string setelah) {
        Node* current = head;
        while (current != NULL) {
            if (current->namaProduk == setelah) {
                Node* newNode = new Node;
                newNode->namaProduk = nama;
                newNode->harga = harga;
                newNode->prev = current;
                newNode->next = current->next;
                if (current->next != NULL) {
                    current->next->prev = newNode;
                }
                current->next = newNode;
                return;
            }
            current = current->next;
        }
        cout << "Produk setelahnya tidak ditemukan!" << endl;
    }

    void hapusDataUrutanTertentu(string nama) {
        Node* current = head;
        while (current != NULL) {
            if (current->namaProduk == nama) {
                if (current == head) {
                    head = head->next;
                    head->prev = NULL;
                } else if (current == tail) {
                    tail = tail->prev;
                    tail->next = NULL;
                } else {
                    current->prev->next = current->next;
                    current->next->prev = current->prev;
                }
                delete current;
                return;
            }
            current = current->next;
        }
        cout << "Produk tidak ditemukan!" << endl;
    }

    void hapusSeluruhData() {
        Node* current = head;
        while (current != NULL) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = tail = NULL;
    }

    void tampilkanData() {
        Node* current = head;
        cout << "----------------------" << endl;
        cout << "Nama Produk  ||\t Harga " << endl;
        cout << "----------------------" << endl;
        while (current != NULL) {
            cout << current->namaProduk << "\t" << current->harga << endl;
            current = current->next;
        }
    }
};

int main() {
    LinkedList daftarProduk;
    daftarProduk.tambahData("Originote", 60000);
    daftarProduk.tambahData("Somethinc", 150000);
    daftarProduk.tambahData("Skintific", 100000);
    daftarProduk.tambahData("Wardah", 50000);
    daftarProduk.tambahData("Hanasui", 30000);

    int pilihan;
    string nama, newName, setelah;
    double harga, newHarga;

    do {
        cout << "--------------------------------" << endl;
        cout << " || Toko Skincare Purwokerto || " << endl;
        cout << "--------------------------------" << endl;

        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Nama Produk: ";
                cin >> nama;
                cout << "Harga: ";
                cin >> harga;
                daftarProduk.tambahData(nama, harga);
                daftarProduk.tampilkanData();
                break;
            case 2:
                cout << "Nama Produk yang akan dihapus: ";
                cin >> nama;
                daftarProduk.hapusData(nama);
                daftarProduk.tampilkanData();
                break;
            case 3:
                cout << "Nama Produk yang akan diupdate: ";
                cin >> nama;
                cout << "Nama Baru: ";
                cin >> newName;
                cout << "Harga Baru: ";
                cin >> newHarga;
                daftarProduk.updateData(nama, newName, newHarga);
                daftarProduk.tampilkanData();
                break;
            case 4:
                cout << "Nama Produk: ";
                cin >> nama;
                cout << "Harga: ";
                cin >> harga;
                cout << "Setelah Produk: ";
                cin >> setelah;
                daftarProduk.tambahDataUrutanTertentu(nama, harga, setelah);
                daftarProduk.tampilkanData();
                break;
            case 5:
                cout << "Nama Produk yang akan dihapus: ";
                cin >> nama;
                daftarProduk.hapusDataUrutanTertentu(nama);
                daftarProduk.tampilkanData();
                break;
            case 6:
                daftarProduk.hapusSeluruhData();
                cout << "Seluruh data telah dihapus." << endl;
                break;
            case 7:
                daftarProduk.tampilkanData();
                break;
            case 8:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 8);

    return 0;
}
```
#### Output:

##### Tampilan Awal:
<img width="960" alt="Screenshot 2024-03-26 195330" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/20dee375-6b3c-4ca2-812d-cbf70407be62">

##### 1. Tambahkan produk Azarine dengan harga 65000 diantara Somethinc dan Skintific:
<img width="960" alt="Screenshot 2024-03-26 195442" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/306d716c-f2f5-466d-b96c-72c25057d7db">

##### 2. Hapus produk wardah:
<img width="960" alt="Screenshot 2024-03-26 195507" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/6ba97de9-c5da-41d0-85e1-8130cd15bb04">)

##### 3, Update produk Hanasui menjadi Cleora dengan harga 55.000
<img width="960" alt="Screenshot 2024-03-26 195543" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/0e087fb1-f3ff-4b83-a260-76d0071fb947">

##### 4. Tampilan Akhir Menu
<img width="960" alt="Screenshot 2024-03-26 195606" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/83c0581e-e68c-4f9e-b928-463ead922a21">


Program C++ di atas adalah aplikasi manajemen data produk yang menggunakan struktur data linked list. Program ini memungkinkan pengguna untuk menambah, menghapus, mengupdate, serta menampilkan data produk. Pengguna dapat memilih operasi yang diinginkan melalui menu yang disediakan. Setiap operasi yang dilakukan akan segera memperbarui tampilan data produk. Program akan berjalan hingga pengguna memilih untuk keluar. Program yang diberikan adalah aplikasi manajemen produk untuk toko skincare di Purwokerto. Aplikasi ini menggunakan struktur data linked list untuk menyimpan informasi produk, termasuk nama produk dan harganya.


## Kesimpulan
Linked list merupakan metode yang efektif untuk mengelola data secara dinamis, memungkinkan penambahan, penghapusan, pembaruan, dan akses data tanpa memerlukan alokasi memori statis sebelumnya. Kelebihan utama linked list adalah kemampuannya menangani data dengan ukuran yang tidak pasti dan memperbolehkan operasi penyisipan atau penghapusan elemen dengan cepat. Meskipun demikian, penggunaan linked list juga memiliki kelemahan seperti penggunaan memori tambahan untuk menyimpan pointer dan kompleksitas akses yang tidak secepat array. Meski begitu, linked list tetap menjadi pilihan populer dalam implementasi struktur data dinamis di C++ karena fleksibilitas dan kemampuannya dalam menangani situasi di mana jumlah elemen tidak pasti.
Kelebihan linked list antara lain penambahan elemen tidak terbatas dan penghapusan elemen lebih cepat. Namun, linked list juga memiliki kekurangan, seperti hanya dapat diakses secara sekuensial dan memerlukan lebih banyak memori dalam jumlah yang besar.
Secara keseluruhan, linked list adalah struktur data yang fleksibel dan efisien dalam operasi penyisipan dan penghapusan, namun perlu diperhatikan karakteristik dan kebutuhan spesifik dari aplikasi saat memilih menggunakan linked list sebagai struktur data.

## Referensi
[1] "Struktur Data Linked List : Pengertian, Karakteristik, dan Jenis - jenisnya" Trivusi, 2022.

[2] Aryandi, Muhammad. "Belajar Struktur Data: Linked List" Medium, 2023.
