#include <iostream>
#include "header.h"

using namespace std;

int pilihan = 99;
ListCustomer LC;
addressCustomer P;

void menu_user(){
    while (pilihan != 0) {
        cout << "=========================================================================" << endl;
        cout << "||                                 MENU                                ||" << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih fitur : " << endl;
        cout << "1. Buat List Data" << endl;
        cout << "2. Tambah Data Customer" << endl;
        cout << "3. Hapus Data Customer berdasarkan Nama" << endl;
        cout << "4. Tambah Data Laundry" << endl;
        cout << "5. Hapus Data Laundry berdasarkan Jenis" << endl;
        cout << "6. Hitung Jumlah Customer" << endl;
        cout << "7. Hitung Jumlah Laundry per Customer" << endl;
        cout << "8. Hitung total Harga laundry per customer" << endl;
        cout << "9. Cari Data Customer berdasarkan Nama" << endl;
        cout << "10. Cari Data Laundry berdasarkan Jenis" << endl;
        cout << "11. Tampilkan seluruh Data" << endl;
        cout << "12. Tampilkan Data Customer" << endl;
        cout << "13. Tampilkan Data Laundry berdasarkan Layanan" << endl;
        cout << "0. Exit" << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih : ";
        cin >> pilihan;
        cout << endl;

        switch(pilihan) {
        case 0 :
            cout << "=========================================================================" << endl;
            cout << "            TERIMAKASIH TELAH MENGGUNAKAN APLIKASI TEL-U LAUNDRY         " << endl;
            cout << "=========================================================================" << endl;
            break;

        case 1 :
            createListCustomer(LC);
            break;
        case 2:
            menu_addCustomer(LC);
            break;
        case 3 :
            menu_deleteCustomer(LC);
            break;
        case 4 :
            menu_addLaundry(LC);
            break;
        case 5 :
            menu_deleteLaundry(LC);
            break;
        case 6 :
            menu_countCustomer(LC);
            break;
        case 7 :
            menu_countLaundry(LC);
            break;
        case 8 :
            menu_countHargaLaundry(LC);
            break;
        case 9 :
            menu_searchCustomer(LC);
            break;
        case 10 :
            menu_searchLaundry(LC);
            break;
        case 11 :
            menu_showAllData(LC);
            break;
        case 12 :
            menu_showCustomer(LC);
            break;
        case 13 :
            menu_showLaundry(LC);
            break;

        default:
            cout << "Fitur tidak tersedia, silahkan pilih fitur kembali!" << endl;
            break;
        }

    }
}

void menu_addCustomer(ListCustomer &LC){
    string nama, alamat;
    int noTelp;
    addressCustomer P;
    cout << "Silahkan Input Data Customer : " << endl;
    cout << "Nama : ";
    cin >> nama;
    cout << "Alamat : ";
    cin >> alamat;
    cout << "Nomor Telepon : ";
    cin >> noTelp;
    P = createElmCustomer(nama, alamat, noTelp);
    insertLast_Customer(LC, P);
    cout << "Data Customer telah ditambahkan" << endl;
}

void menu_deleteCustomer(ListCustomer &LC){
    string nama;
    addressCustomer C, P, Q, prec;

    cout << "Silahkan Input Nama Customer yang akan dihapus : " << endl;
    cin >> nama;
    C = search_Customer(LC, nama);

    Q = LC.first;
    while (Q != nullptr) {
        Q = Q->next;
    }

    if (C != nullptr) {
        if (C == LC.first) {
            deleteFirst_Customer(LC, P);
        } else if (C == Q) {
            deleteLast_Customer(LC, P);
        } else {
            prec = LC.first;
            while (prec->next != P) {
                prec = prec->next;
            }
            deleteAfter_Customer(LC, prec, P);
        }
    } else {
        cout << "Tidak dapat Menghapus Data Customer" << endl;
    }
}

void menu_addLaundry(ListCustomer &LC) {
    addressCustomer P;
    string jenis, layanan, nama;
    int beratPakaian;
    addressLaundry Q;

    cout << "Silahkan Input Nama Customer : ";
    cin >> nama;
    cout << endl;

    P = search_Customer(LC, nama);
    if (P != nullptr) {
        cout << "Silahkan Input Data Pakaian Laundry : " << endl;
        cout << "Jenis : ";
        cin >> jenis;
        cout << endl;
        cout << "Silahkan pilih Layanan : (Contoh : Paket A)" << endl;
        cout << "1. Paket A (Cuci Jemur)" << endl;
        cout << "2. Paket B (Cuci Jemur Setrika)" << endl;
        cout << "3. Paket C (Setrika)" << endl;
        cin >> layanan;
        cout << endl;
        cout << "Berat Pakaian : ";
        cin >> beratPakaian;
        cout << endl;

        Q = createElmPakaian(jenis, layanan, beratPakaian);
        insertLast_Pakaian(P, Q);
        cout << "Data Pakaian Laundry telah ditambahkan" << endl;
    }
}

void menu_deleteLaundry(ListCustomer &LC) {
    addressCustomer P = LC.first;
    string jenis;
    addressLaundry L, Q, prec;

    cout << "Silahkan Input Jenis Laundry yang akan dihapus : " << endl;
    cin >> jenis;

    while (P != nullptr) {
        L = search_LaundryJenis(P, jenis);
        if (L != nullptr) {
            break;
        }
        P = P->next;
    }

    if (P == nullptr || L == nullptr) {
        cout << "Tidak dapat Menghapus Data Laundry" << endl;
        return;
    }

    Q = P->firstLaundry;

    if (L == P->firstLaundry) {
        deleteFirst_Pakaian(P, L);
        return;
    }

    while (Q->next != nullptr) {
        Q = Q->next;
    }
    if (L == Q) {
        deleteLast_Pakaian(P, Q);
        return;
    }

    prec = P->firstLaundry;
    while (prec->next != L) {
        prec = prec->next;
    }
    deleteAfter_Pakaian(P, prec, L);
}


void menu_countCustomer(ListCustomer LC) {
    cout << "Jumlah Data Customer adalah " << countCustomer(LC) << endl;
}

void menu_countLaundry(ListCustomer LC) {
    string nama;
    addressCustomer P;
    int Q, R;

    cout << "Silahkan Input Nama Customer : ";
    cin >> nama;
    cout << endl;
    P = search_Customer(LC, nama);

    if (P != nullptr) {
     cout << "Jumlah Pakaian Laundry dari Customer " << P->info.nama << " adalah " << countLaundry(P) << " dengan Berat Laundry " << countBeratLaundry(P) << " gram" << endl;
    } else {
        cout << "Data Customer tidak ditemukan" << endl;
    }
}

void menu_countHargaLaundry(ListCustomer LC) {
    string nama;
    addressCustomer P;

    cout << "Silahkan Input Nama Customer : ";
    cin >> nama;
    cout << endl;
    P = search_Customer(LC, nama);
    if (P != nullptr) {
     cout << "Total Harga Laundry dari Customer " << P->info.nama << " adalah " << countHargaLaundry(P) << " dengan Berat Laundry " << countBeratLaundry(P) << " gram" << endl;
    }
}

void menu_searchCustomer(ListCustomer LC) {
    string nama;
    addressCustomer P;

    cout << "Silahkan Input Nama Customer yang ingin dicari : " << endl;
    cin >> nama;
    P = search_Customer(LC, nama);

    if (P != nullptr) {
        cout << "Data Customer ditemukan" << endl;
        show_Customer(P);
    } else {
        cout << "Data Customer tidak ditemukan" << endl;
    }
}

void menu_searchLaundry(ListCustomer LC) {
    addressCustomer P = LC.first;
    addressLaundry Q = nullptr;
    string jenis;

    cout << "Silahkan Input Jenis Laundry yang ingin dicari : " << endl;
    cin >> jenis;
    while (P != nullptr && Q == nullptr) {
        Q = search_LaundryJenis(P, jenis);
        P = P->next;
    }

    if (Q != nullptr) {
        cout << "Data Laundry ditemukan" << endl;
        show_Laundry(Q);
    } else {
        cout << "Data Laundry tidak ditemukan" << endl;
    }
}

void menu_showAllData(ListCustomer LC) {
    addressCustomer P = LC.first;
    addressLaundry Q;

    cout << "" << endl;
    while (P != nullptr) {
        show_Customer(P);
        Q = P->firstLaundry;
        while (Q != nullptr) {
            show_Laundry(Q);
            Q = Q->next;
        }
        P = P->next;
    }
}

void menu_showCustomer(ListCustomer LC) {
    cout << "" << endl;
    show_AllCustomer(LC);
}

void menu_showLaundry(ListCustomer LC) {
    addressCustomer P = LC.first;
    string layanan;

    cout << "Silahkan pilih Layanan : (Contoh : Paket A)";
    cout << "1. Paket A (Cuci Jemur)" << endl;
    cout << "2. Paket B (Cuci Jemur Setrika)" << endl;
    cout << "3. Paket C (Setrika)" << endl;
    cin >> layanan;
    cout << endl;

    while (P != nullptr) {
        addressLaundry Q = P->firstLaundry;
        while (Q != nullptr) {
            if (Q->info.layanan == layanan) {
                show_Customer(P);
                show_Laundry(Q);
            }
            Q = Q->next;
        }
        P = P->next;
    }
}

