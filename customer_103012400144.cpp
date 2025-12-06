#include "customer.h"
#include <iostream>

using namespace std;

void createListCustomer(ListCustomer &LC){
    LC.first = nullptr;
}

addressCustomer createElmCustomer(string nama, string alamat, int noTelp){
    addressCustomer p;

    p = new elmList_Customer;
    p->info.nama = nama;
    p->info.alamat = alamat;
    p->info.noTelp = noTelp;
    p->firstLaundry = nullptr;
    p->next = nullptr;

    return p;
}

void insertFirst_Customer(ListCustomer &LC, addressCustomer P){
    if (LC.first == nullptr) {
        LC.first = P;

    } else {
        P->next = LC.first;
        LC.first = P;

    }
}

void insertLast_Customer(ListCustomer &LC, addressCustomer P){
    addressCustomer q;

    if (LC.first == nullptr) {
        LC.first = P;

    } else {
        q = LC.first;

        while (q->next != nullptr){
            q=q->next;
        }
        q->next = P;
    }
}

void insertAfter_Customer(ListCustomer &LC, addressCustomer prec, addressCustomer P){
    addressCustomer q;

    if (LC.first == nullptr) {
        cout << "List kosong" << endl;
        P = nullptr;
    } else if (prec == nullptr){
        cout << "prec kosong" << endl;
        P = nullptr;

    } else if (prec->next == nullptr) {
        prec->next = P;
        P->next = nullptr;

    } else {
        P->next = prec->next;
        prec->next = P;

    }
}

