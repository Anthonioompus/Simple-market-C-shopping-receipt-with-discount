#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    string namaBarangInput;
    int jumlahInput;
    double hargaSatuan = 0.0;
    double subtotalBelanja = 0.0;
    double diskon = 0.0;
    double totalBayar = 0.0;

    cout << "Selamat Datang di Warung AnthoRmx!" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Ketik 'selesai' pada nama barang jika sudah berbelanja." << endl;
    cout << "---------------------------------------" << endl;

    while (true) {
        cout << "\nMasukkan Nama Barang: ";
        getline(cin, namaBarangInput);

        if (namaBarangInput == "selesai") {
            break; 
        }

        cout << "Masukkan Jumlah       : ";
        cin >> jumlahInput;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

        hargaSatuan = 0.0;

        if (namaBarangInput == "Indomie Goreng") {
            hargaSatuan = 3000.0;
        } else if (namaBarangInput == "Kecap Bango") {
            hargaSatuan = 8500.0;
        } else if (namaBarangInput == "Teh Pucuk") {
            hargaSatuan = 3500.0;
        } else if (namaBarangInput == "Malboro") {
            hargaSatuan = 20500.0;
        } else if (namaBarangInput == "Indomilk") {
            hargaSatuan = 5000.0;
        }

        if (hargaSatuan > 0) {
            double hargaItem = hargaSatuan * jumlahInput;
            subtotalBelanja += hargaItem; 
            cout << "-> Berhasil ditambahkan! Total sementara: Rp " << subtotalBelanja << endl;
        } else {
            cout << "-> Maaf, barang '" << namaBarangInput << "' tidak ditemukan." << endl;
        }
    } 

    cout << "\n===========Warung AnthoRmx===========" << endl;
    cout << "--- Struk Belanja Anda ---" << endl;

    if (subtotalBelanja > 0) {
        if (subtotalBelanja >= 100000) {
            diskon = subtotalBelanja * 0.10; 
            cout << "Anda mendapat diskon 10%!" << endl;
        } else if (subtotalBelanja >= 50000) {
            diskon = subtotalBelanja * 0.05; 
            cout << "Anda mendapat diskon 5%!" << endl;
        } else {
            cout << "Tidak ada diskon untuk total belanja ini." << endl;
        }

        totalBayar = subtotalBelanja - diskon;

        cout << "Subtotal     : Rp " << subtotalBelanja << endl;
        cout << "Diskon       : Rp " << diskon << endl;
        cout << "-------------------------" << endl;
        cout << "Total Bayar  : Rp " << totalBayar << endl;

    } else {
        cout << "Anda tidak membeli apapun." << endl;
    }

    cout << "------ Terima Kasih ------" << endl;
    cout << "====================================" << endl;

    return 0;
}