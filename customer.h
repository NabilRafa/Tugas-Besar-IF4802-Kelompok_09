#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED

#include "laundry.h"
#include <iostream>
#include <string>

using namespace std;

typedef struct elmList_Customer* addressCustomer;
typedef struct elmList_Pakaian *addressLaundry;

struct infotypeCustomer {
    string nama;
    string alamat;
    int noTelp;
};

struct elmList_Customer {
    infotypeCustomer info;
    addressCustomer next;
    addressLaundry firstLaundry;
};

struct ListCustomer {
    addressCustomer first;
};

void createListCustomer(ListCustomer &LC);
addressCustomer createElmCustomer(string nama, string alamat, int noTelp);

void insertFirst_Customer(ListCustomer &LC, addressCustomer P);
void insertLast_Customer(ListCustomer &LC, addressCustomer P);
void insertAfter_Customer(ListCustomer &LC, addressCustomer prec, addressCustomer P);

void deleteFirst_Customer(ListCustomer &LC, addressCustomer &P);
void deleteLast_Customer(ListCustomer &LC, addressCustomer &P);
void deleteAfter_Customer(ListCustomer &LC, addressCustomer prec, addressCustomer &P);

#endif // CUSTOMER_H_INCLUDED
