#include <iostream>
#include "header.h"

using namespace std;

int main ()
{
    int pilihan = -99;
    while (pilihan != 0) {
        cout << "=========================================================================" << endl;
        cout << "||               SELAMAT DATANG DI APLIKASI  TEL-U LAUNDRY             ||" << endl;
        cout << "=========================================================================" << endl;
        cout << "Login sebagai : " << endl;
        cout << "1. Admin" << endl;
        cout << "2. User" << endl;
        cout << "0. Exit" << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih : ";
        cin >> pilihan;
        cout << endl;

        switch(pilihan) {
        case 0 :
            cout << "=========================================================================" << endl;
            cout << "            TERIMAKASIH TELAH MENGGUNAKAN APLIKASI TEL-U LAUNDRY       " << endl;
            cout << "=========================================================================" << endl;
            break;

        case 1:
            menu_admin();
            break;

        case 2 :
            menu_user();
            break;

        default:
            cout << "Fitur tidak tersedia, silahkan pilih fitur kembali!";
            break;
        }
    }
}
