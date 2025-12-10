#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>

using namespace std;


//Customer
struct elmList_Customer;
typedef elmList_Customer *addressCustomer;

struct elmList_Pakaian;
typedef elmList_Pakaian *addressLaundry;

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

//Pakaian
struct infotypePakaian {
    string jenis;
    string layanan;
    string status;
    int beratPakaian;
};

struct elmList_Pakaian {
    infotypePakaian info;
    addressLaundry next;
    addressLaundry prev;
};

void createListCustomer(ListCustomer &LC);
addressCustomer createElmCustomer(string nama, string alamat, int noTelp);
bool isEmptyCustomer (ListCustomer LC);

void insertFirst_Customer(ListCustomer &LC, addressCustomer P);
void insertLast_Customer(ListCustomer &LC, addressCustomer P);
void insertAfter_Customer(ListCustomer &LC, addressCustomer prec, addressCustomer P);

void deleteFirst_Customer(ListCustomer &LC, addressCustomer &P);
void deleteLast_Customer(ListCustomer &LC, addressCustomer &P);
void deleteAfter_Customer(ListCustomer &LC, addressCustomer prec, addressCustomer &P);

addressCustomer search_Customer(ListCustomer LC, string nama);
void show_Customer(ListCustomer &LC);

int countCustomer (ListCustomer LC);

//Pakaian
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
#endif // HEADER_H_INCLUDED
