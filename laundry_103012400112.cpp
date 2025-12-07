#include "laundry.h"
#include <iostream>

using namespace std;

void deleteFirst_Pakaian(addressCustomer &P, addressLaundry &Q) {


    if (LL.first == nullptr && LL.last == nullptr) {
        cout << "Tidak ada data yang bisa dihapus"
        P = nullptr;
    } else {
        P = LL.first;
        LL.first = P->next;
        P->next = nullptr;
    }
}
void deleteLast_Pakaian(ListLaundry &LL, addressLaundry &P) {
    if (LL.first == nullptr && LL.last == nullptr) {
        cout << "Tidak ada data yang bisa dihapus"
        P = nullptr;
    } else {
        P = LL.last;
        LL.last = P->prev;
        P->prev->next = nullptr;
    }
}
void deleteAfter_Pakaian(ListLaundry &LL, addressLaundry prec, addressLaundry &P) {
    if (LL.first == nullptr && LL.last == nullptr || prec->next == nullptr) {
        cout << "Tidak ada data yang bisa dihapus"
        P = nullptr;
    } else {
        P = prec->next;
        prec->next = P->next;
        P->next = nullptr;
    }
}
