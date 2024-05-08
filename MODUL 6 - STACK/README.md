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
### Operasi tumpukan utama
-	Push (int data) : Menyisipkan data ke tumpukan
-	int Pop() : menghapus dan mengembalikan elemen terakhir yang dimasukkan dari tumpukan\
### Operasi tumpukan tambahan 
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
![Screenshot 2024-05-08 112817](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/1883a1a8-3dbc-4781-927c-90075a77d4af)

### Deskripsi Program:
Program di atas adalah implementasi sederhana dari tumpukan (stack) menggunakan array dalam bahasa C++. Program ini menciptakan sebuah tumpukan untuk menyimpan daftar buku dengan batas maksimal sebanyak 5 buku. Dengan menggunakan fungsi-fungsi seperti push, pop, peek, count, change, dan destroy, program ini memungkinkan pengguna untuk melakukan operasi dasar pada tumpukan, seperti menambah, menghapus, mengubah, dan mencetak buku dalam tumpukan.
Dengan demikian, program tersebut menyediakan fungsionalitas dasar untuk manajemen buku dalam tumpukan dengan menggunakan array sebagai struktur datanya.

## Unguided 
### 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah polindrom/tidak. Polindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.
Contoh

Kalimat : ini

Kalimat tersebut adalah polindrom

Kalimat : telkom

Kalimat tersebut adalah bukan polindrom

#### Output:


## Deskripsi Program


### 2. Buatlah program untuk melakukan pembalikan terhadap kalimat menggunakan stack dengan minimal 3 kata. Jelaskan output program dan source codenya beserta operasi/fungsi yang dibuat
Contoh

Kalimat : Telkom Purwokerto
Hasil : otrekowruP mokleT

### Output

## Deskripsi Program
## Kesimpulan
Tumpukan (stack) adalah struktur data yang sederhana namun sangat penting dalam pemrograman. Konsep utamanya adalah "last in, first out" (LIFO) atau "first in, last out" (FILO), yang berarti elemen terakhir yang dimasukkan adalah yang pertama kali dikeluarkan. Dalam kehidupan sehari-hari, tumpukan dapat diibaratkan dengan tumpukan piring di kafetaria, di mana piring terakhir yang ditambahkan adalah yang pertama kali diambil.

Beberapa operasi dasar yang terkait dengan tumpukan adalah push (menambahkan elemen ke tumpukan), pop (menghapus dan mengambil elemen teratas dari tumpukan), top (mengambil elemen teratas tanpa menghapusnya), size (mengembalikan jumlah elemen dalam tumpukan), isEmpty (mengecek apakah tumpukan kosong), dan isFull (mengecek apakah tumpukan penuh).

Tumpukan memiliki banyak aplikasi baik secara langsung maupun tidak langsung. Aplikasi langsung termasuk dalam pemecahan masalah sehari-hari seperti keseimbangan simbol, konversi ekspresi matematika, evaluasi ekspresi, pengelolaan riwayat halaman di browser, dan lain-lain. Sedangkan aplikasi tidak langsung meliputi peran sebagai struktur data bantu dalam algoritma lain seperti algoritma traversal pohon, atau sebagai komponen dalam struktur data lain seperti simulasi antrian.

Dengan kesederhanaannya, tumpukan menjadi salah satu konsep yang fundamental dalam ilmu komputer dan memiliki peran yang signifikan dalam berbagai aplikasi perangkat lunak.

## Referensi
[1] Dr. Joseph Teguh Santoso, S. K. (2011). STRUKTUR DATA dan ALGORTIMA (Bagian 1). YAYASAN PRIMA AGUS TEKNIK.
