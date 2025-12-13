#include "header.h"
#include <iostream>

using namespace std;

addressLaundry createElmPakaian(string jenis, string layanan, int beratPakaian){
    addressLaundry P;

    P = new elmList_Pakaian;
    P->info.jenis = jenis;
    P->info.layanan = layanan;
    P->info.beratPakaian = beratPakaian;
    P->next = nullptr;
    P->prev = nullptr;

    return P;
}

bool isEmptyLaundry (addressCustomer P){
    return P->firstLaundry == nullptr;
}

void insertFirst_Pakaian(addressCustomer &P, addressLaundry Q){

    if (P == nullptr || Q == nullptr){
        return;
    }

    if (isEmptyLaundry(P)){
        P->firstLaundry = Q;

    } else if (P->firstLaundry->next == nullptr) {
        Q->prev = P->firstLaundry;
        P->firstLaundry->next = Q;

    } else {
        insertLast_Pakaian(P, Q);
    }
}


void insertLast_Pakaian(addressCustomer &P, addressLaundry Q){
    addressLaundry temp = P->firstLaundry;

    while (temp != nullptr) {
        temp = temp->next;
    }

    temp->next = Q;
    Q->prev = temp;
    Q->next = nullptr;
}

void insertAfter_Pakaian(addressCustomer &P, addressLaundry prec, addressLaundry Q){

   Q->next = prec->next;
   prec->next = Q;
   Q->prev = prec;

}

void show_AllLaundry(addressCustomer P){
    addressLaundry Q = P->firstLaundry;

    while (Q != nullptr){
        cout << "-----------------------------------------" << endl;
        cout << "Jenis Laundry: " << Q->info.jenis<< endl;
        cout << "Layanan Laundry: " << Q->info.layanan<< endl;
        cout << "Berat Pakaian: " << Q->info.beratPakaian << endl;
        cout << endl;

        Q = Q->next;
    }
}

void show_Laundry(addressLaundry P){
    if (P != nullptr) {
        cout << "-----------------------------------------" << endl;
        cout << "Jenis Laundry: " << P->info.jenis<< endl;
        cout << "Layanan Laundry: " << P->info.layanan<< endl;
        cout << "Berat Pakaian: " << P->info.beratPakaian << endl;
        cout << endl;
    }
}
