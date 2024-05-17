# <h1 align="center">Laporan Praktikum Modul 6 - STACK</h1>
<p align="center">Meutya Azzahra Efendi - 2311102166</p>
<p align="center">IF - 11 - E</p>

## Dasar Teori

### Pengertian Queue
 Queue (antrian) adalah struktur data yang digunakan untuk menyimpan data. Dalam antrian, urutan kedatangan data adalah penting. Secara umum, antrian adalah barisan orang atau benda yang menunggu untuk dilayani secara berurutan mulai dari awal barisan atau urutan tersebut. 

 Definisi antrian adalah daftar berurutan yang dimana penyisipan dilakukan di satu ujung (belakang) dan penghapusan dilakukan di ujung lain (depan). Elemen pertama yang dimasukkan adalah yang pertama dihapus. Oleh karena itu, ini disebut dafttar First in First out (FIFO) atau Last in Last Out (LILO).

 Mirip dengan stack, nama khusus diberikan untuk dua perubahan yang dapat dilakukan pada antrian. Ketika sebuah elemen dimasukkan ke dalam antrian, konsepnya disebut EnQueue dan Ketika sebuah elemen dikeluarkan dari antrian, konsepnya disebut DeQueue.

 DeQueue antrian kosong disebut underflow dan EnQueuing elemen dalam antriam penuh disebut overflow. Umumnya, kita memperlqkukan mereka sebagai pengecualian. Sebagai contoh, pertimbangan snapshot dari antrian.

 ![Screenshot 2024-05-17 200854](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/79907ecf-2a84-4350-82d9-0150cc41fa85)
 
### Bagaimana Queue Digunakan
Konsep antrian digunakan dengam mengamati di loket reservasi. Ketika kita memasuki garis kita berdiri di ujung garis dan orang yang berada di depan garis adalah orang yang akan dilayani selanjutnya. Dia akan keluar dari antrian dan dilayani.

Konsep antrian digunakan dengam mengamati di loket reservasi. Ketika kita memasuki garis kita berdiri di ujung garis dan orang yang berada di depan garis adalah orang yang akan dilayani selanjutnya. Dia akan keluar dari antrian dan dilayani.
Ketika ini terjadi, orang berikutnya akan data di garis depan, akan keluar dari antrian dan akan dilayani. Karena setiap orang di ujung antrean terus keluar dari antrean, kita bergerak menuju ujung antrean. Akhirnya kita akan mencapai kepada antrean dan kita akan keluar dari antrean dan dilayani. Perilaku ini sangat berguna dalam kasus di mana ada kebutuhan untuk menjaga urutan kedatangan.

### Antrian ADT
Operasi berikut membuat antrean menjadi ADT. Penhyisipan dan penghapusan dalam antrean harus mengikuti skema FIFO. Utnuk mempermudah, kita asumsikan elemen-elemennya adalah bilangan bulat.
### Operasi antrian utama
-	EnQueue (int data) : menyisipkan ekemen di akhir antrean
-	IntQueue () : menghapus dan mengembalikan elemen du depan antrian
### Operasi antrian bantu
-	int Front() : mengembalikan elemen di depan tanpa menghapusnya 
-	int QueueSize() : mengembalikan jumlah elemen yang disimpan dalam antrian
-	int IsEmptyQueue : menunjukkan apakah tidak ada elemen yang disimpan dalam antrian atau tidak
### Aplikasi
Berikut adalah beberapa aplikasi yang menggunakan antrian
1.	Aplikasi Langsung
-	Sistem operasi menjadwalkan pekerjaan (dengan prioritas yang sama) dalam urutan kedatangan (misalnya, antrian cetak)
-	Simulasi antrean dunia nyata seperti antrean di loket tiket atau scenario first come first served lainnya membutuhkan antrean
-	Multiprogramming
-	Transfer data asinkron (file, IO, pipa, soket)
-	Waktu  tunggu pelanggan di call center
-	Menentukan jumlah kasir di supermarket
2.	Aplikasi tidak langsung
-	Struktur data tambahan untuk algoritma
-	Komponen struktur data lainnya

### Implementasi
Ada banyak cara (mirip dengan Stacks) untuk mengimplementasikan operasi antrian dan beberapa metode yang umum digunakan tercantum dibawah ini.
-	Implementasi berbasis array melingkar sederhana
-	Implementasi berbasis array melingkar dinamus
-	Implementasi daftar tertaut

[1]

## Guided 

### 1. GUIDED 1

#### Output :
![Screenshot 2024-05-08 112817](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/1883a1a8-3dbc-4781-927c-90075a77d4af)

### Deskripsi Program:
Program di atas adalah implementasi sederhana dari tumpukan (stack) menggunakan array dalam bahasa C++. Program ini menciptakan sebuah tumpukan untuk menyimpan daftar buku dengan batas maksimal sebanyak 5 buku. Dengan menggunakan fungsi-fungsi seperti push, pop, peek, count, change, dan destroy, program ini memungkinkan pengguna untuk melakukan operasi dasar pada tumpukan, seperti menambah, menghapus, mengubah, dan mencetak buku dalam tumpukan.
Dengan demikian, program tersebut menyediakan fungsionalitas dasar untuk manajemen buku dalam tumpukan dengan menggunakan array sebagai struktur datanya.

## Unguided 
### 1. Ubahlah penerapan konsep queue pada bagian guided dari array menjadi linked list!
#### Output:

### Deskripsi Program
Program tersebut adalah sebuah program dalam bahasa C++ yang bertujuan untuk menentukan apakah sebuah kalimat yang dimasukkan pengguna adalah palindrom atau tidak. Program melakukan hal berikut:

1. Meminta pengguna untuk memasukkan sebuah kalimat.
2. Menghapus karakter non-alphanumeric dari kalimat dan mengubah semua huruf menjadi huruf kecil.
3. Membandingkan setengah bagian pertama kalimat dengan setengah bagian kedua secara terbalik.
4. Jika kedua setengah bagian sama secara terbalik, program menyatakan bahwa kalimat tersebut adalah palindrom. Jika tidak, program menyatakan bahwa kalimat tersebut bukan palindrom.

### Cara Kerja Program
Program di atas adalah sebuah program dalam bahasa C++ yang bertujuan untuk mengecek apakah sebuah kalimat adalah palindrom atau tidak. Berikut adalah penjelasan cara kerjanya:

1. **Header dan Namespace**:
   - Program dimulai dengan menyertakan beberapa header file yang diperlukan seperti `<iostream>`, `<stack>`, dan `<string>`.
   - Penggunaan `using namespace std;` menghindari penulisan `std::` di depan setiap fungsi atau objek yang berasal dari namespace `std`.

2. **Fungsi `removeNonAlphanumeric`**:
   - Fungsi ini bertugas untuk menghapus karakter non-alphanumeric dari sebuah string dan mengubah karakter yang tersisa menjadi huruf kecil.
   - Melalui iterasi, setiap karakter dalam string `str` diperiksa menggunakan fungsi `isalnum()` untuk menentukan apakah karakter tersebut adalah alfanumerik.
   - Jika karakter tersebut adalah alfanumerik, maka karakter tersebut ditambahkan ke dalam string `result` setelah diubah menjadi huruf kecil menggunakan fungsi `tolower()`.
   - String `result` yang telah dimodifikasi dikembalikan sebagai hasil.

3. **Fungsi `isPalindrome`**:
   - Fungsi ini bertujuan untuk mengecek apakah sebuah string adalah palindrom atau tidak.
   - Dalam fungsi ini, digunakan sebuah `stack` untuk menyimpan setengah karakter pertama dari string.
   - Pertama, setengah karakter pertama dari string dimasukkan ke dalam `stack`.
   - Kemudian, dilakukan iterasi untuk memeriksa setengah karakter kedua dengan `stack`.
   - Setiap karakter dari setengah kedua string dibandingkan dengan karakter yang ada di puncak `stack`.
   - Jika ada perbedaan, maka string tersebut bukan palindrom dan fungsi mengembalikan `false`.
   - Jika tidak ada perbedaan, maka karakter dari `stack` dihapus dan iterasi dilanjutkan.
   - Jika iterasi selesai tanpa adanya perbedaan, maka string tersebut adalah palindrom dan fungsi mengembalikan `true`.

4. **Fungsi `main`**:
   - Pada fungsi `main`, pengguna diminta untuk memasukkan sebuah kalimat menggunakan `getline()`.
   - Kalimat yang dimasukkan kemudian dimodifikasi menggunakan fungsi `removeNonAlphanumeric()` untuk menghapus karakter non-alphanumeric dan mengubahnya menjadi huruf kecil.
   - Hasil modifikasi tersebut kemudian digunakan sebagai argumen untuk memanggil fungsi `isPalindrome()`.
   - Hasil dari pengecekan palindrom ditampilkan kepada pengguna. Jika kalimat tersebut adalah palindrom, pesan "Kalimat tersebut adalah palindrom." akan ditampilkan; jika tidak, pesan "Kalimat tersebut bukan palindrom." akan ditampilkan.

Dengan demikian, program tersebut mengimplementasikan algoritma untuk menghapus karakter non-alphanumeric, mengubah huruf menjadi huruf kecil, serta mengecek apakah sebuah string adalah palindrom atau tidak.

### 2. Dari nomor 1 buatlah konsep antri dengan atribut Nama Mahasiswa dan NIM Mahasiswa
Contoh

Kalimat : Telkom Purwokerto

Hasil : otrekowruP mokleT

### Output
![Screenshot 2024-05-08 123704](https://github.com/meutyaazzahra/test/assets/161669000/78a73392-c0ac-4ee4-8e61-f06f3a56697b)

### Deskripsi Program
Program tersebut menggunakan struktur data tumpukan (stack) untuk membalikkan kalimat yang dimasukkan pengguna. Setiap karakter dari kalimat dimasukkan ke dalam tumpukan, lalu dikeluarkan satu per satu untuk membalikkan urutannya.

### Penjelasan

Output dari program tersebut akan terdiri dari dua bagian utama:

1. **Kalimat Asli**: Ini adalah kalimat yang dimasukkan oleh pengguna sebelum dibalik.
2. **Kalimat Setelah dibalik**: Ini adalah hasil dari membalikkan urutan karakter dari kalimat yang dimasukkan oleh pengguna.

Penjelasan source code:

```cpp
#include <iostream>
#include <cstring>

using namespace std;
```
- **Header Files**: Program ini menggunakan `<iostream>` untuk input-output standar, dan `<cstring>` untuk operasi-operasi string.
- **Namespace**: `using namespace std;` digunakan untuk mempermudah penggunaan objek dan fungsi dari namespace `std`.

```cpp
struct Tumpukan {
    char nama[50];
    int top;
} T;
```
- **Struktur Data Tumpukan**: `Tumpukan` adalah sebuah struktur data yang menyimpan array `nama` untuk menyimpan karakter-karakter, dan `top` sebagai penunjuk teratas pada tumpukan.

```cpp
void push(char x) {
    if (T.top == 49) {
        cout << "Tumpukan sudah penuh";
    } else {
        T.top = T.top + 1;
        T.nama[T.top] = x;
    }
}
```
- **Fungsi Push**: `push(char x)` digunakan untuk menambahkan karakter `x` ke dalam tumpukan. Jika tumpukan sudah penuh (indeks `top` sudah mencapai batas maksimal), program menampilkan pesan "Tumpukan sudah penuh", jika tidak, karakter `x` dimasukkan ke dalam tumpukan.

```cpp
char pop() {
    char hasil;
    if (T.top == 0) {
        cout << "Tumpukan sudah kosong";
        hasil = ' ';
    } else {
        hasil = T.nama[T.top];
        T.top = T.top - 1;
    }
    return hasil;
}
```
- **Fungsi Pop**: `pop()` digunakan untuk mengeluarkan karakter teratas dari tumpukan. Jika tumpukan sudah kosong, program menampilkan pesan "Tumpukan sudah kosong" dan mengembalikan karakter kosong. Jika tidak, karakter teratas dari tumpukan diambil, `top` dikurangi satu, dan karakter tersebut dikembalikan.

```cpp
int main() {
    int len;
    char kalimat[25];
    T.top = 0;

    cout << "Masukkan Kalimat: ";
    cin.getline(kalimat, 25);

    len = strlen(kalimat);

    cout << "Kalimat Asli: " << kalimat;

    for (int i = 0; i < len; i++) {
        push(kalimat[i]);
    }

    cout << "\nKalimat Setelah dibalik: ";
    for (int i = 0; i < len; i++) {
        cout << pop();
    }
    cout << endl;

    return 0;
}
```
- **Fungsi Main**: 
  - Program meminta pengguna untuk memasukkan sebuah kalimat.
  - Panjang kalimat dihitung dengan menggunakan `strlen()`.
  - Setiap karakter dari kalimat dimasukkan ke dalam tumpukan menggunakan fungsi `push()`.
  - Setelah semua karakter dimasukkan, program mencetak "Kalimat Setelah dibalik" dengan cara mengeluarkan karakter dari tumpukan satu per satu menggunakan fungsi `pop()`. Ini menghasilkan output berupa kalimat yang telah dibalikkan.
  - Program kemudian berakhir dengan mengembalikan nilai 0 dari `main()`.

Operasi/fungsi yang dibuat dalam program ini adalah sebagai berikut:

1. **`push(char x)`:** Fungsi ini digunakan untuk menambahkan karakter ke dalam tumpukan. Jika tumpukan sudah penuh, program akan menampilkan pesan "Tumpukan sudah penuh". Jika tidak, karakter ditambahkan ke dalam tumpukan.

2. **`pop()`:** Fungsi ini digunakan untuk mengeluarkan karakter dari tumpukan. Jika tumpukan sudah kosong, program akan menampilkan pesan "Tumpukan sudah kosong" dan mengembalikan karakter kosong. Jika tidak, karakter dari puncak tumpukan diambil dan puncak tumpukan digeser ke bawah.

Dalam `main()`, kedua fungsi tersebut digunakan untuk memproses kalimat yang dimasukkan oleh pengguna, yaitu dengan memasukkan setiap karakter kalimat ke dalam tumpukan, kemudian mengeluarkan karakter dari tumpukan satu per satu untuk membalikkan urutan karakter kalimat.

## Kesimpulan
Tumpukan (stack) adalah struktur data yang sederhana namun sangat penting dalam pemrograman. Konsep utamanya adalah "last in, first out" (LIFO) atau "first in, last out" (FILO), yang berarti elemen terakhir yang dimasukkan adalah yang pertama kali dikeluarkan. Dalam kehidupan sehari-hari, tumpukan dapat diibaratkan dengan tumpukan piring di kafetaria, di mana piring terakhir yang ditambahkan adalah yang pertama kali diambil.

Beberapa operasi dasar yang terkait dengan tumpukan adalah push (menambahkan elemen ke tumpukan), pop (menghapus dan mengambil elemen teratas dari tumpukan), top (mengambil elemen teratas tanpa menghapusnya), size (mengembalikan jumlah elemen dalam tumpukan), isEmpty (mengecek apakah tumpukan kosong), dan isFull (mengecek apakah tumpukan penuh).

Tumpukan memiliki banyak aplikasi baik secara langsung maupun tidak langsung. Aplikasi langsung termasuk dalam pemecahan masalah sehari-hari seperti keseimbangan simbol, konversi ekspresi matematika, evaluasi ekspresi, pengelolaan riwayat halaman di browser, dan lain-lain. Sedangkan aplikasi tidak langsung meliputi peran sebagai struktur data bantu dalam algoritma lain seperti algoritma traversal pohon, atau sebagai komponen dalam struktur data lain seperti simulasi antrian.

Dengan kesederhanaannya, tumpukan menjadi salah satu konsep yang fundamental dalam ilmu komputer dan memiliki peran yang signifikan dalam berbagai aplikasi perangkat lunak.

## Referensi
[1] Dr. Joseph Teguh Santoso, S. K. (2011). STRUKTUR DATA dan ALGORTIMA (Bagian 1). YAYASAN PRIMA AGUS TEKNIK.
