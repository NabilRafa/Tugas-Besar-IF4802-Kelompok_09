#include "laundry.h"
#include <iostream>

using namespace std;

void deleteFirst_Pakaian(addressCustomer &P, addressLaundry &Q) {
    if (P->firstLaundry == nullptr) {
        cout << "Tidak ada data yang bisa dihapus"
        Q = nullptr;
    } else {
        Q = P->firstLaundry;
        P->firstLaundry = Q->next;
        Q->next = nullptr;
    }
}
void deleteLast_Pakaian(addressCustomer &P, addressLaundry &Q) {
    if (P->firstLaundry == nullptr) {
        cout << "Tidak ada data yang bisa dihapus"
        P = nullptr;
    } else {
        addressLaundry R;
        R = P->firstLaundry;
        while (R != nullptr) {
            R = R->next;
        }
        Q = R;
        R->prev == nullptr;
        R->next == nullptr;
    }
}
void deleteAfter_Pakaian(addressCustomer &P, addressLaundry prec, addressLaundry &Q) {
    if (P->firstLaundry == nullptr || prec->next == nullptr) {
        cout << "Tidak ada data yang bisa dihapus"
        P = nullptr;
    } else {
        Q = prec->next;
        prec->next = Q->next;
        Q->next->prev = prec;
        Q->next = nullptr;
        Q->prev == nullptr;
    }
}

addressLaundry search_Customer(addressCustomer P, string jenis) {
    addressLaundry found;
    found = nullptr;

    if (P->firstLaundry == nullptr) {
        cout << "Data tidak ditemukan" << endl;
    } else {
        addressLaundry Q;
        Q = P->firstLaundry;
        while (Q != nullptr) {
            if (Q->info.jenis == jenis) {
                found = Q;
            }
            Q = Q->next;
        }
    }
    return found;
}

int countLaundry(addressCustomer P) {
    addressLaundry Q = P->firstLaundry;
    int total = 0;

    while (Q != nullptr) {
        total += 1;
        Q = Q->next;
    }
    return total;
}
