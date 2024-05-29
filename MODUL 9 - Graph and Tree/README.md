# <h1 align="center">Laporan Praktikum Modul 9 - Graph and Tree</h1>
<p align="center">Meutya Azzahra Efendi - 2311102166</p>
<p align="center">IF - 11 - E</p>

## Dasar Teori

### Pengertian Graph
Graph adalah kumpulan node (simpul) di dalam bidang dua dimensi yang dihubungkan dengan sekumpulan garis (sisi). Graph dapat digunakan untuk merepresentasikan objek-objek diskret dan hubungan antara objek-objek tersebut. Representasi visual dari graph adalah dengan menyatakan objek sebagai node, bulatan, atau titik (vertex), sedangkan hubungan antara objek dinyatakan dengan garis (edge). 

G = (V, E)
Keterangan:
-	G  = Graph
-	V  = simpul atau titik (vertex atau  node)
-	E = busur atau edge, atau arc
  
Jalur pada graph dinotasikan sebagai berikut:

P = (V0, V1, … , Vn)
Keterangan:
-	P  = jalur
-	Vi  = titik jalur
-	n = jumlah titik jalur

graph merupakan suatu cabang ilmu yang memiliki banyak terapan. Banyak sekali struktur yang bisa direpresentasikan dengan graph dan banyak masalah yang dapat diselesaikan dengan bantuan graph. Seringkali, graph digunakan untuk merepresentasikan suatu jaringan. Misalkan, jaringan jalan raya dimodelkan graph dengan kota sebagai simpul (vertex/node) dan jalan yang menghubungkan setiap kotanya sebagai sisi (edge) yang bobotnya (weight) adalah Panjang dari jalan tersebut. Ada beberapa cara untuk menyimpan graph di dalam sistem komputer.
Struktur data bergantung pada struktur graph dan algortima yang digunakan untuk memanipulasi graph. Secara teori, salah satu dari keduanya dapat dibedakan antara struktur linked list dan matrikss (array dimensi 2), tetapi dalam penggunaannya, struktur terbaik yang sering digunakan adalah kombinasi keduanya.

### Istilah pada Graph
1.	Vertex

Yaitu himpunan node/titik pada graph

2.	Edge

Yaitu himpunan garis yang menghubungkan tiap node/vertex

3.	Adjacent

Dua buah titik dikatakan berdekatan (adjacent) jika keduanya terhubung dengan sebuah sisi

4.	Weight

Sebuah graph G = (V, E) disebut sebuah graph berbobot (weight graph) apabila terdapat sebuah fungsi bobot bernilai W pada himpunan E

5.	Path

Adalah jalur dengan setiap vertex berbeda.

6.	Cycle atau Circuit

Merupakan lintasan yang berawal dan berakhir pada simpul yang sama
### Jenis-jenis Graph
1.	Graph Tak Berarah (Undirected Graph atau Nondirected Graph)

Pada jenis graph ini, urutan simpul dalam sebuah busur tidak dipentingkan. Misal, busur e1 dapat disebut busur AB atau BA.
![WhatsApp Image 2024-05-29 at 20 49 52_f0d30323](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/41965543-b927-44ae-b996-8849d3fb4e2e)

3.	Graph Berarah (Directed Graph)

Pada jenis graph ini, urutan simpul mempunyai arti. Misal busur AB adalah e1 sedangkan busur BA adalah e8.
![WhatsApp Image 2024-05-29 at 20 49 52_404c651b](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/06f94587-ed24-40d3-8f0a-c92017ea49a5)

4.	Graph berbobot (Weighted Graph)

Jika setiap busur mempunyai nilai yang menyatakan hubungan antara dua buah simpul, maka busur tersebut dinyatakan memiliki bobot. Bobot sebuah busur dapat menyatakan Panjang sebuah jalan dari dua buah titik, jumlah rata-rata kendaraan per hari melalui sebuah jalan, dll.
![WhatsApp Image 2024-05-29 at 20 49 52_c7ec6c74](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/51a8875e-8a87-481e-a19f-cafc1871c957)

### Representasi Graph dengan Matriks (Array Dimensi 2)
Dalam pemrograman, agar data yang ada dalam graph dapat diolah, maka graph harus dinyatakan dalam suatu struktur data yang daoat mewakili graph tersebut. Dalam hal ini, graph perlu direpresentasikan ke dalam bentuk array dan dimensi yang sering disebut matrix.
Lintasan terpendek merupakan salah satu dari masalah yang dapat diselesaikan dengan graph. Jika diberikan sebuah graph berbobot, masalah lintasan terpendek adalag bagaimana kita mencari sebuah jalur pada graph yang meminimalkan jumlah bobot sisi pembentuk jalur tersebut.
Terdapat beberapa macam persoalan lintasan terpendek, antara lain:
1.	Lintasan terpendek antara dua buah simpul tertentu (a pair shortest path)
2.	Lintasan terpendek antara semua pasangan simpul (all pair shortest path)
3.	Lintasan terpendek dari simpul tertentu ke semua simpul yang lain (single-source shortest path)
4.	Lintasan terpendek antara dua buah simpul yang melalui beberapa simpul tertentu (intermediate shortest path)

### Pengertian Tree
Tree adalah struktur data yang mirip dengan linked list tetapi alih-alih setiap simpul menunjuk hanya ke simpul berikutnya secara linier, setiap simpul menunjuk ke sejumlah simpul. Tree adalah contoh struktur data non linier. Struktur tree adalah cara untuk merepresentasikan sifat hierarkis dari suatu struktur dalam bentuk grafik.
Pada tree ADT (Abstract Data Type), urutan elemen tidak penting. Jika kita membutuhkan informasi pemesanan, struktur data linier seperti linked list, stack, dll dapat digunakan.

### Istilah pada Tree
![WhatsApp Image 2024-05-28 at 22 53 11_6addfe1a](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/7e87e89e-2aa8-4d3c-ad3d-f98b36b570ed)
-	Akar pohon adalah simpul tanpa orang tua. Paling banya ada satu simpul akar dalam sebuah pohon (simpul A dalam contoh di atas)
-	Tepi mengacu pada tautan dari induk ke anak (semua tautan dalam gambar)
-	Sebuah simpu tanpa anak disebut simpul daun (E, J, K, H, dan I)
-	Anak dari orang tua yang sama disebut saudara kandung (B, C, D, adalah saudara dari A, dan E, F, adalah saudara dari B)
-	Sebuah node p adalah ancestor dari node q jika terdapat sebuah path dari root ke q dan p muncul pada path tersebut. Simpul q disebut turunan dari p. Misalnya, A, C, dan G adalah nenek moyang dari if
-	Himpunan semua node pada kedalaman tertentu disebut level pohon (B, C, dan D adalah level yang sama). Node akar berada pada level nol.
![WhatsApp Image 2024-05-28 at 22 53 26_2f31c682](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/9f692ff4-e86d-4511-aa7a-a3dd531adbf6)
-	Kedalaman suatu simpul adalah Panjang lintasan dari akar ke simpul tersebut (kedalaman G adalah 2, A-C-G)
-	Ketinggian suatu simpul adalah Panjang lintasan dari simpul tersebut ke simpul terdalam. Ketinggian tree adalah Panjang jalan dari akar ke simpulterdalam di tree. Sebuah tree (berakar) dengan hanya satu simpul (akar) memiliki ketinggian nol. Pada contoh sebelumnya, tinggi B adalah 2 (B-F-J)
-	tinggi tree adalah tinggi maksimum di antara semua simpul di pohon dan kedalaman pohon adalah kedalaman maksimum di antara semua simpul di tree. Tetapu untuk node individu, kita mungkin mendapatkan hasil yang berbeda.
-	Ukuran dari sebuah simpukl adalah jumlah keturunan yang dimilikinya termasuk dirinya sendiri (ukuran dari sub pohon C adalah 3)
-	Jika setiap simpul dalam sebuah pohon hanya memiliki satu anak (kecuali simpul daun) maka kita menyebutnya pohon miring. Jika setiap simpul hanya memiliki anak kiri maka kita menyebutnya pohon miring kiri. Demikian pula, setiap simpul hanya memiliki anak kanan maka kita menyebutnya pohon miring kanan.
![WhatsApp Image 2024-05-28 at 22 54 15_d399d306](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/d6ef5b29-df3c-4430-bc53-d87dafb6728e) 


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
