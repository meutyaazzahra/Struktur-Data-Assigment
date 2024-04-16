# <h1 align="center">Laporan Praktikum Modul 5 - Hash Table</h1>
<p align="center">Meutya Azzahra Efendi - 2311102166</p>
<p align="center">IF - 11 - E</p>

## Dasar Teori

### Pengertian Hash Table
Fungsi hash digunakan untuk mengubah kunci menjadi indeks. Idealnya, fungsi hash harus memetakan setiap kunci yang mungkin ke indeks slot yang unik, tetapi sulit untuk dicapai dalam praktiknya. 
Diberikan kumpulan elemen, fungsi hash yang memetakan setiap item ke dalam slot unik disebut sebagai fungsi hash sempurna. Jika kita tahu elemen dan koleksinya tidak akan pernah   berubah,  maka dimungkinkan untuk membangun fungsi hash yang sempurna. Sayangnya, mengingat kumpulan elemen yang berubah-ubah, tidak ada cara sistematis untuk membangun fngsi hash yang sempurna. Untungnya, kita tidak memerlukan fungsi hash yang sempurna untuk tetap mendapatkan efisiensi kinerja

### Bagaimana memilih fungsi hash?
Masalah dasar yang terkait dengan pembuatan hash table adalah:
-	Fungsi hash yang efisien harus dirancang sehingga mendistribusikan nilai indeks dari ojek yang disisipkan secara seragam di seluruh tabel
-	Flgoritma resolusi tabrakan yang efisien harus dirancang sedemikian rupa sehingga menghitung indeks alternatif untuk kunci yang indeks hashnya sesuai dengan lokasi yang sebelumnya dimasukkan dalam hash table
-	kita yang memilih fungsi hash yang dapat dihitung dengan cepat, mengembalikan nilai dalam rentang lokasi di tabel kita dan meminimalkan tabrakan

### Karakteristik Fungsi Hash yang Baik
-	 minimalkan tabrakan
-	 mudah dan cepat untuk menghitung
-	 distribusikan nilai kunci secara merata di hash table
-	 gunakan semua informasi yang terjadi di kunci
-	 memiliki factor beban tinggi untuk satu set kunci tertentu

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
a. Tampilan Menu:
![Screenshot 2024-04-03 102402](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/ccd51665-fe63-4dd6-bf21-74f85d09d01b)

b. Tampilan Operasi Tambah:
![Screenshot 2024-04-03 104945](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/b384d095-22f4-4b19-bbf4-83c38f8b35f1)
![Screenshot 2024-04-03 105020](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/974c306d-59cb-46b1-a6d3-b33bef7b2df3)
![Screenshot 2024-04-03 105051](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/4ac66fbe-5eb0-49a4-ba0b-7667f7f34362)
![Screenshot 2024-04-03 105125](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/bfffec38-8810-4bfb-97d4-c369fc36ac5a)
![Screenshot 2024-04-03 105158](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/fac64b23-000d-422f-805a-9c5053758a5c)
![Screenshot 2024-04-03 105248](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/5944dec6-89ba-425f-a1de-fc9f20783890)

c. Tampilan Operasi Ubah:
![Screenshot 2024-04-03 105324](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/496490ab-a44c-45e0-9283-2820199282e5)
![Screenshot 2024-04-03 105405](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/1538f539-da6f-480b-86ab-754525c6d008)
![Screenshot 2024-04-03 105527](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/30d1230c-b343-48c7-9156-ebbb68c18515)

d. Tampilan Operasi Hapus:
![Screenshot 2024-04-03 105546](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/d5fe4703-f731-4f21-93ac-c70f3d7e2ebb)
![Screenshot 2024-04-03 105602](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/9602bd39-e59d-493a-815c-2fae07c36c1e)
![Screenshot 2024-04-03 105622](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/915a8d58-7267-4499-a0c7-c50f61f92649)

e. Tampilan Operasi Tampil Data
![Screenshot 2024-04-03 105642](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/6db8d055-570f-438d-8f59-b2eb4a14d546)

### 2. Setelah membuat menu, masukkan data sesuai urutan berikut, lalu tampilkan data yang telah dimasukkan. (Gunakan insert depan, belakang, atau tengah)
![image](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/a75d98dc-c245-4dff-920c-28226ce5f432)

#### Output:
![Screenshot 2024-04-03 111147](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/816fb09e-2608-4743-abb3-a7f9357511ec)
![Screenshot 2024-04-03 111205](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/d16a10c6-dc94-4810-96db-440cca928b1f)
![Screenshot 2024-04-03 111223](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/43cc1b72-7cc4-4898-877a-c09fe1a7c6c4)
![Screenshot 2024-04-03 111258](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/7b3960ed-d4e2-432c-9eab-c1cf0f5df190)
![Screenshot 2024-04-03 111324](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/f424d478-dcd1-408f-9a57-bda2190b5323)
![Screenshot 2024-04-03 111352](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/a351ae65-086c-4f04-b5e7-07df0bb93449)
![Screenshot 2024-04-03 111411](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/b373d5cb-ea3d-4d3f-a9a2-9b6150ee6fae)
![Screenshot 2024-04-03 111434](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/0a0ad20b-45c8-4b7b-ae3f-a5fda5704181)
![Screenshot 2024-04-03 111452](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/287efec6-3124-461c-bb9d-e8c6c6bc4a7d)
![Screenshot 2024-04-03 111513](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/70bb4fe7-8754-49a6-82bf-597fcb37c64a)
![Screenshot 2024-04-03 111543](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/319aa8cd-e254-4ce2-9dfd-36481c99e82c)

### 3. Lakukan perintah berikut:
a. Tambahkan data berikut diantara Farrel dan Dennis:
   (Wati  2330004)
![Screenshot 2024-04-03 112258](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/1366c127-d84a-4a72-b339-db4b69b20871)

b. Hapus data Dennis
![Screenshot 2024-04-03 112609](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/7c90aa0a-1a20-42b2-b172-49d44a99bdfb)

c. Tambahkan data berikut di awal:
   (Owi  2330000)
![Screenshot 2024-04-03 112702](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/2984c898-acdd-49f2-a903-eda9dd15a43d)

d. Tambahkan data berikut di akhir:
   (David 23300100)
![Screenshot 2024-04-03 112740](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/b43fc24e-b924-4f1f-a9b0-8a12bd7f02d6)

e. Ubah data Udin menjadi data berikut:
   (Idin  23300045)
![Screenshot 2024-04-03 112909](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/ddf76e9d-f8c4-49ff-b66e-ec044f516b51)

f. Ubah data terakhir menjadi berikut:
   (Lucy  233000101)
![Screenshot 2024-04-03 113245](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/a35d0810-7815-48be-8028-76fca67dcd41)

g. Hapus data awal
![Screenshot 2024-04-03 113320](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/dc2b7ca7-1058-4fcc-a180-44493343238d)

h. Ubah data awal menjadi berikut:
   (Bagas  2330002)
![Screenshot 2024-04-03 113356](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/c47a5527-08cf-4261-ad9c-b601bb1597d3)

i. Hapus data akhir
![Screenshot 2024-04-03 113425](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/1c5df336-fb7e-4b11-b33a-052df04f8c53)

j. Tampilkan seluruh data
![Screenshot 2024-04-03 113449](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/8dd9e234-1168-4eb0-82f0-d642056603b9)

## Deskripsi Program
Program ini adalah implementasi dari linked list non-circular untuk menyimpan data mahasiswa. Setiap node dalam linked list ini berisi informasi tentang nama dan NIM seorang mahasiswa. Program ini menyediakan berbagai fungsi untuk melakukan operasi-operasi pada linked list, seperti menambahkan data di depan, di belakang, atau di tengah, mengubah data di depan, di belakang, atau di tengah, menghapus data di depan, di belakang, atau di tengah, menghapus seluruh data dalam linked list, serta menampilkan seluruh data yang tersimpan dalam linked list. Pengguna dapat memilih operasi yang ingin dilakukan melalui menu yang disediakan. Program akan terus berjalan dan menunggu input pengguna sampai pengguna memilih untuk keluar (pilihan 0).

## Kesimpulan
Dari penjelasan di atas, dapat disimpulkan bahwa:

1. Circular Linked List adalah jenis linked list di mana setiap node terhubung membentuk sebuah siklus. Ini berbeda dari singly linked list yang memiliki node terakhir yang menunjuk ke null.
2. Setiap node dalam Circular Linked List memiliki pointer next dan nilai elemen, mirip dengan singly linked list.
3. Circular Linked List tidak memiliki kepala (head) atau ekor (tail) seperti pada singly linked list. Node-node dalam circular linked list dihubungkan menjadi sebuah siklus, sehingga jika kita menelusuri node-node dengan mengikuti pointer next, kita akan kembali ke node awal.
4. Meskipun circular linked list tidak memiliki awal atau akhir yang jelas, kita tetap memerlukan beberapa node yang ditandai sebagai node khusus, yang disebut sebagai kursor, untuk menelusuri list.
5. Dalam sebuah circular list, terdapat dua posisi penting: "depan" (elemen yang segera mengikuti node yang dirujuk oleh kursor) dan "belakang" (elemen yang dirujuk oleh kursor).
6. Circular Linked List dapat diakses melalui node yang ditandai sebagai kepala (head).
7. Untuk menghitung jumlah node dalam Circular Linked List, list harus dilalui dari node yang ditandai sebagai kepala (head) dengan bantuan pointer, dan menghentikan perhitungan saat kembali ke node awal.
8. Dalam Non-circular Linked List, setiap node memiliki pointer ke node berikutnya dan sebelumnya, dan pembentukan node baru tidak membentuk siklus seperti pada circular linked list.

Kesimpulannya, Circular Linked List adalah struktur data yang berguna untuk memodelkan situasi yang memerlukan akses siklik, dan dapat diakses melalui kepala (head) serta memiliki dua posisi penting yaitu depan dan belakang. Dalam penghitungan jumlah node, list dilalui dari kepala dan dihentikan ketika kembali ke node awal. Dibandingkan dengan Non-circular Linked List, Circular Linked List memiliki sifat khusus yang memungkinkan siklus antara node-node dalam strukturnya.

## Referensi
[1] Michael T. Goodrich, R. T. (2011). Data Structures & Algorithms in C++. Wiley.

[2] Dr. Joseph Teguh Santoso, S. K. (2011). STRUKTUR DATA dan ALGORTIMA. YAYASAN PRIMA AGUS TEKNIK.

[3] ARRAFFI, A. (2019, Maret 30). PENGERTIAN LINIER DALAM STRUKTUR DATA MAJEMUK. Retrieved from OSF.
