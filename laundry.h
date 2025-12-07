#ifndef LAUNDRY_H_INCLUDED
#define LAUNDRY_H_INCLUDED

#include "customer.h"
#include <iostream>

using namespace std;

struct elmList_Pakaian;
typedef elmList_Pakaian *addressLaundry;

struct elmList_Customer;
typedef elmList_Customer *addressCustomer;

struct infotypePakaian {
    string jenis;
    string layanan;
    string status;
};

struct elmList_Pakaian {
    infotypePakaian info;
    addressLaundry next;
    addressLaundry prev;
};

addressLaundry createElmPakaian(string jenis, string layanan, string status);
bool isEmptyLaundry (addressCustomer P);

void insertFirst_Pakaian(addressCustomer &P, addressLaundry Q);
void insertLast_Pakaian(addressCustomer &P, addressLaundry Q);
void insertAfter_Pakaian(addressCustomer &P, addressLaundry prec, addressLaundry Q);

void deleteFirst_Pakaian(addressCustomer &P, addressLaundry &Q);
void deleteLast_Pakaian(addressCustomer &P, addressLaundry &Q);
void deleteAfter_Pakaian(addressCustomer &P, addressLaundry prec, addressLaundry &Q);

addressLaundry search_Laundry(addressCustomer P, string nama);
void show_Laundry(addressCustomer P, string keyword);

int countLaundry(addressCustomer P);
#endif // LAUNDRY_H_INCLUDED
