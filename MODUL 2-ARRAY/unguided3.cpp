#include <iostream>
#include <climits>
#include <iomanip>

using namespace std;

int main() {
    int n;

    // Meminta pengguna untuk memasukkan ukuran array
    cout << "Masukkan jumlah array: ";
    cin >> n;

    // Deklarasi array dengan ukuran yang dimasukkan pengguna
    int arr[n];

    // Input elemen array
    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Array ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    // Mencari nilai maksimum, minimum, dan rata-rata
    int max_arr = INT_MIN;
    int min_arr = INT_MAX;
    int mean = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max_arr) {
            max_arr = arr[i];
        }
        if (arr[i] < min_arr) {
            min_arr = arr[i];
        }
        mean += arr[i];
    }
    double average = static_cast<double>(mean) / n;

    // Menampilkan nilai maksimum, minimum, dan rata-rata
    cout << "\nNilai maksimum: " << max_arr << endl;
    cout << "Nilai minimum: " << min_arr << endl;
    cout << "Nilai rata-rata: " << fixed << setprecision(2) << average << endl;

    return 0;
}