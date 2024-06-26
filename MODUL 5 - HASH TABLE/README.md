# <h1 align="center">Laporan Praktikum Modul 5 - Hash Table</h1>
<p align="center">Meutya Azzahra Efendi - 2311102166</p>
<p align="center">IF - 11 - E</p>

## Dasar Teori

### Pengertian Hash Table
Fungsi hash digunakan untuk mengubah kunci menjadi indeks. Idealnya, fungsi hash harus memetakan setiap kunci yang mungkin ke indeks slot yang unik, tetapi sulit untuk dicapai dalam praktiknya. 
Diberikan kumpulan elemen, fungsi hash yang memetakan setiap item ke dalam slot unik disebut sebagai fungsi hash sempurna. Jika kita tahu elemen dan koleksinya tidak akan pernah   berubah,  maka dimungkinkan untuk membangun fungsi hash yang sempurna. Sayangnya, mengingat kumpulan elemen yang berubah-ubah, tidak ada cara sistematis untuk membangun fngsi hash yang sempurna. Untungnya, kita tidak memerlukan fungsi hash yang sempurna untuk tetap mendapatkan efisiensi kinerja. [1]

### Bagaimana memilih fungsi hash?
Masalah dasar yang terkait dengan pembuatan hash table adalah:
-	Fungsi hash yang efisien harus dirancang sehingga mendistribusikan nilai indeks dari ojek yang disisipkan secara seragam di seluruh tabel.
-	Flgoritma resolusi tabrakan yang efisien harus dirancang sedemikian rupa sehingga menghitung indeks alternatif untuk kunci yang indeks hashnya sesuai dengan lokasi yang sebelumnya dimasukkan dalam hash table.
-	kita yang memilih fungsi hash yang dapat dihitung dengan cepat, mengembalikan nilai dalam rentang lokasi di tabel kita dan meminimalkan tabrakan.
[1]

### Karakteristik Fungsi Hash yang Baik
-	 Minimalkan tabrakan
-	 Mudah dan cepat untuk menghitung
-	 Distribusikan nilai kunci secara merata di hash table
-	 Gunakan semua informasi yang terjadi di kunci
-	 Memiliki factor beban tinggi untuk satu set kunci tertentu
[1]

## Guided 

### 1. GUIDED 1

#### Output :
![Screenshot 2024-04-17 062453](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/547c7b1a-fa3a-4db5-b408-4893f16de9e0)

### Deskripsi Program:
Program yang diberikan adalah implementasi sederhana dari tabel hash (hash table) dalam bahasa pemrograman C++. Tabel hash adalah struktur data yang digunakan untuk menyimpan pasangan kunci-nilai (key-value) di mana pencarian, penghapusan, dan penambahan elemen memiliki kompleksitas waktu rata-rata O(1), asumsi bahwa fungsi hashnya baik.

### 2. GUIDED 2

#### Output :
![Screenshot 2024-04-17 062520](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/c18a5836-609e-4078-98ca-7de444da184b)

### Deskripsi Program:
Program ini adalah implementasi sederhana dari tabel hash menggunakan chaining dalam C++. Tabel hash digunakan untuk menyimpan pasangan nama dan nomor telepon karyawan. Program memungkinkan penambahan, pencarian, dan penghapusan entri, serta pencetakan isi tabel hash.

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
Dalam pengertian hash table, fungsi hash digunakan untuk mengubah kunci menjadi indeks, di mana idealnya setiap kunci harus dipetakan ke indeks slot yang unik. Meskipun konsep fungsi hash sempurna diinginkan, dalam praktiknya sulit untuk dicapai karena kumpulan elemen yang berubah-ubah. Meskipun begitu, kita tidak memerlukan fungsi hash yang sempurna untuk tetap mendapatkan efisiensi kinerja yang baik.

Dalam memilih fungsi hash, terdapat beberapa masalah dasar yang harus diatasi. Pertama, fungsi hash harus didesain sedemikian rupa sehingga mendistribusikan nilai indeks secara seragam di seluruh tabel hash. Kedua, algoritma resolusi tabrakan harus efisien, yaitu mampu menghitung indeks alternatif untuk kunci yang memiliki indeks hash yang sama dengan lokasi yang sebelumnya dimasukkan dalam hash table. Selain itu, fungsi hash yang baik harus dapat dihitung dengan cepat, menghasilkan distribusi nilai kunci yang merata di hash table, menggunakan semua informasi yang terkandung dalam kunci, dan memiliki faktor beban yang tinggi untuk satu set kunci tertentu.

Kesimpulannya, fungsi hash yang baik adalah fungsi yang meminimalkan tabrakan, mudah dan cepat untuk dihitung, mendistribusikan nilai kunci secara merata di hash table, menggunakan semua informasi dalam kunci, dan mampu menangani beban tinggi untuk set kunci tertentu. Dengan memperhatikan karakteristik ini, kita dapat merancang fungsi hash yang efisien untuk digunakan dalam pembuatan hash table.

## Referensi
[1] Dr. Joseph Teguh Santoso, S. K. (2011). STRUKTUR DATA dan ALGORTIMA (Bagian 2). YAYASAN PRIMA AGUS TEKNIK.


