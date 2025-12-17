#include "header.h"
#include <iostream>

using namespace std;

void inisialisasi_data(ListCustomer &LC){
    addressCustomer C1, P;
    addressLaundry Q;

    string namaCustomer, alamatCustomer, idCustomer, noTelp;
    string jenisPakaian, layananPakaian;
    int beratPakaian;

    //Customer 01
        namaCustomer = "Joko";
        alamatCustomer = "Bojongsoang";
        idCustomer = "01";
        noTelp = "08123";

        jenisPakaian = "baju";
        layananPakaian = "cihuy";
        beratPakaian = 2;

        P = createElmCustomer(namaCustomer, alamatCustomer, idCustomer, noTelp);
        Q = createElmPakaian(jenisPakaian, layananPakaian, beratPakaian);

        insertFirst_Customer(LC, P);
        insertFirst_Pakaian(P, Q);

    //Customer 02
        namaCustomer = "Budiman";
        alamatCustomer = "Purbalingga";
        idCustomer = "02";
        noTelp = "08100002";

        jenisPakaian = "celana";
        layananPakaian = "paket A";
        beratPakaian = 12;

        P = createElmCustomer(namaCustomer, alamatCustomer, idCustomer, noTelp);
        Q = createElmPakaian(jenisPakaian, layananPakaian, beratPakaian);

        insertFirst_Customer(LC, P);
        insertFirst_Pakaian(P, Q);
}
