#include "laundry.h"
#include <iostream>

using namespace std;

void createListPakaian(listP &Lp){
  Lp.first = nullptr;
}

addressP createElmPakaian(infotypePakaian x){
  addressP P;

  P = new elmList_Pakaian;
  P->info = x
  P->next = nullptr;
  P->prev = nullptr;

  return p;
}

void insertFirst_Pakaian(listP &Lp, addressP P){
  if (Lp.first == nullptr) {
    Lp.first = P;
    Lp.last = P;

  } else {
    P->next = Lp.first;
    Lp.first->prev = P;
    Lp.first = P;
}

void insertLast_Pakaian(listP &Lp, addressP P){
  if (Lp.first == nullptr) {
    Lp.first = P;
    Lp.last = P;
  } else {
    P->prev = Lp.last;
    Lp.last->next = P;
    Lp.last = P;
  }
}

void insertAfter_Pakaian(listP &Lp, addressP prec, addressP P){
  if (prec != nullptr) {
    if (prec == Lp.last) {
      insertLast_Pakaian(Lp, p);
    } else {
      P->next = prec->next;
      P->prev = prec;

      prec->next->prev = P;
      prec->next = P;
    }
  }
}
