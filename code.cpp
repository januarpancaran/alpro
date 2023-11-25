#include <iostream>
#include <vector>
using namespace std;

struct buku {
    string judul;
    string pengarang;
    int tahun_terbit;
    bool is_tersedia;
};

int main() {
    vector<string> menu_app = {
        "1. List Buku yang Tersedia",
        "2. Pinjam Buku",
        "3. Pengembalian Buku",
        "4. Menambah List Buku Baru",
        "5. Menghapus Buku",
        "6. Exit"
    };

    vector<buku> fiksi;

    buku fiksi1;
    fiksi1.judul = "Bumi Manusia";
    fiksi1.pengarang = "Pramoedya Ananta Toer";
    fiksi1.tahun_terbit = 2015;
    fiksi1.is_tersedia = true;
    fiksi.push_back(fiksi1);

    buku fiksi2;
    fiksi2.judul = "Marmut Merah Jambu";
    fiksi2.pengarang = "Raditya Dika";
    fiksi2.tahun_terbit = 2010;
    fiksi2.is_tersedia = true;
    fiksi.push_back(fiksi2);

    buku fiksi3;
    fiksi3.judul = "Ayahku Bukan Pembohong";
    fiksi3.pengarang = "Tere Liye";
    fiksi3.tahun_terbit = 2011;
    fiksi3.is_tersedia = true;
    fiksi.push_back(fiksi3);

    buku fiksi4;
    fiksi4.judul = "Dear Nathan";
    fiksi4.pengarang = "Erisca Febriani";
    fiksi4.tahun_terbit = 2016;
    fiksi4.is_tersedia = true;
    fiksi.push_back(fiksi4);

    vector<buku> nonfiksi;
    buku nonfiksi1;
    nonfiksi1.judul = "Menalar Tuhan";
    nonfiksi1.pengarang = "Franz Magnis Suseno";
    nonfiksi1.tahun_terbit = 2006;
    nonfiksi1.is_tersedia = true;
    nonfiksi.push_back(nonfiksi1);

    buku nonfiksi2;
    nonfiksi2.judul = "Filosofi Teras";
    nonfiksi2.pengarang = "Henry Manampiring";
    nonfiksi2.tahun_terbit = 2018;
    nonfiksi2.is_tersedia = true;
    nonfiksi.push_back(nonfiksi2);

    buku nonfiksi3;
    nonfiksi3.judul = "Eloquent Javascript";
    nonfiksi3.pengarang = "Marijn Haverbeke";
    nonfiksi3.tahun_terbit = 2010;
    nonfiksi3.is_tersedia = true;
    nonfiksi.push_back(nonfiksi3);

    buku nonfiksi4;
    nonfiksi4.judul = "Eloquent Javascript";
    nonfiksi4.pengarang = "Marijn Haverbeke";
    nonfiksi4.tahun_terbit = 2010;
    nonfiksi4.is_tersedia = true;
    nonfiksi.push_back(nonfiksi4);

    buku nonfiksi5;
    nonfiksi5.judul = "Applied Cryptography";
    nonfiksi5.pengarang = "Bruce Schneier";
    nonfiksi5.tahun_terbit = 1993;
    nonfiksi5.is_tersedia = true;
    nonfiksi.push_back(nonfiksi5);

    buku nonfiksi6;
    nonfiksi6.judul = "Effective C";
    nonfiksi6.pengarang = "Robert C. Seacord";
    nonfiksi6.tahun_terbit = 2020;
    nonfiksi6.is_tersedia = true;
    nonfiksi.push_back(nonfiksi6);

    vector<buku> semua_buku;
    semua_buku.insert(semua_buku.end(), fiksi.begin(), fiksi.end());
    semua_buku.insert(semua_buku.end(), nonfiksi.begin(), nonfiksi.end());

    bool is_running = true;
    int pilih_menu_awal;

    int pilih_kategori_buku;

    while (is_running){
        /*
         *
         * Menu Awal Aplikasi
         *
         */
        cout << "Aplikasi Pengelolaan Buku\n";
        for(int i = 0; i < menu_app.size(); i++) {
            cout << menu_app[i] << endl;
        }
        cout << "Pilih menu aplikasi: ";
        cin >> pilih_menu_awal;
        cout << endl;

        switch(pilih_menu_awal) { 
            case 1: {
                vector<string> tampilan = {
                    "1. Fiksi",
                    "2. Nonfiksi",
                    "3. Tampilkan semua",
                };
                for(int i = 0; i < tampilan.size(); i++) {
                    cout << tampilan[i] << endl;
                }
                cout << "Pilih kategori tampilan: ";
                int pilih_tampilan;
                cin >> pilih_tampilan;
                cout << endl;

                switch(pilih_tampilan) {
                    case 1:
                        for(int i = 0; i < fiksi.size(); i++) {
                            cout << i + 1 << ". " << endl;
                            cout << "Judul: " << fiksi[i].judul << endl;
                            cout << "Author: " << fiksi[i].pengarang << endl;
                            cout << "Tahun terbit: " << fiksi[i].tahun_terbit << endl;
                            cout << "Status: " << (fiksi[i].is_tersedia? "Tersedia" : "Sedang dipinjam") << endl << endl;
                        }
                    break;

                    case 2: 
                        for(int i = 0; i < nonfiksi.size(); i++) {
                            cout << i + 1 << ". " << endl;
                            cout << "Judul: " << nonfiksi[i].judul << endl;
                            cout << "Author: " << nonfiksi[i].pengarang << endl;
                            cout << "Tahun terbit: " << nonfiksi[i].tahun_terbit << endl;
                            cout << "Status: " << (nonfiksi[i].is_tersedia? "Tersedia" : "Sedang dipinjam") << endl << endl;
                        }
                    break;

                    case 3:
                        for(int i = 0; i < semua_buku.size(); i++) {
                            cout << i + 1 << ". " << endl;
                            cout << "Judul: " << semua_buku[i].judul << endl;
                            cout << "Author: " << semua_buku[i].pengarang << endl;
                            cout << "Tahun terbit: " << semua_buku[i].tahun_terbit << endl;
                            cout << "Status: " << (semua_buku[i].is_tersedia? "Tersedia" : "Sedang dipinjam") << endl << endl;
                        }
                    break;
                }
                break;
            }

            case 2: {
                cout << "Pilih nomor buku yang ingin dipinjam: ";
                int pinjam_buku;
                cin >> pinjam_buku;
                cout << endl;

                if(pinjam_buku >= 1 && pinjam_buku <= semua_buku.size()) {
                    if(semua_buku[pinjam_buku - 1].is_tersedia == true) {
                        cout << "Berhasil meminjam buku: " << semua_buku[pinjam_buku - 1].judul << endl << endl;
                        semua_buku[pinjam_buku - 1].is_tersedia = false;
                    } else {
                        cout << "Buku tidak tersedia" << endl << endl;
                    }
                } else {
                    cout << "Nomor buku tidak valid" << endl << endl;
                }
                break;
            }

            case 3: {
                cout << "Pilih nomor buku yang ingin dikembalikan: ";
                int kembali_buku;
                cin >> kembali_buku;
                cout << endl;

                if(kembali_buku >= 1 && kembali_buku <= semua_buku.size()) {
                    if(semua_buku[kembali_buku - 1].is_tersedia == false) {
                        cout << "Berhasil mengembalikan buku: " << semua_buku[kembali_buku - 1].judul << endl << endl;
                        semua_buku[kembali_buku - 1].is_tersedia = true;
                    } else {
                        cout << "Buku tidak tersedia dalam daftar" << endl << endl;
                    }
                } else {
                    cout << "Nomor buku tidak valid" << endl << endl;
                }
                break;
            }
            case 4:
                break;
            case 5:
                break;
            case 6:
                is_running = false;
                break;
        }
    }

    return 0;
}
