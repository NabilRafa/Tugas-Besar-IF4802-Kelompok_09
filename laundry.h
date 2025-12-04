#ifndef LAUNDRY_H_INCLUDED
#define LAUNDRY_H_INCLUDED

#include "customer.h"
#include <iostream>
#include <string>

using namespace std;

typedef struct elmList_Customer* addressCustomer;
typedef struct elmList_Pakaian *addressLaundry;

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

struct ListLaundry {
    addressLaundry first;
    addressLaundry last;
};

void createListPakaian(ListLaundry &LL);
addressLaundry createElmPakaian(string jenis, string layanan, string status);

void insertFirst_Pakaian(ListLaundry &LL, addressLaundry P);
void insertLast_Pakaian(ListLaundry &LL, addressLaundry P);
void insertAfter_Pakaian(ListLaundry &LL, addressLaundry prec, addressLaundry P);

void deleteFirst_Pakaian(ListLaundry &LL, addressLaundry &P);
void deleteLast_Pakaian(ListLaundry &LL, addressLaundry &P);
void deleteAfter_Pakaian(ListLaundry &LL, addressLaundry prec, addressLaundry &P);

#endif // LAUNDRY_H_INCLUDED
