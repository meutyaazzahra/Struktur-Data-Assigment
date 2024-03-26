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

#### Output :
<img width="960" alt="Screenshot 2024-03-26 162915" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/ad997add-9eed-4baa-8626-30d76b825092">

### Deskripsi Program:
Program yang diberikan adalah implementasi dari sebuah linked list non-circular menggunakan bahasa pemrograman C++. Linked list adalah struktur data linear di mana setiap elemen disimpan secara terpisah dalam objek yang disebut "node". Setiap node memiliki dua bagian utama: data yang menyimpan nilai elemen dan pointer yang menunjuk ke node berikutnya dalam urutan.

### 2. Double Linked List

#### Output :
<img width="960" alt="Screenshot 2024-03-26 163731" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/5800afae-e7c8-4c22-8500-b27491a9a057">

<img width="960" alt="Screenshot 2024-03-26 163953" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/065acc5a-9c6d-48f1-b489-8ed9c665fe73">

<img width="227" alt="Screenshot 2024-03-26 164102" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/c778446d-8faa-4d1e-80e1-b11fb3f2b7d7">

### Deskripsi Program:
Program yang diberikan adalah implementasi dari Doubly Linked List menggunakan C++. Doubly Linked List adalah struktur data linear di mana setiap elemen disimpan dalam sebuah node yang memiliki dua pointer, yaitu pointer ke node sebelumnya (prev) dan pointer ke node selanjutnya (next). Program ini memungkinkan pengguna untuk menambah, menghapus, memperbarui, menghapus semua data, dan menampilkan data dalam Doubly Linked List melalui antarmuka konsol.


## Unguided 

### 1. Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user. Lakukan operasi berikut:
a. Masukkan data sesuai urutan berikut. (Gunakan insert depan, belakang atau tengah). Data pertama yang dimasukkan adalah nama dan usia anda.
b. Hapus data Akechi
c. Tambahkan data berikut diantara John dan Jane : Futaba 18
d. Tambahkan data berikut diawal : Igor 20
e. Ubah data Michael menjadi : Reyn 18
f. Tampilkan seluruh data

#### Output:
a. Masukkan data sesuai urutan berikut. (Gunakan insert depan, belakang atau tengah). Data pertama yang dimasukkan adalah nama dan usia anda.
<img width="960" alt="Screenshot 2024-03-26 193547" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/18737f57-f2d5-491d-94d8-b943c8f87ea7">

b. Hapus data Akechi
<img width="960" alt="Screenshot 2024-03-26 193658" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/6348167b-1363-49ae-a594-976ba6cc2308">

c. Tambahkan data berikut diantara John dan Jane : Futaba 18
<img width="960" alt="Screenshot 2024-03-26 193850" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/14d75ae6-c1e6-4d90-89f4-ee498eb60dd3">

d. Tambahkan data berikut diawal : Igor 20
<img width="960" alt="Screenshot 2024-03-26 193945" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/7dbccd32-342d-4e76-843f-3f6c22690526">

e. Ubah data Michael menjadi : Reyn 18
<img width="960" alt="Screenshot 2024-03-26 194028" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/5f3f3fc3-7b3b-45a1-8598-a5b006f8ea5e">

f. Tampilkan seluruh data
<img width="960" alt="Screenshot 2024-03-26 194106" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/978f78cc-9ebd-4146-b7eb-94733fcd4c0b">

### Deskripsi Program:
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

### Deskripsi Program:
Program C++ di atas adalah aplikasi manajemen data produk yang menggunakan struktur data linked list. Program ini memungkinkan pengguna untuk menambah, menghapus, mengupdate, serta menampilkan data produk. Pengguna dapat memilih operasi yang diinginkan melalui menu yang disediakan. Setiap operasi yang dilakukan akan segera memperbarui tampilan data produk. Program akan berjalan hingga pengguna memilih untuk keluar. Program yang diberikan adalah aplikasi manajemen produk untuk toko skincare di Purwokerto. Aplikasi ini menggunakan struktur data linked list untuk menyimpan informasi produk, termasuk nama produk dan harganya.

## Kesimpulan
Linked list merupakan metode yang efektif untuk mengelola data secara dinamis, memungkinkan penambahan, penghapusan, pembaruan, dan akses data tanpa memerlukan alokasi memori statis sebelumnya. Kelebihan utama linked list adalah kemampuannya menangani data dengan ukuran yang tidak pasti dan memperbolehkan operasi penyisipan atau penghapusan elemen dengan cepat. Meskipun demikian, penggunaan linked list juga memiliki kelemahan seperti penggunaan memori tambahan untuk menyimpan pointer dan kompleksitas akses yang tidak secepat array. Meski begitu, linked list tetap menjadi pilihan populer dalam implementasi struktur data dinamis di C++ karena fleksibilitas dan kemampuannya dalam menangani situasi di mana jumlah elemen tidak pasti.
Kelebihan linked list antara lain penambahan elemen tidak terbatas dan penghapusan elemen lebih cepat. Namun, linked list juga memiliki kekurangan, seperti hanya dapat diakses secara sekuensial dan memerlukan lebih banyak memori dalam jumlah yang besar.
Secara keseluruhan, linked list adalah struktur data yang fleksibel dan efisien dalam operasi penyisipan dan penghapusan, namun perlu diperhatikan karakteristik dan kebutuhan spesifik dari aplikasi saat memilih menggunakan linked list sebagai struktur data.

## Referensi
[1] Erkamim Erkamim, I. A. (2024). Buku Ajar Algoritma dan Struktur Data. PT. Sonpedia Publishing Indonesia.

[2] Legito Legito, R. S. (2023). BUKU AJAR PENGANTAR ILMU KOMPUTER. PT. Sonpedia Publishing Indonesia.
