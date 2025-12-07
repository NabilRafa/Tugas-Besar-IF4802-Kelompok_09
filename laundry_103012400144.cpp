#include "customer.h"
#include "laundry.h"
#include <iostream>

using namespace std;

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

void show_Laundry(ListCustomer LC, string keyword){
    addressCustomer p;
    addressLaundry q;

    p = LC.first;

    while (p != nullptr || p->info.nama != keyword) {
        p = p->next;
    }

    if (p->info.nama == keyword) {

        cout << "-----------------------------------------" << endl;
        cout << "Nama Customer: " << p->info.nama << endl;
        cout << "No Telp Customer: " << p->info.noTelp << endl;
        cout << "Alamat Customer: " << p->info.alamat << endl;
        cout << endl;

        q = p->firstLaundry;
        while (q != nullptr) {

            cout << "-----------------------------------------" << endl;
            cout << "Jenis Laundry: " << q->info.jenis<< endl;
            cout << "Layanan Laundry: " << q->info.layanan<< endl;
            cout << "Status Pengerjaan: " << q->info.status << endl;
            cout << endl;
            cout << endl;

            q = q->next;
        }
    }

}
