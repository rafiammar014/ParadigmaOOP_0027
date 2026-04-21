#include <iostream>
#include <string>

using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    Barang(string inputNama, int inputJumlah, string inputKategori, string inputTanggal) {
        nama = inputNama;
        jumlah = inputJumlah;
        kategori = inputKategori;
        tanggalProduksi = inputTanggal;
    }

    void tampilkanSpesifikasi() {
        cout << "Nama Barang      : " << nama << endl;
        cout << "Jumlah           : " << jumlah << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
        cout << "---------------------------------------" << endl;
    }
};

int main() {
    cout << "=== Sistem Pendataan Barang ===" << endl;
    cout << "---------------------------------------" << endl;

    Barang elektronik("Mesin Peras Kelapa", 2, "Mesin Produksi", "10-04-2026");
    Barang nonElektronik("Botol Kemasan Coconutrise", 500, "Pengemasan", "15-04-2026");

    cout << "\n[ Data Barang Elektronik ]" << endl;
    elektronik.tampilkanSpesifikasi();

    cout << "\n[ Data Barang Non-Elektronik ]" << endl;
    nonElektronik.tampilkanSpesifikasi();

    return 0;
}