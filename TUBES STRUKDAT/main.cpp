#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <iomanip>
#include <ctime>

using namespace std;

// Struktur untuk node linked list menu
struct MenuItem {
    string name;
    float price;
    MenuItem* next;
};

// Fungsi untuk menambah item menu ke linked list
void addMenuItem(MenuItem*& head, const string& name, float price) {
    MenuItem* newItem = new MenuItem{name, price, nullptr};
    if (!head) {
        head = newItem;
    } else {
        MenuItem* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newItem;
    }
}

// Fungsi untuk menampilkan menu
void displayMenu(MenuItem* head) {
    MenuItem* temp = head;
    int num = 1;

    cout << "\nMENU" << endl;
    cout << "A. APPETIZERS" << endl;
    for (int i = 0; i < 3 && temp; ++i, temp = temp->next) {
        cout << num << ". " << temp->name << " - Rp" << fixed << setprecision(2) << temp->price << endl;
        num++;
    }

    cout << "\nB. MAINS" << endl;
    for (int i = 0; i < 5 && temp; ++i, temp = temp->next) {
        cout << num << ". " << temp->name << " - Rp" << fixed << setprecision(2) << temp->price << endl;
        num++;
    }

    cout << "\nC. SALAD" << endl;
    for (int i = 0; i < 3 && temp; ++i, temp = temp->next) {
        cout << num << ". " << temp->name << " - Rp" << fixed << setprecision(2) << temp->price << endl;
        num++;
    }

    cout << "\nD. SOUP" << endl;
    for (int i = 0; i < 3 && temp; ++i, temp = temp->next) {
        cout << num << ". " << temp->name << " - Rp" << fixed << setprecision(2) << temp->price << endl;
        num++;
    }

    cout << "\nE. DESSERT" << endl;
    for (int i = 0; i < 3 && temp; ++i, temp = temp->next) {
        cout << num << ". " << temp->name << " - Rp" << fixed << setprecision(2) << temp->price << endl;
        num++;
    }

    cout << "\nE. DRINKS" << endl;
    for (int i = 0; i < 5 && temp; ++i, temp = temp->next) {
        cout << num << ". " << temp->name << " - Rp" << fixed << setprecision(2) << temp->price << endl;
        num++;
}
}
// Struktur untuk reservasi
struct Reservation {
    string name;
    int numPeople;
    string time;
    unordered_map<string, int> order; // Menggunakan unordered_map untuk menyimpan pesanan dan jumlahnya
};

// Fungsi untuk menambah pesanan ke unordered_map order
void addOrder(Reservation& reservation, const string& item, int quantity) {
    reservation.order[item] += quantity;
}

// Fungsi untuk menampilkan pesanan
void displayOrder(const Reservation& reservation) {
    cout << "\nPesanan untuk " << reservation.name << " pada waktu " << reservation.time << ":" << endl;
    for (const auto& pair : reservation.order) {
        cout << "- " << pair.first << ": " << pair.second << " porsi" << endl;
    }
}

// Fungsi untuk menghitung total tagihan
float calculateBill(const Reservation& reservation, const unordered_map<string, float>& menuPrices) {
    float total = 0.0;
    for (const auto& pair : reservation.order) {
        if (menuPrices.find(pair.first) != menuPrices.end()) {
            total += menuPrices.at(pair.first) * pair.second;
        }
    }
    return total;
}

// Fungsi untuk mencetak struk pembayaran
void printReceipt(const Reservation& reservation, float totalBill, int paymentMethod) {
    time_t now = time(0);
    char* dt = ctime(&now);

    cout << "\n========================================" << endl;
    cout << "            STRUK PEMBAYARAN                 " << endl;
    cout << "========================================" << endl;
    cout << "Nama: " << reservation.name << endl;
    cout << "Jumlah Orang: " << reservation.numPeople << endl;
    cout << "Waktu: " << reservation.time << endl;
    cout << "Tanggal: " << dt;
    cout << "\nPesanan:" << endl;
    for (const auto& pair : reservation.order) {
        cout << "- " << pair.first << ": " << pair.second << " porsi" << endl;
    }
    cout << "\nTotal Tagihan: Rp" << fixed << setprecision(2) << totalBill << endl;

    string paymentMethodStr;
    switch (paymentMethod) {
        case 1:
            paymentMethodStr = "Tunai";
            break;
        case 2:
            paymentMethodStr = "Kartu Kredit";
            break;
        case 3:
            paymentMethodStr = "Qris";
            break;
        default:
            paymentMethodStr = "Tidak Diketahui";
            break;
    }
    cout << "Metode Pembayaran: " << paymentMethodStr << endl;
    cout << "========================================" << endl;
}

int main() {
    MenuItem* menu = nullptr;
    unordered_map<string, float> menuPrices;
    unordered_map<int, Reservation> reservations;
    int numTables = 10;
    vector<int> availableTables;

    // Menambahkan item ke menu
    addMenuItem(menu, "Goat Cheese Wontons", 87000.0);
    addMenuItem(menu, "Potato Skins", 45000.0);
    addMenuItem(menu, "French Onion", 49000.0);
    addMenuItem(menu, "New York Steak", 576000.0);
    addMenuItem(menu, "Beef Short Ribs", 669000.0);
    addMenuItem(menu, "Newburg Lobster", 788000.0);
    addMenuItem(menu, "Cheese and Meat Crepe", 343000.0);
    addMenuItem(menu, "Salmon Rolls", 421000.0);
    addMenuItem(menu, "Corn & Avocado Salad", 43000.0);
    addMenuItem(menu, "Seasonal Fruit Salad", 39000.0);
    addMenuItem(menu, "Heirloom Tomato Salad", 37000.0);
    addMenuItem(menu, "Carrot Apple Ginger", 44000.0);
    addMenuItem(menu, "Cold Asparagus Soup", 49000.0);
    addMenuItem(menu, "Fruit Gazpacho", 41000.0);
    addMenuItem(menu, "Boston Cream Pie", 57000.0);
    addMenuItem(menu, "Butterscotch Pudding", 54000.0);
    addMenuItem(menu, "Lady Baltimore Cake", 58000.0);
    addMenuItem(menu, "Margarita", 78000.0);
    addMenuItem(menu, "Cosmopolitan", 67000.0);
    addMenuItem(menu, "Moscow Mule", 71000.0);
    addMenuItem(menu, "Martini", 69000.0);
    addMenuItem(menu, "French", 79000.0);


    // Menambahkan harga menu ke hash table
    MenuItem* tempMenu = menu;
    while (tempMenu) {
        menuPrices[tempMenu->name] = tempMenu->price;
        tempMenu = tempMenu->next;
    }

    // Menginisialisasi meja yang tersedia
    for (int i = 1; i <= numTables; ++i) {
        availableTables.push_back(i);
    }

    // Loop utama program
    int pilih;
    do {
        // Menampilkan menu pilihan
        cout << "\n1. Reservasi Tempat\n2. Pesan Makanan/Minuman\n3. Lihat Daftar Meja Tersedia\n4. Tampilkan Menu\n5. Keluar\nPilih opsi: ";
        cin >> pilih;

        switch (pilih) {
            //Reservasi Tempat
            case 1: {
                if (availableTables.empty()) {
                    cout << "Maaf, tidak ada meja yang tersedia untuk reservasi saat ini.\n";
                } else {
                    Reservation newReservation;
                    cout << "Masukkan nama: ";
                    cin.ignore();
                    getline(cin, newReservation.name);
                    cout << "Masukkan jumlah orang: ";
                    cin >> newReservation.numPeople;
                    cout << "Masukkan waktu reservasi (HH:MM): ";
                    cin >> newReservation.time;
                    int tableNumber = availableTables.back();
                    availableTables.pop_back();
                    reservations[tableNumber] = newReservation;
                    cout << "Reservasi untuk meja nomor " << tableNumber << " telah ditambahkan\n";
                }
                break;
            }
            //Pesan Makanan/Minuman
            case 2: {
                if (reservations.empty()) {
                    cout << "Tidak ada reservasi\n";
                } else {
                    int tableNumber;
                    cout << "Masukkan nomor meja: ";
                    cin >> tableNumber;
                    auto it = reservations.find(tableNumber);
                    if (it == reservations.end()) {
                        cout << "Tidak ada reservasi untuk nomor meja tersebut\n";
                    } else {
                        Reservation& currentReservation = it->second;
                        cout << "Pesanan untuk " << currentReservation.name << endl;
                        displayMenu(menu);
                        int menuItem;
                        int quantity;
                        while (true) {
                            cout << "\nMasukkan nomor makanan/minuman yang ingin dipesan (0 untuk selesai): ";
                            cin >> menuItem;
                            if (menuItem == 0) break;
                            if (menuItem < 1 || menuItem > 22) {
                                cout << "Nomor menu tidak valid. Silakan masukkan kembali." << endl;
                                continue;
                            }
                            cout << "Masukkan jumlah porsi: ";
                            cin >> quantity;
                            if (quantity <= 0) {
                                cout << "Jumlah porsi harus lebih dari 0. Silakan masukkan kembali." << endl;
                                continue;
                            }
                            MenuItem* temp = menu;
                            for (int i = 1; i < menuItem; ++i) {
                                temp = temp->next;
                            }
                            addOrder(currentReservation, temp->name, quantity);
                            cout << "Pesanan telah ditambahkan: " << temp->name << " - " << quantity << " porsi" << endl;
                        }

                        // Tampilkan pesanan
                        displayOrder(currentReservation);

                        // Tampilkan tagihan
                        float totalBill = calculateBill(currentReservation, menuPrices);
                        cout << "Total tagihan: Rp" << fixed << setprecision(2) << totalBill << endl;

                        // Menu untuk memilih metode pembayaran
                        cout << "\nPilih metode pembayaran:\n";
                        cout << "1. Tunai\n";
                        cout << "2. Kartu Kredit\n";
                        cout << "3. Qris\n";
                        cout << "Masukkan metode pembayaran yang anda pilih: ";
                        int paymentMethod;
                        cin >> paymentMethod;
                        switch (paymentMethod) {
                            case 1:
                                cout << "Pembayaran tunai dipilih. Silakan bayar dengan uang tunai.\n";
                                break;
                            case 2:
                                cout << "Pembayaran dengan kartu kredit dipilih. Silakan masukkan kartu kredit.\n";
                                break;
                            case 3:
                                cout << "Pembayaran dengan qris dipilih. Silakan scan kode qr yang tersedia.\n";
                                break;
                            default:
                                cout << "Metode pembayaran tidak valid.\n";
                                break;
                        }

                        // Cetak struk pembayaran
                        printReceipt(currentReservation, totalBill, paymentMethod);

                        // Pesan lagi atau tidak
                        char orderAgain;
                        cout << "Ingin memesan lagi? (Y/N): ";
                        cin >> orderAgain;
                        if (orderAgain == 'N' || orderAgain == 'n') {
                            reservations.erase(tableNumber);
                            availableTables.push_back(tableNumber);
                            cout << "Terima kasih atas pesanannya.\n";
                        } else if (orderAgain == 'Y' || orderAgain == 'y') {
                            continue; // Kembali ke menu makanan
                        }
                    }
                }
                break;
            }
            //Lihat Daftar Meja Tersedia
            case 3:
                cout << "Daftar Meja Tersedia:\n";
                for (int table : availableTables) {
                    cout << "Meja Nomor " << table << " tersedia\n";
                }
                break;
            //Tampilkan Menu
            case 4:
                displayMenu(menu);
                break;
            //Keluar
            case 5:
                cout << "Keluar dari program\n";
                break;
            default:
                cout << "Pilihan tidak valid\n";
                break;
        }
    } while (pilih != 5);

    return 0;
}