#ifndef CUSTOMER_103012400144_H_INCLUDED
#define CUSTOMER_103012400144_H_INCLUDED

using namespace std;

struct infotypeCustomer {
    string nama, alamat;
    int noTelp;
};
typedef struct elmList_Customer *addressC;

struct elmList_Customer {
    infotypeCustomer info;
    addressC next;
};

struct listC {
    addressC first;
};

void createListCustomer(listC &Lc);
addressC createElmCustomer(listC Lc, infotypeCustomer x);
void insertFirst_Customer(listC &Lc, addressC P);
void insertLast_Customer(listC &Lc, addressC P);
void insertAfter_Customer(listC &Lc, addressC prec, addressC P);
void deleteFirst_Customer(listC &Lc, addressC &P);
void deleteLast_Customer(listC &Lc, addressC &P);
void deleteAfter_Customer(listC &Lc, addressC prec, addressC &P);



#endif // CUSTOMER_103012400144_H_INCLUDED
