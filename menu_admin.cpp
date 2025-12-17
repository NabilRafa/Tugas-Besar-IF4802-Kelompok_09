#include "iostream"
#include "header.h"

using namespace std;

    ListCustomer Customer;
    int pilihanADMIN = 100;
    addressCustomer p, precCus;
    addressLaundry q, precLau;

void menu_admin(){

    while (pilihanADMIN != 0) {
        cout << "=========================================================================" << endl;
        cout << "||                                 MENU                                ||" << endl;
        cout << "=========================================================================" << endl;
        cout << "Mau inisialisasi data apa? " << endl;
        cout << "1. Customer" << endl;
        cout << "2. Laundry" << endl;
        cout << "99. Inisialisasi Data" << endl;
        cout << "0. Exit" << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih : ";
        cin >> pilihanADMIN;
        cout << endl;

        switch(pilihanADMIN) {
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

        case 3 :
            p = Customer.first;
            show_AllCustomer(Customer);
            break;

        case 99 :
            createListCustomer(Customer);
            inisialisasi_data(Customer);
            break;

        default:
            cout << "Fitur tidak tersedia, silahkan pilih fitur kembali!" << endl;
            break;
        }
    }
}

void menu_customer() {

    int pilihan_menu_customer = 100;

    while (pilihan_menu_customer != 0) {
        cout << "Pilih fitur : " << endl;
        cout << "1. Buat List Data" << endl;
        cout << "2. Tambah Customer Pertama" << endl;
        cout << "3. Tambah Customer Terakhir" << endl;
        cout << "4. Tambah Customer Setelah prec" << endl;
        cout << "5. Hapus Customer Pertama" << endl;
        cout << "6. Hapus Customer Terakhir" << endl;
        cout << "7. Hapus Customer Setelah prec" << endl;
        cout << "8. Hapus Customer Berdasarkan Nama" << endl;
        cout << "9. Hapus Customer Berdasarkan ID" << endl;
        cout << "10.Tampilkan Data Customer Berdasarkan Nama" << endl;
        cout << "11.Tampilkan Data Customer Berdasarkan ID" << endl;
        cout << "12.Tampilkan Semua Customer" << endl;
        cout << "0. Kembali ke menu sebelumnya" << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih : ";

        cin >> pilihan_menu_customer;
        cout << endl;

        switch(pilihan_menu_customer) {
            case 1 :{
                createListCustomer(Customer);
                break;
            }
            case 2:{
                p = new elmList_Customer;
                insertFirst_Customer(Customer, p);
                break;
            }
            case 3:{
                p = new elmList_Customer;
                insertLast_Customer(Customer, p);
                break;
            }
            case 4:{
                string searchPREC;
                addressCustomer prec;
                p = new elmList_Customer;

                cout << "Data dimasukkan setelah siapa?: ";
                cin >> searchPREC;
                prec = search_Customer(Customer, searchPREC);

                if (prec != nullptr){
                    insertAfter_Customer(Customer, prec, p);
                } else {
                    cout << "Data tidak ditemukan" << endl;
                    delete p;
                }

                break;
            }
            case 5:{
                deleteFirst_Customer(Customer, p);
                break;
            }
            case 6:{
                deleteLast_Customer(Customer, p);
                break;
            }
            case 7:{
                string searchPREC;
                addressCustomer prec;

                cout << "Data setelah siapa yang ingin dihapus?: ";
                cin >> searchPREC;
                prec = search_Customer(Customer, searchPREC);

                if (prec != nullptr){
                    deleteAfter_Customer(Customer, prec, p);
                } else {
                    cout << "Data tidak ditemukan" << endl;
                    delete p;
                }
                break;
            }
            case 8:{
                string keywordNAME;
                addressCustomer serchNAME;

                cout << "Masukkan Nama Customer yang ingin dicari: ";
                cin >> keywordNAME;

                serchNAME = search_Customer(Customer, keywordNAME);

                if (serchNAME != nullptr){
                    deleteCustomer(Customer, serchNAME);
                } else {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            }
            case 9:{
                string keywordID;
                addressCustomer serchID;

                cout << "Masukkan ID Customer yang ingin dihapus: ";
                cin >> keywordID;

                serchID = search_Customer(Customer, keywordID);

                if (serchID != nullptr) {
                    deleteCustomer(Customer, serchID);
                } else {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            }
            case 10:{
                string keywordNAME;
                addressCustomer serchNAME;

                cout << "Masukkan Nama Customer yang ingin dicari: ";
                cin >> keywordNAME;

                serchNAME = search_Customer(Customer, keywordNAME);

                if (serchNAME != nullptr){
                    show_Customer(serchNAME);
                } else {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            }
            case 11:{
                string keywordID;
                addressCustomer serchID;

                cout << "Masukkan ID Customer yang ingin dihapus: ";
                cin >> keywordID;

                serchID = search_Customer(Customer, keywordID);

                if (serchID != nullptr) {
                    deleteCustomer(Customer, serchID);
                } else {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            }
            case 12:{
                show_AllCustomer(Customer);
                break;
            }
            case 0:{
                return;
            }

            default:
            cout << "Fitur tidak tersedia, silahkan pilih fitur kembali!" << endl;
            break;
        }
    }
}

void menu_laundry() {

}

//I said god help me

