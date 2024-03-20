# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Meutya Azzahra Efendi</p>

## Dasar Teori
A. Pengertian Array


	Array atau larik sendiri didefinisikan sebagai pemesanan alokasi memori berurutan. Definisi ini kurang tepat, karena terjadu kerancuan antara struktur data dan representasinya. Memang benar, array hampir selalu di implementasikan menggunakan memori berurutan tapi tidak selalu demikian. Semua elemen array bertipe sama. Array cocok untuk organisasi kumpulan data homogen yang ukuran atau jumlah elemen maksimumnya telah diketahui dari awal. Homogen adalah bahwa setiap elemen dari sebuah array tertentu haruslah mempunyai tipe data yang sama. Dari pengertian struktur dan pengertian array di atas, maka dapat ditarik kesimpulan bahwa struktur array adalah kumpulan elemen-elemen data yang digabungkan menjadi suatu kesatuan yang memiliki tipe homogen (sama).

B. Karakteristik Array
  a. Mempunyai Batasan dari pemesanan alokasi memori (bersifat statis)
  b. Mempunyai tipe data sama (bersifat homogen)
  c. Dapat diakses secara acak

C. Penggunaan Array
  1. Array digunakan untuk suatu database, contohnya table
  2. Array digunakan untuk operasi matematika seperti vektor
  3. Digunakan dalam bentuk struktur data lain, contohnya list

D. Bentuk-bentuk Array
  1. Array Satu Dimensi
     Array satu diensi yaitu kumpulan elemen-elemen identic yang ghanya terdiri dari satu baris atau hanya satu kolom saja alamat penyimpanan data (indeks). Elemen-elemen tersebut memiliki tipe data yang sama, tetapi isi dari elemen tersebut boleh berbeda
  3. Array Dua Dimensi
     Array dua dimensi sering digambarkan sebagai sebuah matriks, merupakan perluasan dari array satu dimensi. Jika array satu dimensi hanya terdiri dari sebuah baris dan beberapa kolom elemen, maka array dua dimensi terdiri dari beberapa baris dan beberapa kolom elemen bertipe sama. 
  5. Array Multi Dimensi
     Array ini seperti array dua diensi tetapi dapat memiliki urutan yang lebih besar. Array ini digunakan untuk merepresentasikan array dengan dimensi yang lebih dari dua dimensi, contohnya array tiga dimensi, array empat dimensi, dan seterusnya.

## Guided 

### 1. [program input array tiga dimensi]

#### Output:
<img width="960" alt="Screenshot 2024-03-19 195410" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/c87fb4bd-8e4c-4d2d-af6d-a6ae406f540a">

<img width="960" alt="Screenshot 2024-03-19 195447" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/1ecdd3d3-2e83-4cf2-b7cc-8c3b75487e4a">

#### Deskripsi Program:
Program di atas adalah sebuah program dalam bahasa C++ yang mengimplementasikan array tiga dimensi. Program ini meminta pengguna untuk memasukkan nilai ke dalam array tiga dimensi tersebut, kemudian mencetak nilai-nilai tersebut ke layar. Setelah nilai-nilai dimasukkan dan dicetak, program juga mencetak ulang nilai-nilai tersebut dalam format array tiga dimensi yang lebih mudah dibaca.

### 2. [program mencari nilai maksimal pada array]

#### Output:
<img width="960" alt="Screenshot 2024-03-19 200002" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/4d30676a-967e-45ba-8963-46565f116d09">

#### Deskripsi Program:
Program di atas adalah sebuah program dalam bahasa C++ yang bertujuan untuk mencari nilai maksimum dari sebuah array yang diisi oleh pengguna dan mencetak nilai maksimum beserta indeksnya.

## Unguided 

### 1. [Buatlah program untuk menampilkan output seperti berikut dengan data yang diinputkan user!]

#### Output:
<img width="960" alt="Screenshot 2024-03-19 200936" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/c3fd17fb-4698-45e2-98cc-1793c59a43e6">

#### Deskripsi Program:
Program tersebut merupakan sebuah program bahasa C++ yang melakukan hal berikut:
1. Meminta pengguna untuk memasukkan 10 bilangan secara berurutan
2. Memproses array bilangan yang dimasukkan pengguna
3. Mencari bilangan genap dari array yang dimasukkan dan menampilkannya.
4. Mencari bilangan ganjil dari array yang dimasukkan dan menampilkannya.

### 2. [Buatlah program input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!]
	
#### Output:

<img width="960" alt="Screenshot 2024-03-19 201739" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/bac2f8ef-27da-4928-8291-fe16a27bb63d">

<img width="960" alt="Screenshot 2024-03-19 201751" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/a26af463-8cc3-4189-9211-0c7581fbe094">

<img width="960" alt="Screenshot 2024-03-19 201805" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/f2a13449-d14d-4ca5-968e-3da34402c8de">

<img width="960" alt="Screenshot 2024-03-19 201827" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/ea0ab456-2da4-40cc-8681-0695ea7ba960">

#### Deskripsi Program:
Program di atas adalah program dalam bahasa C++ yang memungkinkan pengguna untuk memasukkan elemen-elemen ke dalam matriks tiga dimensi dan kemudian mencetak matriks tersebut.

### 3. [Buatlah program menu untuk mencari nilai maksimum, minimum, dan nilai rata-rata dari suatu array dengan input yang dimasukkan user!]

#### Output:
<img width="960" alt="Screenshot 2024-03-19 202651" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/e422ac60-45b1-4ba0-bed6-678a580ea571">

<img width="960" alt="Screenshot 2024-03-19 202710" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/84728ecd-cbe9-49d5-957f-969c34b1ee26">

<img width="960" alt="Screenshot 2024-03-19 202729" src="https://github.com/meutyaazzahra/Struktur-Data-Assigment/assets/161669000/13a1e0c2-7d5b-40c2-8b6b-64b359cddcb8">

#### Deskripsi Program:
Program di atas memungkinkan pengguna untuk memasukkan elemen-elemen ke dalam array dan kemudian memilih operasi apa yang ingin dilakukan pada array tersebut, yaitu mencari nilai maksimum, minimum, atau rata-rata dari elemen-elemennya.

## Kesimpulan
  Array adalah kumpulan elemen data dengan tipe yang sama yang disusun secara berurutan. Karakteristiknya meliputi batasan ukuran yang statis, tipe data homogen, dan akses acak. Digunakan untuk menyimpan data terstruktur seperti dalam database, operasi matematika seperti vektor, dan dalam struktur data lain seperti list. Bentuknya dapat berupa satu dimensi (baris atau kolom), dua dimensi (matriks), atau multi dimensi.

## Referensi
[1] LESTARI, K. (2019). STATIS ARRAY. OSFPRETAK, 5-7.



