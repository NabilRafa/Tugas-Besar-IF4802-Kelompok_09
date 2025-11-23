#ifndef LAUNDRY_103012400112_H_INCLUDED
#define LAUNDRY_103012400112_H_INCLUDED

using namespace std;

struct infotypePakaian {
    string jenis, layanan, status;
};
typedef struct elmList_Pakaian *addressP;

struct elmList_Pakaian {
    infotypePakaian info;
    addressP next, prev;
};

struct listP {
    addressP first, last;
};

void createListPakaian(listP Lp);
addressP createElmPakaian(listP Lp, infotypePakaian x);
void insertFirst_Pakaian(listP &Lp, addressP P);
void insertLast_Pakaian(listP &Lp, addressP P);
void insertAfter_Pakaian(listP &Lp, addressP prec, addressP P);
void deleteFirst_Pakaian(listP &Lp, addressP &P);
void deleteLast_Pakaian(listP &Lp, addressP &P);
void deleteAfter_Pakaian(listP &Lp, addressP prec, addressP &P);

#endif // LAUNDRY_103012400112_H_INCLUDED
