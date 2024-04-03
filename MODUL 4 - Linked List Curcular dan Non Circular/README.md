# <h1 align="center">Laporan Praktikum Modul 4 - Linked List Circular dan Non Circular</h1>
<p align="center">Meutya Azzahra Efendi - 2311102166</p>
<p align="center">IF - 11 - E</p>

## Dasar Teori

### Circular Linked List
Sebuah circularly linked list memiliki jenis node yang sama dengan sebuah singly linked list. Artinya, setiap node dalam circularly linked list memiliki pointer next dan nilai elemen. Namun, daripada memiliki kepala (head) atau ekor (tail), node-node dari circularly linked list dihubungkan menjadi sebuah siklus. Jika kita menelusuri node-node dari circularly linked list dari mana pun dengan mengikuti pointer next, pada akhirnya kita akan mengunjungi semua node dan kembali ke node dari mana kita mulai. Meskipun circularly linked list tidak memiliki awal atau akhir, kita tetap memerlukan beberapa node yang ditandai sebagai node khusus, yang kita sebut sebagai kursor. Node kursor memungkinkan kita untuk memiliki tempat awal jika kita perlu menelusuri circularly linked list. Ada dua posisi yang penting dalam sebuah circular list. Yang pertama adalah elemen yang dirujuk oleh kursor, yang disebut sebagai belakang, dan elemen yang segera mengikuti ini dalam urutan siklik, yang disebut sebagai depan. Meskipun mungkin terdengar aneh untuk memikirkan sebuah circular list memiliki depan dan belakang, perhatikan bahwa, jika kita memotong link antara node yang dirujuk oleh kursor dan penerus langsung dari node ini, hasilnya adalah sebuah singly linked list dari node depan hingga node belakang.[1]
![Screenshot 2024-04-03 093633](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/89baf619-fb17-4f6b-a32b-b8ee71e00214)

## Menghitung Node dalam Circular Linked List
![Screenshot 2024-04-03 115131](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/15f3dc7a-25e4-4b5a-bcf6-d470c4f2d0d9)
Circular Linked List dapat diakses melalui node yang ditandai kepala (head). Untuk menghitung node, list harus dilalui dari node yang ditandai head dengan bantuann arus node dummy dan menghentikan perhtungan saat arus mencapai node awal. Jika daftar kosong, head akan menjadi NULL dan dalam hal ini set count = 0. Jika tidak, setel pointer saat ini ke node pertama san terus menghitung sampai pointer saat ini mencapat node awal. [2]

### Non Circular Linked List
Setiap node pada linked list mempunyai field yang berisi data dan pointer ke node berikutnya dan ke node sebelumnya. Untuk pembentukan node baru, mulanya pointer next dan prev akan menunjuk ke nilai NULL. Selanjutnya pointer prev akan menunjuk ke node sebelumnya dan pointer next akan menunjuk ke node selanjutnya pada list. [3]
   
## Guided 

### 1. Linked List Circular

#### Output :
![Screenshot 2024-04-03 094906](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/9ee11e9d-391d-494b-82f2-de1ce6c2cb09)

### Deskripsi Program:
Program ini adalah implementasi dari circular linked list dalam bahasa C++. Program ini memiliki fungsi-fungsi dasar untuk memanipulasi linked list seperti menambahkan elemen di depan, di belakang, atau di tengah, menghapus elemen di depan, di belakang, atau di tengah, menghitung jumlah elemen dalam linked list, dan menampilkan isi linked list. Struktur data linked list ini diatur sedemikian rupa sehingga setelah elemen terakhir ada, ia akan menunjuk kembali ke elemen pertama, membentuk lingkaran. Program dilengkapi dengan fungsi-fungsi untuk menginisialisasi linked list, memeriksa apakah linked list kosong, dan membersihkan linked list dari elemen-elemen yang ada. Pada bagian `main()`, terdapat contoh penggunaan fungsi-fungsi tersebut untuk menambah, menghapus, dan menampilkan elemen-elemen dalam linked list.

### 2. Linked List Non Circular

#### Output :
![Screenshot 2024-04-03 100622](https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/2eeef502-5072-4993-a964-7a3ec0811460)

### Deskripsi Program:
Program ini adalah implementasi dari linked list non-circular dalam bahasa C++. Linked list ini terdiri dari serangkaian simpul yang saling terhubung, di mana setiap simpul memiliki data integer dan pointer ke simpul berikutnya dalam urutan. Program ini menyediakan fungsi-fungsi dasar untuk memanipulasi linked list seperti menambah, menghapus, dan mengubah elemen-elemen dalam linked list. Fungsi-fungsi ini mencakup penambahan elemen di depan dan di belakang, penambahan elemen di posisi tengah, penghapusan elemen di depan, di belakang, dan di posisi tengah, serta pengubahan nilai elemen di depan, di belakang, dan di posisi tengah. Pada bagian `main()`, terdapat contoh penggunaan fungsi-fungsi tersebut untuk melakukan operasi-operasi tersebut pada linked list.

## Unguided 
Buatlah program menu Linked List Non Circular untuk menyimpan Nama dan NIM Mahasiswa, dengan menggunakan input dari user.

### 1. Buatlah menu untuk menambahkan, mengubah, menghapus, dan melihat Nama dan NIM Mahasiswa.

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
