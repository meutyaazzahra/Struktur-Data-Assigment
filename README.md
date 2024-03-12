# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Meutya Azzahra Efendi</p>

## Dasar Teori
Tipe Data adalah klasifikasi tipe data tertentu berdasarkan nilai tertentu atau tipe operasi matematika atau logika tertentu. Tipe data tergantung pada perintah bahasa pemrograman seperti huruf, huruf kecil, huruf besar, angka, tanda baca, dan masih banyak lagi.
	Tipe data terbagi menjadi tiga bagian, yaitu;
 1. Tipe data primitive
    Tipe data primitive di C++ adalah beberapa tipe data bawaan yang dapat digunakan oleh pengguna secara langsung untuk deklarasi variabel. Beberapa tipe data primitive di C++ adalah:
    a. Bilangan bulat
    b. Karakter
    c. Boolean
    d. Titik mengambang
    e. Titik mengambang dua
    f. Tidak bernilai atau batal
    g. Karakter yang luas
2. Tipe data turunan
   Tipe data turunan di C++ berasal dari tipe data primitive. Ada beberapa tipe data tununan dalam bahasa C++:
   a. Fungsi
   b. Himpunan
   c. Penunjuk
   d. Referensi
3. Tipe data pengguna atau abstrak
   Tipe data abstrak dalam bahasa C++ ditentukan oleh pengguna sendiri. Ini seperti mendefinisikan kelas dalam struktur atau C++. Tipe data khusus ini memiliki beberapa variasi, yaitu:
   a. Kelas
   b. Struktur
   c. Persatuan
   d. Pencacahan
   e. Tipe data yang ditentukan typedef
## Pengubahan tipe data dalam C++
Di C++, pengubah tipe data digunakan untuk mengubah perilaku dan karakteristik penyimpanan tipe data dasar. Di C++, ada empat pengubah, int, double, dan char adalah tipe data yang dapat dimodifikasi menggunakan pengubah ini. Mereka adalah sebagai berikut:
1. Tertanda
2. Tidak ditandatangani
3. Pendek
4. Panjang

## Guided 

### 1. [tipe data primitif]

#### Output:


#### Deskripsi Program:
Program ini adalah kalkulator sederhana yang meminta pengguna untuk memasukkan operator (+, -, *, /) dan dua bilangan. Kemudian, berdasarkan operator yang dimasukkan, program akan melakukan operasi aritmatika yang sesuai dan menampilkan hasilnya.

### 2. [tipe data abstrak]

#### Output:


#### Deskripsi Program:
Program tersebut menggunakan struct untuk menyimpan informasi mahasiswa, seperti nama, alamat, dan umur. Program kemudian menginisialisasi dua variabel struct “mhs1” dan “mhs2” dengan nilai yang sesuai.

### 3. [tipe data koleksi]

#### Output:

#### Deskripsi Program:   
Program ini adalah contoh sederhana dalam bahasa C++ yang menggunakan array untuk menyimpan beberapa nilai dan kemudian mencetak nilai-nilai tersebut ke layar.

## Unguided 

### 1. [Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!]

#### Output:


Program tersebut merupakan contoh sederhana dalam bahasa C++ yang mendefinisikan dua fungsi untuk melakukan operasi matematika.

#### Full code Screenshot:



### 2. [Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya!]
•	Class 
Class adalah struktur data yang dapat menyimpan data bersama-sama dengan fungsi-fungsi atau metode yang beroperasi pada data tersebut. Penggunaan: Class digunakan untuk mewakili objek dalam pemrograman berorientasi objek (OOP). Objek adalah instance dari class, yang memiliki atribut dan metode yang didefinisikan dalam class. Pembentukan: Class dibentuk dengan menggunakan kata kunci class diikuti dengan nama class, diikuti oleh angkur kurung {} yang berisi atribut dan metode. Enkapsulasi: Class memungkinkan untuk menerapkan konsep enkapsulasi, yang berarti data (atribut) dan operasi (metode) yang berhubungan dengan data tersebut dibungkus bersama.
	
#### Output:


#### Deskripsi Program:
Program tersebut adalah contoh sederhana dalam bahasa C++ yang menggunakan class untuk merepresentasikan mahasiswa.

#### Full code Screenshot:


•	Struct
Struktur adalah tipe data yang ditentukan pengguna di C/C++. Struktur menciptakan tipe data yang dapat digunakan untuk mengelompokkan item dari tipe yang mungkin berbeda ke dalam satu tipe. 
Struktur data dapat dideklarasikan dalam C++ menggunakan sintaks. Dimana merupakan nama untuk tipe struktur, dapat berupa sekumpulan pengidentifikasi yang valid untuk objek yang memiliki tipe struktur ini. Di dalam kurung kurawal , terdapat daftar anggota data, masing-masing ditentukan dengan tipe dan pengidentifikasi yang valid sebagai namanya.

#### Output:


#### Deskripsi Program: 
Program di atas adalah contoh sederhana dari penggunaan struktur (struct) dalam bahasa pemrograman C++. Struktur pasien didefinisikan untuk menyimpan informasi tentang seorang pasien, termasuk nama, umur, dan diagnosa.


#### Full code Screenshot:


### 3. [Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.]

#### Output:

#### Deskripsi Program:
Program ini memberikan contoh sederhana penggunaan std::map dalam C++, yang memungkinkan kita untuk menyimpan dan mengakses data dengan menggunakan key yang ditetapkan.

#### Perbedaan array dengan map:
Array dan map memiliki perbedaan dalam hal tipe data dan struktur, ketersediaan kunci atau indeks, kecepatan pencarian, fleksibilitas, dan penggunaan yang optimal dalam situasi tertentu

#### Full code Screenshot:



## Kesimpulan
  Dalam pemrograman, tipe data merupakan konsep dasar yang digunakan  untuk  menentukan  jenis  data  yang  dapat  disimpan  dan  diolah   dalam   sebuah   program.   Pemilihan   tipe   data   yang   tepat   memiliki dampak signifikan terhadap performa dan akurasi algoritma (Adomavicius & Zhang, J. 2012; Dogan & Tanrikulu, Z. 013).
	Sebuah    konsep    yang    mungkin    terlihat    sederhana    pada    pandangan pertama, namun memiliki implikasi yang sangat luas dan mendalam  dalam  pemrograman  komputer.  Pemahaman  terkait  tipe  data  merupakan  fondasi  dari  semua  instruksi  dan  operasi  dalam pemrograman.  Ini  adalah  cara  bagaimana  program  mengenali  dan  memproses   berbagai   bentuk   data   -    dari   angka   dan   teks   hingga   keputusan  logis  dan  struktur  data  yang  lebih  kompleks.  Tipe  data  tidak hanya tentang penyimpanan; ini adalah tentang representasi dan interpretasi   nilai-nilai   dalam   sistem   komputasi.   Setiap   tipe   data   memiliki    aturan    dan    karakteristik    tertentu    yang    menentukan    bagaimana data tersebut disimpan, diakses, dan dimanipulasi.
	Definisi Tipe Data Tipe data adalah klasifikasi yang menentukan jenis nilai yang dapat  disimpan  dan  dioperasikan  oleh  suatu  variabel.   Dalam pemrograman, tipe data bukan hanya soal bagaimana data disimpan, tetapi  juga  bagaimana  data  tersebut  diinterpretasikan  dan  diproses oleh komputer. Setiap tipe data memiliki ciri khas, termasuk ukuran memori yang digunakan dan cara komputer melakukan operasi pada data  tersebut.  Pemilihan  tipe  data  yang  tidak  tepat  dapat menyebabkan masalah seperti penggunaan memori yang tidak efisien, kesalahan   dalam   perhitungan,   dan   kerentanan   dalam   keamanan   program.Tipe  data  primitif  seperti  integer,  float,  double,  char,  dan boolean  adalah  konsep  dasar  yang  ditemukan  dalam  hampir  semua  bahasa  pemrograman  (Sebesta,  2012).


## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.

