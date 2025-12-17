#include <iostream>
#include "header.h"

using namespace std;

int pilihUser;
bool keluar = false;
ListCustomer LC;
addressCustomer P;

void menu_user(){
    while (!keluar) {
        cout << "=========================================================================" << endl;
        cout << "||                                 MENU                                ||" << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih fitur : " << endl;
        cout << "1. Inisialisasi seluruh Data" << endl;
        cout << "2. Tambah Data Customer setelah Nama tertentu" << endl;
        cout << "3. Hapus Data Customer berdasarkan Nama" << endl;
        cout << "4. Tambah Data Laundry setelah Jenis tertentu" << endl;
        cout << "5. Hapus Data Laundry Customer berdasarkan Jenis" << endl;
        cout << "6. Hitung Jumlah Customer" << endl;
        cout << "7. Hitung Jumlah Laundry per Customer" << endl;
        cout << "8. Hitung total Harga laundry per customer" << endl;
        cout << "9. Cari Data Customer berdasarkan Nama" << endl;
        cout << "10. Cari Data Laundry berdasarkan Jenis" << endl;
        cout << "11. Urutkan Data Pakaian Laundry berdasarkan Berat Pakaian" << endl;
        cout << "12. Tampilkan Data Customer" << endl;
        cout << "13. Tampilkan Data Laundry berdasarkan Layanan" << endl;
        cout << "14. Tampilkan Data Laundry berdasarkan Nama Customer" << endl;
        cout << "0. Exit" << endl;
        cout << "=========================================================================" << endl;
        cout << "Pilih : ";
        cin >> pilihUser;
        cout << endl;

        switch(pilihUser) {
        case 1 :
            createListCustomer(LC);
            inisialisasi_data(LC);
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
            menu_urutkanLaundry(LC);
            break;
        case 12 :
            menu_showCustomer(LC);
            break;
        case 13 :
            menu_showLaundry(LC);
            break;
        case 14 :
            menu_showCustomerLaundry(LC);
            break;
        case 0 :
            keluar = true;
            break;
        default:
            cout << "Fitur tidak tersedia, silahkan pilih fitur kembali!" << endl;
            break;
        }

    }
}

//2
void menu_addCustomer(ListCustomer &LC){
    string nama, alamat, idCustomer, noTelp, namaPrec;
    addressCustomer P, prec;

    cout << "Silahkan Input Nama yang ingin ditambahkan setelahnya : ";
    cin >> namaPrec;
    prec = search_Customer(LC, namaPrec);
    if (prec == nullptr) {
        cout << "Tidak dapat menambahkan data, karena Nama belum tersedia" << endl;
    } else {
        cout << "Silahkan Input Data Customer : " << endl;
        cout << "Nama : ";
        cin >> nama;
        cout << "Alamat : ";
        cin >> alamat;
        cout << "ID Customer : ";
        cin >> idCustomer;
        cout << "Nomor Telepon : ";
        cin >> noTelp;
        P = createElmCustomer(nama, alamat, idCustomer, noTelp);
        insertAfter_Customer(LC, prec, P);
    }
}

//3
void menu_deleteCustomer(ListCustomer &LC){
    string nama;
    addressCustomer P, Q, prec;

    cout << "Silahkan Input Nama Customer yang akan dihapus : " << endl;
    cin >> nama;
    P = search_Customer(LC, nama);

    Q = LC.first;
    while (Q != nullptr) {
        Q = Q->next;
    }

    if (P != nullptr) {
        if (P == LC.first) {
            deleteFirst_Customer(LC, P);
            cout << "Data Customer telah dihapus" << endl;
        } else if (P == Q) {
            deleteLast_Customer(LC, P);
            cout << "Data Customer telah dihapus" << endl;
        } else {
            prec = LC.first;
            while (prec->next != P) {
                prec = prec->next;
            }
            deleteAfter_Customer(LC, prec, P);
            cout << "Data Customer telah dihapus" << endl;
        }
    } else {
        cout << "Tidak dapat Menghapus Data Customer" << endl;
    }
}

//4
void menu_addLaundry(ListCustomer &LC) {
    addressCustomer P;
    string jenis, warna, layanan, nama, jenisPrec;
    int beratPakaian;
    addressLaundry Q, prec;

    cout << "Silahkan Input Nama Customer : ";
    cin >> nama;
    cout << endl;

    P = search_Customer(LC, nama);
    if (P != nullptr) {
        cout << "Silahkan Input Jenis yang ingin ditambahkan setelahnya : ";
        cin >> jenisPrec;
        prec = search_LaundryJenis(P, jenisPrec);

        if (prec != nullptr) {
            cout << "Silahkan Input Data Pakaian Laundry : " << endl;
            cout << "Jenis : ";
            cin >> jenis;
            cout << endl;
            cout << "Silahkan pilih Layanan : (Contoh : Paket_A)" << endl;
            cout << "1. Paket A (Cuci Jemur)" << endl;
            cout << "2. Paket B (Cuci Jemur Setrika)" << endl;
            cout << "3. Paket C (Setrika)" << endl;
            cin >> layanan;
            cout << endl;
            cout << "Berat Pakaian : ";
            cin >> beratPakaian;
            cout << endl;

            Q = createElmPakaian(jenis, layanan, beratPakaian);
            insertAfter_Pakaian(P, prec, Q);
            cout << "Data Pakaian Laundry telah ditambahkan" << endl;
        }
    }
}

//5
void menu_deleteLaundry(ListCustomer &LC) {
    addressCustomer P = LC.first;
    string jenis, nama;
    addressLaundry L, Q, prec;

    cout << "Silahkan Input Nama Customer : ";
    cin >> nama;
    P = search_Customer(LC, nama);

    if (P != nullptr) {
        cout << "Silahkan Input Jenis Laundry yang akan dihapus : " << endl;
        cin >> jenis;
        L = search_LaundryJenis(P, jenis);
        if (L != nullptr) {
            Q = P->firstLaundry;
            while (Q->next != nullptr) {
                Q = Q->next;
            }
            if (L == P->firstLaundry) {
                deleteFirst_Pakaian(P, L);
                cout << "Data Pakaian Laundry telah dihapus" << endl;
            } else if (L == Q) {
                deleteLast_Pakaian(P, Q);
                cout << "Data Pakaian Laundry telah dihapus" << endl;
            } else {
                prec = P->firstLaundry;
                while (prec->next != L) {
                    prec = prec->next;
                }
                deleteAfter_Pakaian(P, prec, L);
                cout << "Data Pakaian Laundry telah dihapus" << endl;
            }
        }

    }


}

//6
void menu_countCustomer(ListCustomer LC) {
    cout << "Jumlah Data Customer adalah " << countCustomer(LC) << endl;
}

//7
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

//8
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

//9
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

//10
void menu_searchLaundry(ListCustomer LC) {
    addressCustomer P = LC.first;
    addressLaundry Q = nullptr;
    string jenis;

    cout << "Silahkan Input Jenis Laundry yang ingin dicari : " << endl;
    cin >> jenis;
    while (P != nullptr) {
        Q = search_LaundryJenis(P, jenis);
        if (Q != nullptr) {
            show_Customer(P);
            show_Laundry(Q);
        } else {
            cout << "Data Laundry tidak ditemukan" << endl;
        }
        P = P->next;
    }
}

//11
void menu_urutkanLaundry(ListCustomer &LC) {
    string nama;
    cout << "Silahkan Input Nama Customer : " << endl;
    cin >> nama;
    addressCustomer P = search_Customer(LC, nama);

    if (P == nullptr || P->firstLaundry == nullptr) {
        cout << "Data laundry kosong!" << endl;
    } else {
        int pilihan;
        cout << "Urutkan Secara : " << endl;
        cout << "1. Ascending" << endl;
        cout << "2. Descending" << endl;
        cout << "Pilih : ";
        cin >> pilihan;

        addressLaundry L = P->firstLaundry;
        infotypePakaian temp;

        switch(pilihan) {
            case 1:  // ASCENDING
                addressLaundry i, j, minNode;

                for (i = L; i->next != nullptr; i = i->next) {
                    minNode = i;
                    for (j = i->next; j != nullptr; j = j->next) {
                        if (j->info.beratPakaian < minNode->info.beratPakaian) {
                            minNode = j;
                        }
                    }
                    if (minNode != i) {
                        temp = i->info;
                        i->info = minNode->info;
                        minNode->info = temp;
                    }
                }
                break;
            case 2: // DESCENDING
                addressLaundry maxNode;

                for (i = L; i->next != nullptr; i = i->next) {
                    maxNode = i;
                    for (j = i->next; j != nullptr; j = j->next) {
                        if (j->info.beratPakaian > maxNode->info.beratPakaian) {
                            maxNode = j;
                        }
                    }
                    if (maxNode != i) {
                        temp = i->info;
                        i->info = maxNode->info;
                        maxNode->info = temp;
                    }
                }
                break;
        }
    }


}

//12
void menu_showCustomer(ListCustomer LC) {
    cout << "Tampilkan Data Customer " << endl;
    show_AllCustomer(LC);
}

//13
void menu_showLaundry(ListCustomer LC) {
    addressCustomer P = LC.first;
    string layanan;

    cout << "Silahkan pilih Layanan : (Contoh : Paket_A)" << endl;
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

//14
void menu_showCustomerLaundry(ListCustomer LC) {
    string nama;
    cout << "Silahkan Input Nama Customer : " << endl;
    cin >> nama;
    addressCustomer P = search_Customer(LC, nama);

    show_Customer(P);

    if (P != nullptr) {
        addressLaundry Q = P->firstLaundry;
        while (Q != nullptr) {
            show_Laundry(Q);
            Q = Q->next;
        }
    }
}

