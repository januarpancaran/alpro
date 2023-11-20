#include <iostream>

using namespace std;

int main(){
    string menu_app[6] = {
        "1. List Buku yang Tersedia",
        "2. Pinjam Buku",
        "3. Pengembalian Buku",
        "4. Menambah List Buku Baru",
        "5. Menghapus Buku",
        "6. Exit"
    };

    /*
     *
     * Isi list buku sebanyak-banyaknya, tambahin index arr
     *
     */
    string list_buku[10] = {
        "Menalar Tuhan - Franz Magnis Suseno",
        "Filosofi Teras - Henry Manampiring",
        "Bumi Manusia - Pramoedya Ananta Toer",
        "Marmut Merah Jambu - Raditya Dika",
        "Ayahku Bukan Pembohong - Tere Liye",
        "Dear Nathan - Erisca Febriani",
        "Eloquent Javascript - Marjin Haverbeke",
        "Applied Cryptography - Bruce Schneler", 
        "Effective C - Robert C. Seacord", 
        "",
    };

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
        for (int i=0;i<6;i++) cout << menu_app[i] << endl;
        cout << "Pilih menu aplikasi: ";
        cin >> pilih_menu_awal;
        cout << endl;

        switch(pilih_menu_awal){
            case 1:
                cout << "1. List Buku Fiksi\n2.List Buku Nonfiksi\n>> "; cin >> pilih_kategori_buku;
                if (pilih_kategori_buku == 1){
                    for (;;){}
                } else {
                    for (;;){}
                }
                break;
            case 2:
                break;
            case 3:
                break;
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
