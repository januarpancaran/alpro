#include <iostream>
#include <vector>

using namespace std;

const string username = "admin";
const string password = "mletreasik";

#define pb push_back

struct buku {
    string judul;
    string pengarang;
    int tahun_terbit;
    bool is_tersedia;
    string kode_buku;
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
    fiksi1.kode_buku = "#F101";
    fiksi.pb(fiksi1);

    buku fiksi2;
    fiksi2.judul = "Marmut Merah Jambu";
    fiksi2.pengarang = "Raditya Dika";
    fiksi2.tahun_terbit = 2010;
    fiksi2.is_tersedia = true;
    fiksi2.kode_buku = "#F102";
    fiksi.pb(fiksi2);

    buku fiksi3;
    fiksi3.judul = "Ayahku Bukan Pembohong";
    fiksi3.pengarang = "Tere Liye";
    fiksi3.tahun_terbit = 2011;
    fiksi3.is_tersedia = true;
    fiksi3.kode_buku = "#F103";
    fiksi.pb(fiksi3);

    buku fiksi4;
    fiksi4.judul = "Dear Nathan";
    fiksi4.pengarang = "Erisca Febriani";
    fiksi4.tahun_terbit = 2016;
    fiksi4.is_tersedia = true;
    fiksi4.kode_buku = "#F104";
    fiksi.pb(fiksi4);

    vector<buku> nonfiksi;
    buku nonfiksi1;
    nonfiksi1.judul = "Menalar Tuhan";
    nonfiksi1.pengarang = "Franz Magnis Suseno";
    nonfiksi1.tahun_terbit = 2006;
    nonfiksi1.is_tersedia = true;
    nonfiksi1.kode_buku = "#NF101";
    nonfiksi.pb(nonfiksi1);

    buku nonfiksi2;
    nonfiksi2.judul = "Filosofi Teras";
    nonfiksi2.pengarang = "Henry Manampiring";
    nonfiksi2.tahun_terbit = 2018;
    nonfiksi2.is_tersedia = true;
    nonfiksi2.kode_buku = "#NF102";
    nonfiksi.pb(nonfiksi2);

    buku nonfiksi3;
    nonfiksi3.judul = "Eloquent Javascript";
    nonfiksi3.pengarang = "Marijn Haverbeke";
    nonfiksi3.tahun_terbit = 2010;
    nonfiksi3.is_tersedia = true;
    nonfiksi3.kode_buku = "#NF103";
    nonfiksi.pb(nonfiksi3);

    buku nonfiksi4;
    nonfiksi4.judul = "Eloquent Javascript";
    nonfiksi4.pengarang = "Marijn Haverbeke";
    nonfiksi4.tahun_terbit = 2010;
    nonfiksi4.is_tersedia = true;
    nonfiksi4.kode_buku = "#NF104";
    nonfiksi.pb(nonfiksi4);

    buku nonfiksi5;
    nonfiksi5.judul = "Applied Cryptography";
    nonfiksi5.pengarang = "Bruce Schneier";
    nonfiksi5.tahun_terbit = 1993;
    nonfiksi5.is_tersedia = true;
    nonfiksi5.kode_buku = "#NF105";
    nonfiksi.pb(nonfiksi5);

    buku nonfiksi6;
    nonfiksi6.judul = "Effective C";
    nonfiksi6.pengarang = "Robert C. Seacord";
    nonfiksi6.tahun_terbit = 2020;
    nonfiksi6.is_tersedia = true;
    nonfiksi6.kode_buku = "#NF106";
    nonfiksi.pb(nonfiksi6);

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
        for(int i = 0; i < menu_app.size(); i++) cout << menu_app[i] << endl;
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
                for(int i = 0; i < tampilan.size(); i++) cout << tampilan[i] << endl;
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
                            cout << "Tahun Terbit: " << fiksi[i].tahun_terbit << endl;
                            cout << "Status: " << (fiksi[i].is_tersedia ? "Tersedia" : "Sedang dipinjam") << endl;
                            cout << "Kode Buku: " << fiksi[i].kode_buku << endl << endl;
                        }
                    break;

                    case 2: 
                        for(int i = 0; i < nonfiksi.size(); i++) {
                            cout << i + 1 << ". " << endl;
                            cout << "Judul: " << nonfiksi[i].judul << endl;
                            cout << "Author: " << nonfiksi[i].pengarang << endl;
                            cout << "Tahun Terbit: " << nonfiksi[i].tahun_terbit << endl;
                            cout << "Status: " << (nonfiksi[i].is_tersedia ? "Tersedia" : "Sedang dipinjam") << endl;
                            cout << "Kode Buku: " << nonfiksi[i].kode_buku << endl << endl;
                        }
                    break;

                    case 3:
                        for(int i = 0; i < semua_buku.size(); i++) {
                            cout << i + 1 << ". " << endl;
                            cout << "Judul: " << semua_buku[i].judul << endl;
                            cout << "Author: " << semua_buku[i].pengarang << endl;
                            cout << "Tahun Terbit: " << semua_buku[i].tahun_terbit << endl;
                            cout << "Status: " << (semua_buku[i].is_tersedia ? "Tersedia" : "Sedang dipinjam") << endl;
                            cout << "Kode Buku: " << semua_buku[i].kode_buku << endl << endl;
                        }
                    break;
                }
                break;
            }

            case 2: {
                cout << "Pilih kode buku yang ingin dipinjam: ";
                string pinjam_buku;
                cin >> pinjam_buku;
                cout << endl;
            
/*
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
*/
                bool buku_ditemukan = false;

                for (int i = 0; i < semua_buku.size(); i++) {
                    if (semua_buku[i].kode_buku == pinjam_buku && semua_buku[i].is_tersedia) {
                        cout << "Berhasil meminjam buku: " << semua_buku[i].judul << endl << endl;
                        semua_buku[i].is_tersedia = false;
                        buku_ditemukan = true;
                        break;
                    }
                }

                if (!buku_ditemukan) {
                    cout << "Buku tidak tersedia atau kode buku tidak valid." << endl << endl;
                }
                break;
            }

            case 3: {
                cout << "Masukkan kode buku yang ingin dikembalikan: ";
                string kembali_buku;
                cin >> kembali_buku;
                cout << endl;

                /*
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
                */
                
                bool buku_dikembalikan = false;

                for (int i = 0; i < semua_buku.size(); i++) {
                    if (semua_buku[i].kode_buku == kembali_buku) {
                        if (!semua_buku[i].is_tersedia) {
                            cout << "Berhasil mengembalikan buku: " << semua_buku[i].judul << endl << endl;
                            semua_buku[i].is_tersedia = true;
                            buku_dikembalikan = true;
                            break;
                        } else {
                            cout << "Buku tersebut belum dipinjam atau kode buku tidak valid." << endl << endl;
                        }
                    }
                }

                if (!buku_dikembalikan) {
                    cout << "Buku tidak ditemukan." << endl << endl;
                }
                break;
            }
            case 4: {
                string tanya_usn;
                string tanya_pw;

                cout << "Username: ";
                cin >> tanya_usn;

                cout << "Password: ";
                cin >> tanya_pw;

                if (tanya_usn == username && tanya_pw == password) {
                    cout << "Selamat datang, admin!\n";
                    cout << "1. Tambah Buku Fiksi\n";
                    cout << "2. Tambah Buku Non Fiksi\n";
                    cout << "Masukkkan pilihan Anda: ";
                    int pilih_tambah_mana;
                    cin >> pilih_tambah_mana;
                    
                    switch (pilih_tambah_mana) {
                        case 1: {
                            buku buku_baru;
                            cout << "Masukkan Judul Buku: ";
                            cin.ignore();
                            getline(cin, buku_baru.judul);
                            cout << "Masukkan Pengarang: ";
                            getline(cin, buku_baru.pengarang);
                            cout << "Masukkan Tahun Terbit: ";
                            cin >> buku_baru.tahun_terbit;
                            buku_baru.is_tersedia = true;
                            cout << "Masukkan Kode Buku: ";
                            cin >> buku_baru.kode_buku;
                            fiksi.push_back(buku_baru);
                            semua_buku.push_back(buku_baru);
                            cout << "Buku Fiksi berhasil ditambahkan!\n";
                            break;
                        }
                        case 2: {
                            buku buku_baru;
                            cout << "Masukkan Judul Buku: ";
                            cin.ignore();
                            getline(cin, buku_baru.judul);
                            cout << "Masukkan Pengarang: ";
                            getline(cin, buku_baru.pengarang);
                            cout << "Masukkan Tahun Terbit: ";
                            cin >> buku_baru.tahun_terbit;
                            buku_baru.is_tersedia = true;
                            cout << "Masukkan Kode Buku: ";
                            cin >> buku_baru.kode_buku;
                            nonfiksi.push_back(buku_baru);
                            semua_buku.push_back(buku_baru);
                            cout << "Buku Non Fiksi berhasil ditambahkan!\n";
                            break;
                        }
                        default:
                            cout << "Pilihan tidak valid.\n";
                    }
                } else {
                    cout << "Anda tidak memiliki akses untuk menggunakan fitur ini.\n";
                } 
                break;
            }
            case 5:{
                string tanya_usn;
                string tanya_pw;
                
                cout << "Username: ";
                cin >> tanya_usn;
                cout << "Password: ";
                cin >> tanya_pw;
                
                if (tanya_usn == username && tanya_pw == password){
                    string hapus_buku;
                    cout << "Selamat datang, admin!\n";
                    cout << "Masukkan kode buku yang ingin dihapus: ";
                    cin.ignore();
                    getline(cin, hapus_buku);
                    for (int i = 0; i < semua_buku.size(); ++i) {
                        if (semua_buku[i].kode_buku == hapus_buku) {
                            cout << "Buku dengan kode " << hapus_buku << " berhasil dihapus!\n";
                            semua_buku.erase(semua_buku.begin() + i);
                            break;
                        }
                    }

        // Find and remove the book with the specified code from fiksi
                    for (int i = 0; i < fiksi.size(); ++i) {
                        if (fiksi[i].kode_buku == hapus_buku) {
                            fiksi.erase(fiksi.begin() + i);
                            break;
                        }
                    }

        // Find and remove the book with the specified code from nonfiksi
                    for (int i = 0; i < nonfiksi.size(); ++i) {
                        if (nonfiksi[i].kode_buku == hapus_buku) {
                            nonfiksi.erase(nonfiksi.begin() + i);
                            break;
                        }
                    }

        // Check if the book with the specified code was not found
                    cout << "Buku dengan kode " << hapus_buku << " tidak ditemukan.\n";
                } else {
                    cout << "Anda tidak memiliki hak akses untuk menggunakan fitur ini.\n";
                } 
                break;
            }
            case 6:
                cout << "      /\\_/\\      \n";
                cout << " /\\  / o o \\  \n";
                cout << "//\\\\ \\~(*)~/\n";
                cout << "`  \\/   ^ /  \n";
                cout << "   | \\|| ||  Good  \n";
                cout << "   \\ '|| ||  Bye!  \n";
                cout << "    \\)()-())  \n";
                is_running = false;
                break;
        }
    }

    return 0;
}
