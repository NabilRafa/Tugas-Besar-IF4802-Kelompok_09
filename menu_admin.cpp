#include "iostream"
#include "header.h"

using namespace std;
    ListCustomer Customer;
    string nama, alamat, idCustomer, noTelp;
    int pilihanADMIN;
    bool Keluar = false;
    addressCustomer p;
    addressLaundry q;

void menu_admin(){

    while (!Keluar) {
        cout << "=========================================================================" << endl;
        cout << "||                                 MENU                                ||" << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih Fitur :" << endl;
        cout << "1. Customer" << endl;
        cout << "2. Laundry" << endl;
        cout << "99. Inisialisasi seluruh Data" << endl;
        cout << "100. Tampilkan seluruh Data" << endl;
        cout << "0. Exit" << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih : ";
        cin >> pilihanADMIN;
        cout << endl;

        switch(pilihanADMIN) {
        case 1:
            menu_customer();
            break;

        case 2 :
            menu_laundry();
            break;

        case 99 :
            createListCustomer(Customer);
            inisialisasi_data(Customer);
            break;

        case 100 :
            menu_showAllData(Customer);
            break;

        case 0 :
            Keluar = true;
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
        cout << "4. Hapus Customer Pertama" << endl;
        cout << "5. Hapus Customer Terakhir" << endl;
        cout << "0. Kembali ke menu sebelumnya" << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih : ";

        cin >> pilihan_menu_customer;
        cout << endl;

        switch(pilihan_menu_customer) {
            case 0 :
                cout << "=========================================================================" << endl;
                cout << "            TERIMAKASIH TELAH MENGGUNAKAN APLIKASI TEL-U LAUNDRY         " << endl;
                cout << "=========================================================================" << endl;
                break;

            case 1 :
                createListCustomer(Customer);
                break;
            case 2:
                cout << "Silahkan Input Data Customer : " << endl;
                cout << "Nama : ";
                cin >> nama;
                cout << "Alamat : ";
                cin >> alamat;
                cout << "ID Customer : ";
                cin >> idCustomer;
                cout << "Nomor Telepon : ";
                cin >> noTelp;
                cout << endl;
                p = createElmCustomer(nama, alamat, idCustomer, noTelp);
                insertFirst_Customer(Customer, p);
                break;

            case 3:
                cout << "Silahkan Input Data Customer : " << endl;
                cout << "Nama : ";
                cin >> nama;
                cout << "Alamat : ";
                cin >> alamat;
                cout << "ID Customer : ";
                cin >> idCustomer;
                cout << "Nomor Telepon : ";
                cin >> noTelp;
                p = createElmCustomer(nama, alamat, idCustomer, noTelp);
                insertLast_Customer(Customer, p);
                break;

            case 4:
                deleteFirst_Customer(Customer, p);
                break;

            case 5:
                deleteLast_Customer(Customer, p);
                break;

            default:
            cout << "Fitur tidak tersedia, silahkan pilih fitur kembali!" << endl;
            break;
        }
    }
}

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

void menu_laundry() {

}

//I said god help me

