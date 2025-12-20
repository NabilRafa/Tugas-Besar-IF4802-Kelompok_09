#include "iostream"
#include "header.h"

using namespace std;

    bool Keluar = false;
    addressCustomer p;
    addressLaundry q;

void menu_admin(ListCustomer &LC){
    int pilihanADMIN = 404;

    while (pilihanADMIN != 0) {
        cout << "=========================================================================" << endl;
        cout << "||                            MENU ADMIN                               ||" << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih Fitur :" << endl;
        cout << "1. Customer" << endl;
        cout << "2. Laundry" << endl;
        cout << "100. Tampilkan seluruh Data" << endl;
        cout << "0. Exit" << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih : ";
        cin >> pilihanADMIN;
        cout << endl;

        switch(pilihanADMIN) {
        case 1:
            menu_customer(LC);
            break;

        case 2 :
            menu_laundry(LC);
            break;

        case 100 :
            menu_showAllData(LC);
            cout << endl;
            cout << endl;
            break;

        case 0 :
            break;

        default:
            cout << "Fitur tidak tersedia, silahkan pilih fitur kembali!" << endl;
            break;
        }
    }
}

void menu_customer(ListCustomer &LC) {

    int pilihan_menu_customer = 100;

    while (pilihan_menu_customer != 0) {
        cout << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih fitur : " << endl;
        cout << "1. Tambah Customer Pertama" << endl;
        cout << "2. Tambah Customer Terakhir" << endl;
        cout << "3. Hapus Customer Pertama" << endl;
        cout << "4. Hapus Customer Terakhir" << endl;
        cout << "0. Kembali ke menu sebelumnya" << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih : ";

        cin >> pilihan_menu_customer;
        cout << endl;

        switch(pilihan_menu_customer) {
            case 0 :
                break;

            case 1:
                menu_addFirstCustomer(LC);
                cout << endl;
                cout << "Add First Customer Berhasil!";
                cout << endl;
                break;

            case 2:
                menu_addLastCustomer(LC);
                cout << endl;
                cout << "Add Last Customer Berhasil!";
                cout << endl;
                break;

            case 3:
                deleteFirst_Customer(LC, p);
                cout << endl;
                cout << "Delete First Customer Berhasil!";
                cout << endl;
                break;

            case 4:
                deleteLast_Customer(LC, p);
                cout << endl;
                cout << "Delete Last Customer Berhasil!";
                cout << endl;
                break;

            default:
            cout << "Fitur tidak tersedia, silahkan pilih fitur kembali!" << endl;
            break;
        }
    }
}


void menu_laundry(ListCustomer &LC) {

    int pilihan_menu_customer = 100;

    while (pilihan_menu_customer != 0) {
        cout << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih fitur : " << endl;
        cout << "1. Tambah Laundry Pertama" << endl;
        cout << "2. Tambah Laundry Terakhir" << endl;
        cout << "3. Hapus Laundry Pertama" << endl;
        cout << "4. Hapus Laundry Terakhir" << endl;
        cout << "0. Kembali ke menu sebelumnya" << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih : ";

        cin >> pilihan_menu_customer;
        cout << endl;

        switch(pilihan_menu_customer) {
            case 1 : {
                menu_addFirstLaundry(LC);
                cout << endl;
                cout << "Add First Laundry Berhasil!";
                cout << endl;
                break;
            }
            case 2:{
                menu_addLastLaundry(LC);
                cout << endl;
                cout << "Add Last Laundry Berhasil!";
                cout << endl;
                break;
            }
            case 3:{
                menu_deleteFirstLaundry(LC);
                cout << endl;
                cout << "Delete First Laundry Berhasil!";
                cout << endl;
                break;
            }
            case 4:{
                menu_deleteLastLaundry(LC);
                cout << endl;
                cout << "Delete Last Laundry Berhasil!";
                cout << endl;
                break;
            }
            default:
            cout << "Fitur tidak tersedia, silahkan pilih fitur kembali!" << endl;
            break;
        }
    }
}


//Show All Customer + Laundry
void menu_showAllData(ListCustomer LC) {
    addressCustomer P = LC.first;
    while (P != nullptr) {
        show_Customer(P);
        addressLaundry Q = P->firstLaundry;
        while (Q != nullptr) {
            show_Laundry(Q);
            Q = Q->next;
        }
        P = P->next;
    }
}


//Menu Customer
void menu_addFirstCustomer(ListCustomer &LC){

    string nama, alamat, idCustomer, noTelp;

    cout << "Silahkan Input Data Customer : " << endl;
    cout << endl;
    cout << "Nama : ";
    cin >> nama;

    cout << "Alamat : ";
    cin >> alamat;

    cout << "ID Customer : ";
    cin >> idCustomer;

    cout << "Nomor Telepon : ";
    cin >> noTelp;

    p = createElmCustomer(nama, alamat, idCustomer, noTelp);
    insertFirst_Customer(LC, p);
}

void menu_addLastCustomer(ListCustomer &LC){
    string nama, alamat, idCustomer, noTelp;

    cout << "Silahkan Input Data Customer : " << endl;
    cout << endl;
    cout << "Nama : ";
    cin >> nama;

    cout << "Alamat : ";
    cin >> alamat;

    cout << "ID Customer : ";
    cin >> idCustomer;

    cout << "Nomor Telepon : ";
    cin >> noTelp;

    p = createElmCustomer(nama, alamat, idCustomer, noTelp);
    insertLast_Customer(LC, p);
}


//Menu Laundry
void menu_addFirstLaundry(ListCustomer &LC){

    string cusName, laundryName, layanan;
    int pilihanLayanan, beratLaundry;

    cout << "Masukkan Nama Customer : ";
    cin >> cusName;
    p = search_Customer(LC, cusName);

    cout << "Masukkan Jenis Laundry : ";
    cin >> laundryName;
    cout << endl;

    cout << "Pilih Layanan Laundry : " << endl;
    cout << "1. Paket A" << endl;
    cout << "2. Paket B" << endl;
    cout << "3. Lainnya" << endl;
    cout << "=========================================================================" << endl;
    cout << "Pilih : ";
    cin >> pilihanLayanan;
    cout << endl;

        if (pilihanLayanan == 1) {
            layanan = "Paket A";
        } else if (pilihanLayanan == 2) {
            layanan = "Paket B";
        } else if (pilihanLayanan == 3){
            layanan = "Lainnya";
        } else {
            cout << "Input tidak valid silahkan coba lagi" << endl;
            return;
        }

    cout << "Masukkan Berat Laundry: ";
    cin >> beratLaundry;

    q = createElmPakaian(laundryName, layanan, beratLaundry);
    insertFirst_Pakaian(p, q);
}

void menu_addLastLaundry(ListCustomer &LC){

    string cusName, laundryName, layanan;
    int pilihanLayanan, beratLaundry;

    cout << "Masukkan Nama Customer : ";
    cin >> cusName;
    p = search_Customer(LC, cusName);

    cout << "Masukkan Jenis Laundry : ";
    cin >> laundryName;
    cout << endl;

    cout << "Pilih Layanan Laundry : " << endl;
    cout << "1. Paket A" << endl;
    cout << "2. Paket B" << endl;
    cout << "3. Lainnya" << endl;
    cout << "=========================================================================" << endl;
    cout << "Pilih : ";
    cin >> pilihanLayanan;
    cout << endl;

        if (pilihanLayanan == 1) {
            layanan = "Paket A";
        } else if (pilihanLayanan == 2) {
            layanan = "Paket B";
        } else if (pilihanLayanan == 3){
            layanan = "Lainnya";
        } else {
            cout << "Input tidak valid silahkan coba lagi" << endl;
            return;
        }

    cout << "Masukkan Berat Laundry";
    cin >> beratLaundry;

    q = createElmPakaian(laundryName, layanan, beratLaundry);
    insertLast_Pakaian(p, q);

}

void menu_deleteFirstLaundry(ListCustomer &LC){
    addressCustomer p;
    string cusName;

    cout << "Masukkan Nama Customer : ";
    cin >> cusName;
    p = search_Customer(LC, cusName);
    cout << endl;
    cout << endl;

    deleteFirst_Pakaian(p, q);

}

void menu_deleteLastLaundry(ListCustomer &LC){
    addressCustomer p;
    string cusName;

    cout << "Masukkan Nama Customer : ";
    cin >> cusName;
    p = search_Customer(LC, cusName);
    cout << endl;
    cout << endl;

    deleteLast_Pakaian(p, q);

}
//I said god help me

