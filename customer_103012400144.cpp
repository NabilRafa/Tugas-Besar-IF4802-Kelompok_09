#include "header.h"
#include <iostream>

using namespace std;

void createListCustomer(ListCustomer &LC){
    LC.first = nullptr;
}

bool isEmptyCustomer (ListCustomer LC){
    return LC.first == nullptr;
}

addressCustomer createElmCustomer(string nama, string alamat, string idCustomer, string noTelp){
    addressCustomer p;

    p = new elmList_Customer;
    p->info.nama = nama;
    p->info.alamat = alamat;
    p->info.idCustomer = idCustomer;
    p->info.noTelp = noTelp;
    p->firstLaundry = nullptr;
    p->next = nullptr;

    return p;
}

void insertFirst_Customer(ListCustomer &LC, addressCustomer P){
    if (LC.first == nullptr) {
        LC.first = P;
        P->next = nullptr;

    } else {
        P->next = LC.first;
        LC.first = P;

    }
}

void insertLast_Customer(ListCustomer &LC, addressCustomer P){
    addressCustomer q;

    if (LC.first == nullptr) {
        LC.first = P;
        P->next = nullptr;

    } else {
        q = LC.first;

        while (q->next != nullptr){
            q=q->next;
        }
        q->next = P;
    }
}

void insertAfter_Customer(ListCustomer &LC, addressCustomer prec, addressCustomer P){

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


void show_AllCustomer(ListCustomer &LC){
    addressCustomer p;

    p = LC.first;

    while (p != nullptr){
        cout << "-----------------------------------------" << endl;
        cout << "Nama Customer: " << p->info.nama << endl;
        cout << "No Telp Customer: " << p->info.noTelp << endl;
        cout << "Alamat Customer: " << p->info.alamat << endl;
        cout << "-----------------------------------------" << endl;
        cout << endl;

        p = p->next;
    }
}

void show_Customer(addressCustomer &P) {
    if (P != nullptr){
        cout << "-----------------------------------------" << endl;
        cout << "Nama Customer: " << P->info.nama << endl;
        cout << "No Telp Customer: " << P->info.noTelp << endl;
        cout << "Alamat Customer: " << P->info.alamat << endl;
        cout << "-----------------------------------------" << endl;
        cout << endl;
    }
}

void deleteCustomer(ListCustomer &LC, addressCustomer &P){
    addressCustomer temp;

    if (LC.first == P){
        LC.first = P->next;
        delete P;
        P = nullptr;

    } else if (P->next != nullptr) {
        temp = LC.first;

        while (temp->next != P) {
            temp = temp->next;
        }

        temp->next = P->next;
        P->next = nullptr;
        delete P;
        P = nullptr;

    } else {
        temp = LC.first;

        while (temp->next != P) {
            temp = temp->next;
        }
        temp->next = nullptr;
        delete P;
        P = nullptr;
    }
}
