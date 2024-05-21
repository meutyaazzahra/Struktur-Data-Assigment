# <h1 align="center">Laporan Praktikum Modul 8 - Algoritma Searching</h1>
<p align="center">Meutya Azzahra Efendi - 2311102166</p>
<p align="center">IF - 11 - E</p>

## Dasar Teori

### Pengertian Searching
 Dalam ilmu computer, perncarian adalah proses menemukan item dengan properti tertentu dari kumpulan item. Item dapat disimpan sebagai catatan dalam database, elemen data sederhana dalam array, teks dalam file, node di pohon, simpul dan tepi dalam grafik atau mungkin elemen dari ruang pencarian pencarian lainnya.
### Mengapa Kita Membutuhkan Searching?
Pencarian adalag salah satu algoritma inti ilmu computer. Kita tahu bahwa computer saat ini menyimpan banyak informasi. Untuk mengambil informasi ini dengan mahir kita membutuhkan algoritma pencarian yang sangat efisien. Ada cara tertentu untuk mengatur data yang meningkatkan proses pencarian. Artinya, jika kita menyimpan data dalam urutan yang benar, akan mudah untuk mencari elemen yang diperlukan. Sortasi adalah salah satu Teknik untuk membuat elemen tersusun. Dalam bab ini kita akan melihat algoritma pencarian yang berbeda.
[1]
### 1.	Metode Sequential Search
Metode sequential search atau disebut dengana pencarian beruntun dapat digunakan untuk melakukan pencarian data baik pada array yang sudah terurut maupun yang belum terurut. Proses yang terjadi pada metode pencarian ini adalah sebagai berikut:
1.	Membaca array data
2.	Menentukan data yang dicari
3.	Mulai dari data pertama sampai dengan data terakhir, data yang dicari dibandingkan dengan masing-masing data di dalam array.
   
   -	Jika data yang dicari tidak ditemukan, maka semua data atau elemen array dibandingkan sampai selesai

   -	Jika data yang dicari ditemukan, maka perbandingan akan dihentikan

### 2.	Metode Binary Search
Metode binary search atau sering pula dinamakan pencarian biner digunakan untuk pencarian data pada array yang sudah terurut. Proses yang terjadi pada pencarian dengan metode ini adalah sebagai berikut:
1.	Membaca array data
2.	Apabila array belum terurut, maka diurutkan terlebih dahulu
3.	Menentukan data yang akan dicari
4.	Menentukan elemen tengah dari array
5.	Jika nilai elemen tengah sama dengan data yang dicari, maka pencarian selesai
6.	Jika nilai elemen tengah tidak sama dengan data yang dicari, maka:
   
   -	Jika nilai elemen tengah lebih besar daripada data yang dicari, maka pencarian dilakukan pada setengah array pertama

   - Jika nilai elemen tengah lebih kecil daripada data yang dicari, maka pencarian dilakukan pada setengah array berikutnya
[2]

## Guided 

### 1. GUIDED 1

#### Output :
![Screenshot 2024-05-21 193333](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/bb8537c0-0d91-4619-a15b-790e79c44713)
### Deskripsi Program:
Program di atas adalah implementasi sederhana dari algoritma pencarian sekuensial dalam C++. Dimulai dengan inisialisasi array `data` yang berisi sepuluh bilangan bulat dan nilai `cari` yang akan dicari, program menggunakan loop `for` untuk memeriksa setiap elemen array. Jika elemen yang dicari ditemukan, variabel `ketemu` diatur ke `true` dan loop dihentikan. Program kemudian mencetak hasil pencarian: jika elemen ditemukan, program menunjukkan indeks di mana elemen tersebut berada; jika tidak, program menyatakan bahwa elemen tidak ditemukan dalam array.
### 2. GUIDED 2

### Output : 
![Screenshot 2024-05-21 193453](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/c3e1305d-0cc1-4dbf-bdca-b10cc3ffc5fd)
### Deskripsi Program :
Program di atas mengimplementasikan pencarian biner di C++ setelah mengurutkan array dengan selection sort. Array `arrayData` berisi tujuh bilangan bulat. Pengguna diminta memasukkan nilai yang ingin dicari. Program mengurutkan array menggunakan fungsi `selection_sort`, kemudian mencari nilai menggunakan `binary_search`. Hasil pencarian ditampilkan, menunjukkan indeks jika nilai ditemukan atau pesan jika tidak ditemukan.
## Unguided 
### 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!

#### Output:
![Screenshot 2024-05-21 194443](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/f98a0274-c755-4af0-aaef-7a5ab8bf36a7)
### Deskripsi Program
Program di atas adalah implementasi pencarian huruf dalam sebuah kalimat menggunakan algoritma pencarian biner (binary search) dalam bahasa C++. Program meminta pengguna untuk memasukkan sebuah kalimat dan huruf yang ingin dicari. Setelah itu, program menghilangkan spasi dari kalimat dan menyimpan setiap huruf dalam vektor. Kemudian, vektor huruf diurutkan menggunakan fungsi `sort`. Setelah proses pengurutan, program melakukan pencarian menggunakan fungsi `binary_search`. Jika huruf ditemukan, program mencetak indeks di mana huruf tersebut ditemukan dalam daftar huruf yang terurut. Jika tidak ditemukan, program mencetak pesan bahwa huruf tidak ditemukan dalam kalimat.
### 2.  Buatlah sebuah program yang dapat menghitung banyaknya huruf  vocal dalam sebuah kalimat

### Output
![Screenshot 2024-05-21 194730](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/9ce83163-656a-47a8-83e8-f06141964466)
### Deskripsi Program
Program di atas adalah sebuah program sederhana yang menghitung jumlah huruf vokal dalam sebuah kalimat yang dimasukkan oleh pengguna. Setelah meminta pengguna untuk memasukkan sebuah kalimat, program menggunakan sebuah fungsi `count_vowels` untuk mengiterasi setiap karakter dalam kalimat tersebut. Fungsi ini menghitung jumlah huruf vokal dengan memeriksa apakah setiap karakter terdapat dalam string huruf vokal ("aeiou") setelah dikonversi menjadi huruf kecil menggunakan fungsi `tolower`. Setelah menghitung, program mencetak jumlah huruf vokal yang ditemukan dalam kalimat tersebut.
### 3.   Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search! 

### Output
![Screenshot 2024-05-21 210407](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/26819303-89b6-498c-ad20-62f48db58538)
### Deskripsi Program
Program di atas adalah program sederhana yang menghitung jumlah kemunculan angka 4 dalam sebuah array menggunakan metode pencarian sekuensial (Sequential Search). Setelah inisialisasi array `data`, program menggunakan fungsi `count_number_4` untuk mengiterasi setiap elemen dalam array dan menghitung jumlah kemunculan angka 4. Setelah itu, hasil perhitungan ditampilkan menggunakan `cout`.
## Kesimpulan
Pencarian adalah proses penting dalam ilmu komputer yang melibatkan menemukan item dengan properti tertentu dari kumpulan item. Metode pencarian seperti Sequential Search dan Binary Search digunakan untuk mencari data dalam struktur data seperti array. Sequential Search melakukan pencarian dengan cara membandingkan setiap elemen dalam array secara berurutan dengan elemen yang dicari, sementara Binary Search memanfaatkan fakta bahwa data harus diurutkan terlebih dahulu dan melakukan pencarian dengan membagi array menjadi setengah setiap kali, mencari di setengah yang relevan berdasarkan hasil perbandingan dengan elemen tengah. 

Kesimpulannya, pencarian adalah aspek kunci dalam pengelolaan data komputer, dan pilihan algoritma pencarian yang tepat dapat memengaruhi kinerja aplikasi secara signifikan. Dalam konteks ini, Sequential Search cocok untuk data yang tidak terurut, sementara Binary Search lebih efisien untuk data yang sudah terurut.
## Referensi
[1] Dr. Joseph Teguh Santoso, S. K. (2011). STRUKTUR DATA dan ALGORTIMA (Bagian 1). YAYASAN PRIMA AGUS TEKNIK.
[2] Prof. Dr. Ema Utami, S. S. (2017). Langkah Mudah Belajar Struktur Data Menggunakan C/C++. 
