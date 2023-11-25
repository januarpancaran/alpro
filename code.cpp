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
    string list_buku_nonfiksi[10] = {
        "Menalar Tuhan - Franz Magnis Suseno",
        "Filosofi Teras - Henry Manampiring",
        "Eloquent Javascript - Marjin Haverbeke",
        "Applied Cryptography - Bruce Schneler", 
        "Effective C - Robert C. Seacord", 
        "",
    };

    string list_tag_nonfiksi[10] = {
        "#A101",
        "#A102",
        "#A103",
        "#A104",
        "#A105",
        "#A106",
        "#A107",
        "#A108",
        "#A109",
        "#A110"
    };

    string list_buku_fiksi[10] = {
        "Bumi Manusia - Pramoedya Ananta Toer",
        "Marmut Merah Jambu - Raditya Dika",
        "Ayahku Bukan Pembohong - Tere Liye",
        "Dear Nathan - Erisca Febriani",
        "",
        "",
        "",
        "",
        "",
        ""
    };

    string list_tag_fiksi[10] = {
        "#B101",
        "#B102",
        "#B103",
        "#B104",
        "#B105",
        "#B106",
        "#B107",
        "#B108",
        "#B109",
        "#B110"
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
                    for (int i=0;i<=9;i++) cout << list_buku_fiksi[i]  << endl;
                } else {
                    for (int i=0;i<=9;i++) cout << list_buku_nonfiksi[i] << endl;
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
