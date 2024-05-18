# <h1 align="center">Laporan Praktikum Modul 7 - QUEUE</h1>
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
Program di atas adalah implementasi antrean (queue) menggunakan array di C++. Variabel dan fungsi yang digunakan memungkinkan penambahan, penghapusan, dan pengecekan status antrean. Dalam main(), program menambah, menghapus, dan mengosongkan antrean, serta mencetak elemen-elemen dan jumlahnya setelah setiap operasi. Ini adalah demonstrasi sederhana pengelolaan antrean menggunakan array di C++.

## Unguided 
### 1. Ubahlah penerapan konsep queue pada bagian guided dari array menjadi linked list!

#### Output:
![Screenshot 2024-05-18 151826](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/dcc59957-0978-4451-91fe-7791d2ae0809)
### Deskripsi Program
Program di atas mengimplementasikan antrean (queue) menggunakan linked list di C++. Struktur Node menyimpan data dan menunjuk ke elemen berikutnya. Dua variabel global, front dan back, menunjuk ke elemen depan dan belakang antrean. Fungsi isEmpty() memeriksa apakah antrean kosong. Fungsi enqueueAntrian(string data) menambahkan elemen baru ke belakang antrean, dan dequeueAntrian() menghapus elemen dari depan. Fungsi countQueue() menghitung jumlah elemen dalam antrean, sementara clearQueue() menghapus semua elemen. Fungsi viewQueue() mencetak semua elemen dalam antrean. Dalam fungsi main(), program menambahkan beberapa elemen ke antrean, mencetak isi dan jumlah elemen, menghapus satu elemen, dan akhirnya mengosongkan antrean, menunjukkan perubahan setelah setiap operasi. Program ini mendemonstrasikan operasi dasar antrean menggunakan linked list.

### 2. Dari nomor 1 buatlah konsep antri dengan atribut Nama Mahasiswa dan NIM Mahasiswa

### Output
![Screenshot 2024-05-18 151842](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/cf0792ec-0bc5-4e5f-9dc6-e6ef38214fc5)
### Deskripsi Program
Program di atas adalah implementasi antrean (queue) menggunakan linked list di C++. Struktur data Mahasiswa menyimpan informasi nama dan NIM mahasiswa. Setiap elemen antrean direpresentasikan sebagai Node, yang berisi data mahasiswa dan pointer ke node berikutnya. Variabel front dan back menunjukkan posisi depan dan belakang antrean.

Fungsi-fungsi seperti isEmpty(), enqueueAntrian(), dequeueAntrian(), countQueue(), clearQueue(), dan viewQueue() digunakan untuk operasi dasar pada antrean. Program menambahkan dan menghapus elemen, serta menampilkan data mahasiswa dalam antrean.

Ini adalah contoh penggunaan antrean untuk menyimpan dan mengelola data mahasiswa menggunakan linked list di C++.

## Kesimpulan
Antrian (queue) adalah struktur data yang mengatur data secara FIFO (First In First Out) atau LILO (Last In Last Out), di mana elemen yang dimasukkan pertama kali akan dikeluarkan pertama kali. Operasi utama pada antrian adalah EnQueue (menambahkan elemen) dan DeQueue (menghapus elemen). Selain itu, terdapat operasi bantu seperti Front (mengambil elemen tanpa menghapusnya), QueueSize (mengembalikan jumlah elemen dalam antrian), dan IsEmptyQueue (menunjukkan apakah antrian kosong).

Antrian memiliki berbagai aplikasi, baik langsung maupun tidak langsung, seperti dalam sistem operasi, simulasi antrian, multiprogramming, transfer data asinkron, layanan pelanggan, dan penjadwalan pekerjaan. Antrian juga digunakan sebagai struktur data tambahan untuk algoritma dan komponen struktur data lainnya.

Beberapa metode implementasi antrian meliputi implementasi berbasis array melingkar sederhana, implementasi berbasis array melingkar dinamis, dan implementasi menggunakan daftar tertaut. Dalam penggunaannya, antrian membantu menjaga urutan kedatangan data dan memfasilitasi penjadwalan pekerjaan atau pelayanan dalam berbagai konteks.

## Referensi
[1] Dr. Joseph Teguh Santoso, S. K. (2011). STRUKTUR DATA dan ALGORTIMA (Bagian 1). YAYASAN PRIMA AGUS TEKNIK.
