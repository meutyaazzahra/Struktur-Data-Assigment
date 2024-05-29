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

Graph merupakan suatu cabang ilmu yang memiliki banyak terapan. Banyak sekali struktur yang bisa direpresentasikan dengan graph dan banyak masalah yang dapat diselesaikan dengan bantuan graph. Seringkali, graph digunakan untuk merepresentasikan suatu jaringan. Misalkan, jaringan jalan raya dimodelkan graph dengan kota sebagai simpul (vertex/node) dan jalan yang menghubungkan setiap kotanya sebagai sisi (edge) yang bobotnya (weight) adalah Panjang dari jalan tersebut. Ada beberapa cara untuk menyimpan graph di dalam sistem komputer.
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
![Screenshot 2024-05-29 212639](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/d8465cea-c542-4d36-9dde-06404f9bb31b)
### Deskripsi Program:
Program ini ditulis dalam bahasa C++ dan bertujuan untuk menampilkan representasi graf yang menggambarkan hubungan antar simpul (node) melalui busur (edge) dengan bobot tertentu. Program ini mendefinisikan sebuah array `simpul` yang berisi tujuh string yang merepresentasikan nama-nama kota: Ciamis, Bandung, Bekasi, Tasikmalaya, Cianjur, Purwokerto, dan Yogyakarta. Selain itu, program mendefinisikan sebuah matriks 2D `busur` berukuran 7x7 yang menyimpan bobot antara simpul-simpul, di mana bobot ini menunjukkan jarak atau biaya antara dua kota. Jika nilai di matriks adalah 0, maka tidak ada hubungan langsung (busur) antara dua simpul tersebut.

Fungsi `tampilGraph` bertugas untuk menampilkan graf dengan menampilkan setiap simpul beserta semua simpul yang terhubung dengannya serta bobotnya. Fungsi ini menggunakan dua loop bersarang; loop pertama untuk mengiterasi setiap simpul, dan loop kedua untuk mengiterasi setiap busur dari simpul yang sedang diproses. Jika ada busur yang tidak bernilai 0, informasi tentang simpul tujuan dan bobot busur akan ditampilkan.

Fungsi `main` memanggil fungsi `tampilGraph` untuk menampilkan graf ke layar. Output yang dihasilkan menggambarkan graf dengan kota-kota sebagai simpul dan hubungan antar kota sebagai busur beserta bobotnya, seperti: "Ciamis : Bandung(7) Bekasi(8)", yang menunjukkan bahwa Ciamis terhubung dengan Bandung dengan bobot 7 dan Bekasi dengan bobot 8. Program ini secara keseluruhan memberikan visualisasi dari hubungan antar kota melalui representasi graf yang sederhana.
### 2. GUIDED 2

### Output : 
![Screenshot 2024-05-29 212738](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/c45a2f20-acf0-45cf-be85-d66f16087a65)

![Screenshot 2024-05-29 212754](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/aedc733e-1091-46ff-bedf-67ccce0bede6)

![Screenshot 2024-05-29 212806](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/b30a1abf-ff7f-47a3-b06b-24496ca32d89)

![Screenshot 2024-05-29 212825](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/1189049a-e8ca-4e59-81aa-35d56cd04935)

![Screenshot 2024-05-29 212838](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/d936d28b-486a-421e-aa59-09f90f87fbb4)
### Deskripsi Program :
Program ini adalah implementasi pohon biner dalam bahasa C++ yang mencakup berbagai operasi dasar seperti pembuatan pohon, penambahan node, pembaruan data node, penelusuran (traversal), dan penghapusan node. Pohon biner diwakili oleh struktur `Pohon` yang memiliki pointer ke anak kiri, anak kanan, dan parent. Program dimulai dengan menginisialisasi pohon dan membuat node akar. Node tambahan dapat dimasukkan sebagai anak kiri atau kanan dari node tertentu. Program juga menyediakan fungsi untuk mengubah data node, mengambil dan menampilkan data node tertentu, serta menampilkan informasi lengkap tentang node termasuk parent, sibling, dan anak-anaknya. Operasi penelusuran mencakup pre-order, in-order, dan post-order traversal. Program juga memiliki kemampuan untuk menghapus seluruh pohon atau subtree dari node tertentu dan menampilkan karakteristik pohon seperti ukuran, tinggi, dan rata-rata node per level. Pada fungsi `main`, contoh operasi-operasi ini dijalankan untuk menunjukkan bagaimana pohon biner dapat dimanipulasi dan diperiksa.
## Unguided 
### 1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.
#### Output:
![Screenshot 2024-05-29 213921](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/856026db-987a-4ce3-af95-352917e6cf2e)
### Deskripsi Program
Program ini ditulis dalam bahasa C++ dan berfungsi untuk membuat representasi graf dari sebuah kumpulan kota yang saling terhubung, lalu mencari jarak terpendek antara dua kota menggunakan algoritma Dijkstra. Program dimulai dengan meminta pengguna untuk memasukkan jumlah simpul (kota) dan nama-nama kota tersebut, kemudian membangun matriks adjacency yang menyimpan bobot (jarak) antara setiap pasangan kota. Setelah graf terbentuk, pengguna dapat memasukkan nama kota awal dan kota tujuan. Program kemudian menggunakan algoritma Dijkstra untuk menghitung jarak terpendek dari kota awal ke kota tujuan. Hasilnya ditampilkan sebagai jarak dalam kilometer, atau pesan bahwa jalur antara kota tersebut tidak ditemukan jika salah satu kota tidak ada dalam daftar. Program ini mencakup input pengguna, pembentukan graf, dan penerapan algoritma pencarian jalur terpendek, serta menampilkan hasilnya secara interaktif.
### 2.  Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan berikan fungsi tambahan untuk menampilkan node child dan descendant dari node yang diinputkan!

### Output
Pembuatan root
![Screenshot 2024-05-29 214144](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/176e4a17-2ba7-46bc-9c20-2be997cdd052)

Penambahan child
![Screenshot 2024-05-29 214236](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/3b629c1f-6bc9-49ff-90b7-ba417b8c48a5)
![Screenshot 2024-05-29 214310](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/3fbfb80f-b8f3-4b16-b5dd-d3ede0ff77e9)

Pengubahan data node
![Screenshot 2024-05-29 214348](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/fe03a73a-6447-4f21-a22d-686551dc4fb4)

Menampilkan data node
![Screenshot 2024-05-29 214416](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/d5c67a41-1b44-435c-a2d3-766cb7a09e12)

Mencari informasi suatu node
![Screenshot 2024-05-29 214453](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/94fc57a8-cc5c-4165-890e-d8d64f6f0058)

Pencetakan Tree

- pre order
![Screenshot 2024-05-29 214521](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/56003166-7fda-4014-901a-a8d92ae30e84)

- in order
![Screenshot 2024-05-29 214545](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/4b0fb5c6-f49f-45f8-aed1-7b218d874e2f)

- post order
![Screenshot 2024-05-29 214604](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/e2e706c6-d9a6-47ee-b2d2-1c371d1b3d7a)

Penghapusan subtree dari root
![Screenshot 2024-05-29 214637](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/140cbd3d-47f9-4d74-83b0-b714ef403631)

### Deskripsi Program
Program ini adalah implementasi dari sebuah pohon biner dalam bahasa C++. Pohon biner tersebut dibuat dan dimanipulasi melalui berbagai fungsi yang terdapat dalam kelas `Tree`. Program ini memungkinkan pengguna untuk membuat root, menambahkan anak kiri dan kanan, mengubah data node, menampilkan data node, dan mencari node dalam pohon. Selain itu, pengguna dapat melakukan penelusuran pre-order, in-order, dan post-order, serta menghapus subtree atau seluruh pohon. Program juga bisa menampilkan karakteristik pohon seperti ukuran dan tinggi pohon. Pengguna berinteraksi dengan pohon melalui menu pilihan yang tampil di konsol, memungkinkan berbagai operasi dilakukan secara interaktif. Program ini merupakan contoh sederhana dari struktur data pohon biner yang memanfaatkan pointer untuk mengelola hubungan antar node.
## Kesimpulan
Kesimpulannya, graph dan tree adalah dua struktur data penting yang digunakan untuk merepresentasikan hubungan antara objek dalam berbagai konteks. Graph terdiri dari node (vertex) yang dihubungkan oleh garis (edge), dan dapat merepresentasikan jaringan seperti jaringan jalan raya dengan kota sebagai node dan jalan sebagai edge. Graph dapat disimpan menggunakan linked list, matriks, atau kombinasi keduanya, tergantung pada struktur dan algoritma yang digunakan.

Dalam graph, istilah-istilah penting meliputi vertex (titik), edge (garis penghubung), adjacent (ketetanggaan), weight (bobot), path (jalur), dan cycle (siklus). Graph banyak diterapkan dalam menyelesaikan berbagai masalah yang melibatkan hubungan antar objek.

Tree adalah struktur data non linier yang menyerupai linked list namun memiliki cabang, sehingga cocok untuk merepresentasikan struktur hierarkis. Dalam tree, urutan elemen tidak penting, dan jika diperlukan, struktur data linier seperti linked list atau stack dapat digunakan. Tree digunakan untuk menggambarkan hubungan hierarkis dan memiliki berbagai aplikasi dalam bidang ilmu komputer dan lainnya.
## Referensi
[1] Mulyana, A., et al., Cara Mudah Mempelajari Algoritma dan Struktur Data. Edisi Pertama. Yogyakarta : DIVA Press, 2021
[2] Dr. Joseph Teguh Santoso, S. K. (2011). STRUKTUR DATA dan ALGORTIMA (Bagian 1). YAYASAN PRIMA AGUS TEKNIK.
