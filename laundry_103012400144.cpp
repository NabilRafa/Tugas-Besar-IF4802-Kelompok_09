#include "laundry.h"
#include <iostream>

using namespace std;

void createListPakaian(ListLaundry &LL){
    LL.first = nullptr;
    LL.last = nullptr;
}

addressLaundry createElmPakaian(string jenis, string layanan, string status){
    addressLaundry P;

    P = new elmList_Pakaian;
    P->info.jenis = jenis;
    P->info.layanan = layanan;
    P->info.status = status;
    P->next = nullptr;
    P->prev = nullptr;

    return P;
}

void insertFirst_Pakaian(ListLaundry &LL, addressLaundry P){
    if (LL.first == nullptr) {
        LL.first = P;
        LL.last = P;

    } else {
        P->next = LL.first;
        LL.first->prev = P;
        LL.first = P;
    }
}

void insertLast_Pakaian(ListLaundry &LL, addressLaundry P){
    if (LL.first == nullptr) {
        LL.first = P;
        LL.last = P;
        P->prev = nullptr;
        P->next = nullptr;

    } else {
        P->prev = LL.last;
        LL.last->next = P;
        LL.last = P;
        LL.last->next = nullptr;
    }
}

void insertAfter_Pakaian(ListLaundry &LL, addressLaundry prec, addressLaundry P){
    if (LL.first == nullptr) {
        cout << "List kosong" << endl;
        return;

    } else if (prec == nullptr) {
        cout << "prec kosong" << endl;
        return;

    } else if (prec->next == nullptr){
        insertLast_Pakaian(LL, P);

    } else {
        P->next = prec->next;
        P->next->prev = P;
        prec->next = P;
        P->prev = prec;

    }
}
