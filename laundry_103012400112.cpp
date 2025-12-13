#include "header.h"
#include <iostream>

using namespace std;

void deleteFirst_Pakaian(addressCustomer &P, addressLaundry &Q) {
    if (P->firstLaundry == nullptr) {
        cout << "Tidak ada data yang bisa dihapus";
        Q = nullptr;
    } else {
        Q = P->firstLaundry;
        P->firstLaundry = Q->next;
        Q->next = nullptr;
    }
}
void deleteLast_Pakaian(addressCustomer &P, addressLaundry &Q) {
    if (P->firstLaundry == nullptr) {
        cout << "Tidak ada data yang bisa dihapus";
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
        cout << "Tidak ada data yang bisa dihapus";
        P = nullptr;
    } else {
        Q = prec->next;
        prec->next = Q->next;
        Q->next->prev = prec;
        Q->next = nullptr;
        Q->prev == nullptr;
    }
}

addressLaundry search_LaundryJenis(addressCustomer P, string jenis) {
    addressLaundry found;
    found = nullptr;

    if (P->firstLaundry == nullptr) {
        cout << "Data Laundry tidak ada" << endl;
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

addressLaundry search_LaundryLayanan(addressCustomer P, string layanan) {
    addressLaundry found;
    found = nullptr;

    if (P->firstLaundry == nullptr) {
        cout << "Data Laundry tidak ada" << endl;
    } else {
        addressLaundry Q = P->firstLaundry;
        while (Q != nullptr) {
            if (Q->info.layanan == layanan) {
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

int countBeratLaundry(addressCustomer P) {
    addressLaundry Q = P->firstLaundry;
    int total = 0;

    while (Q != nullptr) {
        total += Q->info.beratPakaian;
        Q = Q->next;
    }
    return total;
}

int countHargaLaundry(addressCustomer P) {
    addressLaundry Q = P->firstLaundry;
    int total = 0;

    while (Q != nullptr) {
        if (Q->info.layanan == "Paket A") {
            if (Q->info.beratPakaian >= 100 && Q->info.beratPakaian < 250) {
                total+= 1000;
            } else if (Q->info.beratPakaian >= 250 && Q->info.beratPakaian < 500) {
                total+= 3000;
            } else {
                total+= 5000;
            }
        } else if (Q->info.layanan == "Paket B") {
            if (Q->info.beratPakaian >= 100 && Q->info.beratPakaian < 250) {
                total+= 3000;
            } else if (Q->info.beratPakaian >= 250 && Q->info.beratPakaian < 500) {
                total+= 5000;
            } else {
                total+= 7000;
            }
        } else {
            if (Q->info.beratPakaian >= 100 && Q->info.beratPakaian < 250) {
                total+= 2000;
            } else if (Q->info.beratPakaian >= 250 && Q->info.beratPakaian < 500) {
                total+= 4000;
            } else {
                total+= 6000;
            }
        }

        Q = Q->next;
    }
    return total;
}
