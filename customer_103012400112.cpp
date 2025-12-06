#include "customer.h"
#include <iostream>

using namespace std;

void deleteFirst_Customer(ListCustomer &LC, addressCustomer &P) {
    if (LC.first == nullptr) {
        cout << "Tidak ada data yang bisa dihapus";
        P = nullptr;
    } else {
        P = LC.first;
        LC.first = P->next;
        P->next = nullptr;
    }
}
void deleteLast_Customer(ListCustomer &LC, addressCustomer &P) {
    addressCustomer Q;
    if (LC.first == nullptr) {
        cout << "Tidak ada data yang bisa dihapus";
        P = nullptr;
    } else {
        Q = LC.first;
        while (Q->next->next != nullptr) {
            Q = Q->next;
        }
        P = Q->next;
        Q->next = nullptr;
    }
}
void deleteAfter_Customer(ListCustomer &LC, addressCustomer prec, addressCustomer &P) {
    if (LC.first == nullptr || prec->next == nullptr) {
        cout << "Tidak ada data yang bisa dihapus";
        P = nullptr;
    } else {
        P = prec->next;
        prec->next = P->next;
        P->next = nullptr;
    }
}

addressCustomer search_Customer(ListCustomer LC, string nama) {
    addressCustomer found;
    found = nullptr;
    if (LC.first == nullptr) {
        cout << "Data tidak ditemukan" << endl;
    } else {
        addressCustomer P;
        P = LC.first;
        while (P != nullptr) {
            if (P->info.nama == nama) {
                found = P;
            }
            P = P->next;
        }
    }
    return P;
}
