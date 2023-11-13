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

    string list_buku[10] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "", 
        "", 
        "",
    };

    bool is_running = true;

    int pilih_menu_awal;

    while (is_running){
        cout << "Aplikasi Pengelolaan Buku\n";
        for (;;){}
        cout << "Pilih menu aplikasi: ";
        cin >> pilih_menu_awal;
        cout << endl;

        switch(pilih_menu_awal){
            case 1:
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
