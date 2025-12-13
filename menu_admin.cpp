#include "iostream"
#include "header.h"

using namespace std;

void menu_admin(){
    int pilihan = 99;
    while (pilihan != 0) {
        cout << "=========================================================================" << endl;
        cout << "||                                 MENU                                ||" << endl;
        cout << "=========================================================================" << endl;
        cout << "Mau inisialisasi data apa? " << endl;
        cout << "1. Customer" << endl;
        cout << "2. Laundry" << endl;
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
            menu_customer();
            break;

        case 2 :
            menu_laundry();
            break;

        default:
            cout << "Fitur tidak tersedia, silahkan pilih fitur kembali!" << endl;
            break;
        }
    }
}

void menu_customer() {

}

void menu_laundry() {

}
