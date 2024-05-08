# <h1 align="center">Laporan Praktikum Modul 6 - STACK</h1>
<p align="center">Meutya Azzahra Efendi - 2311102166</p>
<p align="center">IF - 11 - E</p>

## Dasar Teori

### Pengertian Stack
  Tumpukan (stack) adalah struktur data sederhana yang digunakan untuk menyimpan data (mirip dengan linked list). Dalam stack, urutan kedatangan data adalah penting. Tumpukan piring di kafetaria adalah contoh tumpukan yang baik. Pelat ditambah ke tumpukan saat dibersihkan dan diletakkan di atas. Ketika piring diperlukan itu diambil dari atas tumpukan. Piring pertama yang di tumpukkan adalah yang terakhir digunakan.
  Definisi tumpukan adalah daftar terurut di mana penyisipan dan penghapusan dilakukan di satu ujung, yaitu atas. Elemen terakhir yang dimasukkan adalah yang pertama dihapus. Oleh karena itu, ini disebut dafar Last in First Out (LIFO) atau First in Last Out (FILO).
  Nama khusus diberikan untuk dua perubahan yang dapat dilakukan pada tumpukan. Ketika sebuah elemen dimasukkan ke dalam tumpukan, konsepnya disebut push dan Ketika sebuah elemen dikeluarkan dari tumpukan, konsepnya disebut pop. Mencoba mengeluarkan tumpukan kosong disebut underflow dan mencoba mendorong elemen dari tumpukan penuh disebut overflow. Umumnya, kita memperlakuan mereka sebagai pengecualian. Sebagai contoh, pertimbangkan snapshot dari tumpukan.

### Tumpukan (Stack) ADTBagaimana memilih fungsi hash?
Operasi berikut membuat tumpukan menjadi ADT. Untuk kesederhanaan, asumsikan data adalah tipe integer.
## Operasi tumpukan utama
-	Push (int data) : Menyisipkan data ke tumpukan
-	int Pop() : menghapus dan mengembalikan elemen terakhir yang dimasukkan dari tumpukan\
## Operasi tumpukan tambahan 
-	int Top() : mengembalikan elemen yang terakhir dimasukkan  tanpa menghapusnya
-	int Size() : mengembalikan jumlah elemen yang disimpan dalam tumpukan
-	int IsEmptyTumpukan(): menunjukkan apakah data elemen yang disimpan dalam tumpukan atau tidak
-	int IsFullTumpukan() : menunjukkan apakah tumpukan penuh atau tidak

### Aplikasi
Berikut ini adalah beberapa aplikasi dimana stack memainkan perang penting
1.	Aplikasi Langsung
-	keseimbangan symbol
-	konversi infix-to-postfix
-	evaluasi ekspresi postfix
-	menerapkan panggilan fungsi (termasuk rekursi)
-	menemukan rentang
-	riawat kunjungan halaman di browser
-	urungkan urutan dalam editor teks
-	mencocokkan Tag dalam HTML dan XML
2.	Aplikasi tidak langsung
-	Struktur data bantu untuk algoritma lain (contoh: algoritma traversal pohon)
-	Komponen struktur data lain (contoh: simulasi antrian, lihat antrian Bab)

[1]

## Guided 

### 1. GUIDED 1

#### Output :
![Screenshot 2024-04-17 062453](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/547c7b1a-fa3a-4db5-b408-4893f16de9e0)

### Deskripsi Program:
Program yang diberikan adalah implementasi sederhana dari tabel hash (hash table) dalam bahasa pemrograman C++. Tabel hash adalah struktur data yang digunakan untuk menyimpan pasangan kunci-nilai (key-value) di mana pencarian, penghapusan, dan penambahan elemen memiliki kompleksitas waktu rata-rata O(1), asumsi bahwa fungsi hashnya baik.

## Unguided 
Buatlah program menu Linked List Non Circular untuk menyimpan Nama dan NIM Mahasiswa, dengan menggunakan input dari user.

### 1. Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan:
### a. Setiap mahasiswa memiliki NIM dan nilai
### b. Program memiliki tampilan pilihan menu berisi poin C
### c. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data, berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80-90)

#### Output:
## 1. Tambah Data
![Screenshot 2024-04-17 155245](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/d09f0bc2-df34-41d8-a231-ccc1721ccf9a)
![Screenshot 2024-04-17 155257](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/a1de864d-3234-4923-a7ef-a9587a98ae44)
![Screenshot 2024-04-17 155309](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/6bcb56db-7077-4b27-bcf8-c51e1d740dbc)

## 2. Hapus Data
![Screenshot 2024-04-17 155323](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/ea17f37d-8b30-4363-b3b5-1d547b4605b0)

## 3. Cari Berdasarkan NIM
![Screenshot 2024-04-17 155344](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/ed517e73-5346-4b0f-95a1-3a50db81879b)

## 4. Cari Berdasarkan Rentang Nilai
![Screenshot 2024-04-17 155414](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/10d2fa9f-7b25-408f-a1c6-fd59cef63426)

## 5. Tampilan Semua Data
![Screenshot 2024-04-17 155442](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/aa9a4b8b-d99c-4a59-a98c-2e8fb5f2f923)

## 6. Keluar
![Screenshot 2024-04-17 155506](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/43a8669f-ed6f-47f3-acc3-b8a49d0234de)

## Deskripsi Program
Program ini adalah implementasi sederhana dari tabel hash dalam C++. Tabel hash digunakan untuk menyimpan data mahasiswa, yang terdiri dari nama, NIM, dan nilai. Program ini memungkinkan pengguna untuk menambahkan data mahasiswa, mencari data berdasarkan NIM, menghapus data berdasarkan NIM, mencari data berdasarkan rentang nilai, dan menampilkan semua data mahasiswa yang tersimpan.

## Kesimpulan
Tumpukan (stack) adalah struktur data yang sederhana namun sangat penting dalam pemrograman. Konsep utamanya adalah "last in, first out" (LIFO) atau "first in, last out" (FILO), yang berarti elemen terakhir yang dimasukkan adalah yang pertama kali dikeluarkan. Dalam kehidupan sehari-hari, tumpukan dapat diibaratkan dengan tumpukan piring di kafetaria, di mana piring terakhir yang ditambahkan adalah yang pertama kali diambil.

Beberapa operasi dasar yang terkait dengan tumpukan adalah push (menambahkan elemen ke tumpukan), pop (menghapus dan mengambil elemen teratas dari tumpukan), top (mengambil elemen teratas tanpa menghapusnya), size (mengembalikan jumlah elemen dalam tumpukan), isEmpty (mengecek apakah tumpukan kosong), dan isFull (mengecek apakah tumpukan penuh).

Tumpukan memiliki banyak aplikasi baik secara langsung maupun tidak langsung. Aplikasi langsung termasuk dalam pemecahan masalah sehari-hari seperti keseimbangan simbol, konversi ekspresi matematika, evaluasi ekspresi, pengelolaan riwayat halaman di browser, dan lain-lain. Sedangkan aplikasi tidak langsung meliputi peran sebagai struktur data bantu dalam algoritma lain seperti algoritma traversal pohon, atau sebagai komponen dalam struktur data lain seperti simulasi antrian.

Dengan kesederhanaannya, tumpukan menjadi salah satu konsep yang fundamental dalam ilmu komputer dan memiliki peran yang signifikan dalam berbagai aplikasi perangkat lunak.

## Referensi
[1] Dr. Joseph Teguh Santoso, S. K. (2011). STRUKTUR DATA dan ALGORTIMA (Bagian 1). YAYASAN PRIMA AGUS TEKNIK.
