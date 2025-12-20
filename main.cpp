#include <iostream>
#include "header.h"

using namespace std;

int main () {
    ListCustomer LC;

    createListCustomer(LC);

    int pilihan = -99;
    while (pilihan != 0) {
        cout << "=========================================================================" << endl;
        cout << "||               SELAMAT DATANG DI APLIKASI  TEL-U LAUNDRY             ||" << endl;
        cout << "=========================================================================" << endl;
        cout << "Lanjutkan sebagai : " << endl;
        cout << "1. Admin" << endl;
        cout << "2. User" << endl;
        cout << "3. Inisialisasi 10 Data" << endl;
        cout << "4. Inisialisasi 25 Data" << endl;
        cout << "5. Inisialisasi 50 Data" << endl;
        cout << "0. Exit" << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih : ";
        cin >> pilihan;
        cout << endl;
        cout << endl;

        switch(pilihan) {
        case 0 :
            cout << "=========================================================================" << endl;
            cout << "            TERIMAKASIH TELAH MENGGUNAKAN APLIKASI TEL-U LAUNDRY       " << endl;
            cout << "=========================================================================" << endl;
            break;

        case 1:
            menu_admin(LC);
            break;

        case 2 :
            menu_user(LC);
            break;

        case 3 :
            inisialisasi_10data(LC);
            cout << "Inisialisasi 10 Data Berhasil!";
            cout << endl;
            cout << endl;
            break;

        case 4 :
            inisialisasi_25data(LC);
            cout << "Inisialisasi 25 Data Berhasil!";
            cout << endl;
            cout << endl;
            break;

        case 5 :
            inisialisasi_50data(LC);
            cout << "Inisialisasi 50 Data Berhasil!";
            cout << endl;
            cout << endl;
            break;

        default:
            cout << "Fitur tidak tersedia, silahkan pilih fitur kembali!";
            break;
        }
    }
}
