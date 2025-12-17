#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>

using namespace std;

//Customer
typedef struct elmList_Customer *addressCustomer;

typedef struct elmList_Pakaian *addressLaundry;

struct infotypeCustomer {
    string nama;
    string alamat;
    string idCustomer;
    string noTelp;
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
    int beratPakaian;
};

struct elmList_Pakaian {
    infotypePakaian info;
    addressLaundry next;
    addressLaundry prev;
};

//Basic Function & Procedure Customer
void createListCustomer(ListCustomer &LC);
addressCustomer createElmCustomer(string nama, string alamat, string idCustomer, string noTelp);
bool isEmptyCustomer (ListCustomer LC);

void inisialisasi_data(ListCustomer &LC);

void insertFirst_Customer(ListCustomer &LC, addressCustomer P);
void insertLast_Customer(ListCustomer &LC, addressCustomer P);
void insertAfter_Customer(ListCustomer &LC, addressCustomer prec, addressCustomer P);

void deleteFirst_Customer(ListCustomer &LC, addressCustomer &P);
void deleteLast_Customer(ListCustomer &LC, addressCustomer &P);
void deleteAfter_Customer(ListCustomer &LC, addressCustomer prec, addressCustomer &P);

void deleteCustomer(ListCustomer &LC, addressCustomer &P);

addressCustomer search_Customer(ListCustomer LC, string keyword);

void show_Customer(addressCustomer &P);
void show_AllCustomer(ListCustomer &LC);
int countCustomer (ListCustomer LC);


//Basic Function & Procedure Pakaian
addressLaundry createElmPakaian(string jenis, string layanan, int beratPakaian);
bool isEmptyLaundry (addressCustomer P);

void insertFirst_Pakaian(addressCustomer &P, addressLaundry Q);
void insertLast_Pakaian(addressCustomer &P, addressLaundry Q);
void insertAfter_Pakaian(addressCustomer &P, addressLaundry prec, addressLaundry Q);

void deleteFirst_Pakaian(addressCustomer &P, addressLaundry &Q);
void deleteLast_Pakaian(addressCustomer &P, addressLaundry &Q);
void deleteAfter_Pakaian(addressCustomer &P, addressLaundry prec, addressLaundry &Q);

addressLaundry search_LaundryJenis(addressCustomer P, string jenis);
void show_Laundry(addressLaundry P);
int countLaundry(addressCustomer P);
int countBeratLaundry(addressCustomer P);
int countHargaLaundry(addressCustomer P);


//main_admin.cpp
void menu_customer();
void menu_laundry();


//main_user,cpp
void menu_addCustomer(ListCustomer &LC);
void menu_deleteCustomer(ListCustomer &LC);
void menu_addLaundry(ListCustomer &LC);
void menu_deleteLaundry(ListCustomer &LC);
void menu_countCustomer(ListCustomer LC);
void menu_countLaundry(ListCustomer LC);
void menu_countHargaLaundry(ListCustomer LC);
void menu_searchCustomer(ListCustomer LC);
void menu_searchLaundry(ListCustomer LC);
void menu_showAllData(ListCustomer LC);
void menu_urutkanLaundry(ListCustomer &LC);
void menu_showCustomer(ListCustomer LC);
void menu_showLaundry(ListCustomer LC);
void menu_showCustomerLaundry(ListCustomer LC);


//main.cpp
void menu_admin();
void menu_user();

#endif // HEADER_H_INCLUDED
