#include <iostream>
#include "header.h"

using namespace std;

void inisialisasi_10data(ListCustomer &LC) {
addressCustomer P;
addressLaundry Q;
createListCustomer(LC);

// Customer 1
P = createElmCustomer("Nana","Jl_Anggrek_No_1","QAZ","088975238101");
insertLast_Customer(LC,P);

Q = createElmPakaian("Baju","Paket_B",420);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",300); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",950);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_B",260);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",500);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_C",880); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",610);   insertLast_Pakaian(P,Q);


// Customer 2
P = createElmCustomer("Rina","Jl_Melati_No_2","WSX","088975238102");
insertLast_Customer(LC,P);

Q = createElmPakaian("Jaket","Paket_A",700);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",920);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_B",480); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",230);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",560);   insertLast_Pakaian(P,Q);


// Customer 3
P = createElmCustomer("Dewi","Jl_Mawar_No_3","EDC","088975238103");
insertLast_Customer(LC,P);

Q = createElmPakaian("Baju","Paket_A",300);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_C",870); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_B",640);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",210);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",550);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",400); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",990);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",780);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_B",340);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",460);   insertLast_Pakaian(P,Q);


// Customer 4
P = createElmCustomer("Sari","Jl_Kenanga_No_4","RFV","088975238104");
insertLast_Customer(LC,P);

Q = createElmPakaian("Jaket","Paket_B",680);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",320);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_C",890); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",240);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",570);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",940);  insertLast_Pakaian(P,Q);


// Customer 5
P = createElmCustomer("Ayu","Jl_Flamboyan_No_5","TGB","088975238105");
insertLast_Customer(LC,P);

Q = createElmPakaian("Rok","Paket_B",360);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",410);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_C",820); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_B",690);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",910);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",270);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_B",540); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",330);   insertLast_Pakaian(P,Q);


// Customer 6
P = createElmCustomer("Lina","Jl_Dahlia_No_6","YHN","088975238106");
insertLast_Customer(LC,P);

Q = createElmPakaian("Baju","Paket_C",870);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",390); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_B",720);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",210);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",560);   insertLast_Pakaian(P,Q);

// Customer 7
P = createElmCustomer("Putri","Jl_Teratai_No_7","UJM","088975238107");
insertLast_Customer(LC,P);

Q = createElmPakaian("Celana","Paket_B",480); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",300);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",960);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_B",350);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",890);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",420); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_B",610);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",330);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",260);    insertLast_Pakaian(P,Q);


// Customer 8
P = createElmCustomer("Maya","Jl_Kamboja_No_8","IKL","088975238108");
insertLast_Customer(LC,P);

Q = createElmPakaian("Jaket","Paket_A",640);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",520);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_C",880); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",230);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",910);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",410); insertLast_Pakaian(P,Q);


// Customer 9
P = createElmCustomer("Indah","Jl_Sakura_No_9","OPM","088975238109");
insertLast_Customer(LC,P);

Q = createElmPakaian("Baju","Paket_B",580);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",360); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",970);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_B",340);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",830);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_B",510); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",290);   insertLast_Pakaian(P,Q);

// Customer 10
P = createElmCustomer("Fitri","Jl_Cemara_No_10","LKI","088975238110");
insertLast_Customer(LC,P);

Q = createElmPakaian("Celana","Paket_A",470); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",560);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",920);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",220);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",340);   insertLast_Pakaian(P,Q);
}

void inisialisasi_25data(ListCustomer &LC) {
addressCustomer P;
addressLaundry Q;
createListCustomer(LC);

// Customer 1
P = createElmCustomer("Nana","Jl_Anggrek_No_1","QAZ","088975238101");
insertLast_Customer(LC,P);

Q = createElmPakaian("Baju","Paket_B",420);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",300); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",950);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_B",260);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",500);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_C",880); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",610);   insertLast_Pakaian(P,Q);


// Customer 2
P = createElmCustomer("Rina","Jl_Melati_No_2","WSX","088975238102");
insertLast_Customer(LC,P);

Q = createElmPakaian("Jaket","Paket_A",700);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",920);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_B",480); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",230);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",560);   insertLast_Pakaian(P,Q);


// Customer 3
P = createElmCustomer("Dewi","Jl_Mawar_No_3","EDC","088975238103");
insertLast_Customer(LC,P);

Q = createElmPakaian("Baju","Paket_A",300);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_C",870); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_B",640);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",210);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",550);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",400); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",990);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",780);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_B",340);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",460);   insertLast_Pakaian(P,Q);


// Customer 4
P = createElmCustomer("Sari","Jl_Kenanga_No_4","RFV","088975238104");
insertLast_Customer(LC,P);

Q = createElmPakaian("Jaket","Paket_B",680);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",320);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_C",890); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",240);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",570);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",940);  insertLast_Pakaian(P,Q);


// Customer 5
P = createElmCustomer("Ayu","Jl_Flamboyan_No_5","TGB","088975238105");
insertLast_Customer(LC,P);

Q = createElmPakaian("Rok","Paket_B",360);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",410);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_C",820); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_B",690);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",910);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",270);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_B",540); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",330);   insertLast_Pakaian(P,Q);


// Customer 6
P = createElmCustomer("Lina","Jl_Dahlia_No_6","YHN","088975238106");
insertLast_Customer(LC,P);

Q = createElmPakaian("Baju","Paket_C",870);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",390); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_B",720);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",210);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",560);   insertLast_Pakaian(P,Q);

// Customer 7
P = createElmCustomer("Putri","Jl_Teratai_No_7","UJM","088975238107");
insertLast_Customer(LC,P);

Q = createElmPakaian("Celana","Paket_B",480); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",300);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",960);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_B",350);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",890);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",420); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_B",610);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",330);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",260);    insertLast_Pakaian(P,Q);


// Customer 8
P = createElmCustomer("Maya","Jl_Kamboja_No_8","IKL","088975238108");
insertLast_Customer(LC,P);

Q = createElmPakaian("Jaket","Paket_A",640);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",520);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_C",880); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",230);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",910);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",410); insertLast_Pakaian(P,Q);


// Customer 9
P = createElmCustomer("Indah","Jl_Sakura_No_9","OPM","088975238109");
insertLast_Customer(LC,P);

Q = createElmPakaian("Baju","Paket_B",580);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",360); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",970);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_B",340);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",830);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_B",510); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",290);   insertLast_Pakaian(P,Q);

// Customer 10
P = createElmCustomer("Fitri","Jl_Cemara_No_10","LKI","088975238110");
insertLast_Customer(LC,P);

Q = createElmPakaian("Celana","Paket_A",470); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",560);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",920);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",220);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",340);   insertLast_Pakaian(P,Q);

// Customer 11
P = createElmCustomer("Novi","Jl_Pinus_No_11","MJU","088975238111");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_B",560);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",420);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",930);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",310);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",480);insertLast_Pakaian(P,Q);

// Customer 12
P = createElmCustomer("Wulan","Jl_Akasia_No_12","NHY","088975238112");
insertLast_Customer(LC,P);
Q=createElmPakaian("Jaket","Paket_B",700);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",880);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",390);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",610);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",260);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",940);insertLast_Pakaian(P,Q);

// Customer 13
P = createElmCustomer("Citra","Jl_Palem_No_13","BGT","088975238113");
insertLast_Customer(LC,P);
Q=createElmPakaian("Rok","Paket_A",220);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",540);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",860);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_B",650);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",400);insertLast_Pakaian(P,Q);

// Customer 14
P = createElmCustomer("Tika","Jl_Nangka_No_14","VFR","088975238114");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_C",790);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",360);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_B",680);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",240);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",520);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",910);insertLast_Pakaian(P,Q);

// Customer 15
P = createElmCustomer("Rosi","Jl_Mangga_No_15","CDE","088975238115");
insertLast_Customer(LC,P);
Q=createElmPakaian("Celana","Paket_C",870);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",420);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_B",630);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",210);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",560);insertLast_Pakaian(P,Q);

// Customer 16
P = createElmCustomer("Mega","Jl_Durian_No_16","JKL","088975238116");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_A",300);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_B",470);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",950);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",580);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",250);insertLast_Pakaian(P,Q);

// Customer 17
P = createElmCustomer("Yuni","Jl_Salak_No_17","ZXC","088975238117");
insertLast_Customer(LC,P);
Q=createElmPakaian("Jaket","Paket_B",710);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",890);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",360);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",440);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",330);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",960);insertLast_Pakaian(P,Q);

// Customer 18
P = createElmCustomer("Rara","Jl_Rambutan_No_18","ASD","088975238118");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_B",590);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",820);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_A",640);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",270);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",910);insertLast_Pakaian(P,Q);

// Customer 19
P = createElmCustomer("Nisa","Jl_Duku_No_19","FGH","088975238119");
insertLast_Customer(LC,P);
Q=createElmPakaian("Celana","Paket_A",430);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",560);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",940);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",240);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",880);insertLast_Pakaian(P,Q);

// Customer 20
P = createElmCustomer("Anisa","Jl_Jambu_No_20","BNM","088975238120");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_A",410);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_B",520);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",970);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",230);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",600);insertLast_Pakaian(P,Q);

// Customer 21
P = createElmCustomer("Dina","Jl_Sawo_No_21","QWE","088975238121");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_B",560);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",980);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",420);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",310);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",390);insertLast_Pakaian(P,Q);


// Customer 22
P=createElmCustomer("Siska","Jl_Kiwi_No_22","RTY","088975238122");
insertLast_Customer(LC,P);
Q=createElmPakaian("Rok","Paket_A",220);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",830);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_B",500);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",360);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_B",640);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",910);insertLast_Pakaian(P,Q);


// Customer 23
P=createElmCustomer("Reni","Jl_Apel_No_23","UIO","088975238123");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_A",310);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",870);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",330);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_A",580);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",540);insertLast_Pakaian(P,Q);


// Customer 24
P=createElmCustomer("Vina","Jl_Pir_No_24","PAS","088975238124");
insertLast_Customer(LC,P);
Q=createElmPakaian("Celana","Paket_B",520);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",760);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",990);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",260);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",340);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",410);insertLast_Pakaian(P,Q);

// Customer 25
P=createElmCustomer("Santi","Jl_Lemon_No_25","DFG","088975238125");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_B",560);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",430);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",300);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",920);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",350);insertLast_Pakaian(P,Q);

}


void inisialisasi_50data(ListCustomer &LC) {

addressCustomer P;
addressLaundry Q;
createListCustomer(LC);
// Customer 1
P = createElmCustomer("Nana","Jl_Anggrek_No_1","QAZ","088975238101");
insertLast_Customer(LC,P);

Q = createElmPakaian("Baju","Paket_B",420);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",300); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",950);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_B",260);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",500);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_C",880); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",610);   insertLast_Pakaian(P,Q);


// Customer 2
P = createElmCustomer("Rina","Jl_Melati_No_2","WSX","088975238102");
insertLast_Customer(LC,P);

Q = createElmPakaian("Jaket","Paket_A",700);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",920);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_B",480); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",230);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",560);   insertLast_Pakaian(P,Q);


// Customer 3
P = createElmCustomer("Dewi","Jl_Mawar_No_3","EDC","088975238103");
insertLast_Customer(LC,P);

Q = createElmPakaian("Baju","Paket_A",300);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_C",870); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_B",640);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",210);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",550);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",400); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",990);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",780);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_B",340);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",460);   insertLast_Pakaian(P,Q);


// Customer 4
P = createElmCustomer("Sari","Jl_Kenanga_No_4","RFV","088975238104");
insertLast_Customer(LC,P);

Q = createElmPakaian("Jaket","Paket_B",680);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",320);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_C",890); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",240);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",570);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",940);  insertLast_Pakaian(P,Q);


// Customer 5
P = createElmCustomer("Ayu","Jl_Flamboyan_No_5","TGB","088975238105");
insertLast_Customer(LC,P);

Q = createElmPakaian("Rok","Paket_B",360);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",410);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_C",820); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_B",690);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",910);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",270);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_B",540); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",330);   insertLast_Pakaian(P,Q);


// Customer 6
P = createElmCustomer("Lina","Jl_Dahlia_No_6","YHN","088975238106");
insertLast_Customer(LC,P);

Q = createElmPakaian("Baju","Paket_C",870);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",390); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_B",720);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",210);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",560);   insertLast_Pakaian(P,Q);

// Customer 7
P = createElmCustomer("Putri","Jl_Teratai_No_7","UJM","088975238107");
insertLast_Customer(LC,P);

Q = createElmPakaian("Celana","Paket_B",480); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",300);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",960);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_B",350);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",890);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",420); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_B",610);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",330);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",260);    insertLast_Pakaian(P,Q);


// Customer 8
P = createElmCustomer("Maya","Jl_Kamboja_No_8","IKL","088975238108");
insertLast_Customer(LC,P);

Q = createElmPakaian("Jaket","Paket_A",640);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",520);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_C",880); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",230);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",910);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",410); insertLast_Pakaian(P,Q);


// Customer 9
P = createElmCustomer("Indah","Jl_Sakura_No_9","OPM","088975238109");
insertLast_Customer(LC,P);

Q = createElmPakaian("Baju","Paket_B",580);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_A",360); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",970);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_B",340);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_C",830);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Celana","Paket_B",510); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",290);   insertLast_Pakaian(P,Q);

// Customer 10
P = createElmCustomer("Fitri","Jl_Cemara_No_10","LKI","088975238110");
insertLast_Customer(LC,P);

Q = createElmPakaian("Celana","Paket_A",470); insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_B",560);   insertLast_Pakaian(P,Q);
Q = createElmPakaian("Jaket","Paket_C",920);  insertLast_Pakaian(P,Q);
Q = createElmPakaian("Rok","Paket_A",220);    insertLast_Pakaian(P,Q);
Q = createElmPakaian("Baju","Paket_A",340);   insertLast_Pakaian(P,Q);


// Customer 11
P = createElmCustomer("Novi","Jl_Pinus_No_11","MJU","088975238111");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_B",560);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",420);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",930);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",310);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",480);insertLast_Pakaian(P,Q);

// Customer 12
P = createElmCustomer("Wulan","Jl_Akasia_No_12","NHY","088975238112");
insertLast_Customer(LC,P);
Q=createElmPakaian("Jaket","Paket_B",700);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",880);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",390);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",610);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",260);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",940);insertLast_Pakaian(P,Q);

// Customer 13
P = createElmCustomer("Citra","Jl_Palem_No_13","BGT","088975238113");
insertLast_Customer(LC,P);
Q=createElmPakaian("Rok","Paket_A",220);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",540);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",860);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_B",650);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",400);insertLast_Pakaian(P,Q);

// Customer 14
P = createElmCustomer("Tika","Jl_Nangka_No_14","VFR","088975238114");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_C",790);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",360);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_B",680);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",240);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",520);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",910);insertLast_Pakaian(P,Q);

// Customer 15
P = createElmCustomer("Rosi","Jl_Mangga_No_15","CDE","088975238115");
insertLast_Customer(LC,P);
Q=createElmPakaian("Celana","Paket_C",870);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",420);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_B",630);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",210);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",560);insertLast_Pakaian(P,Q);

// Customer 16
P = createElmCustomer("Mega","Jl_Durian_No_16","JKL","088975238116");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_A",300);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_B",470);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",950);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",580);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",250);insertLast_Pakaian(P,Q);

// Customer 17
P = createElmCustomer("Yuni","Jl_Salak_No_17","ZXC","088975238117");
insertLast_Customer(LC,P);
Q=createElmPakaian("Jaket","Paket_B",710);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",890);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",360);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",440);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",330);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",960);insertLast_Pakaian(P,Q);

// Customer 18
P = createElmCustomer("Rara","Jl_Rambutan_No_18","ASD","088975238118");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_B",590);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",820);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_A",640);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",270);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",910);insertLast_Pakaian(P,Q);

// Customer 19
P = createElmCustomer("Nisa","Jl_Duku_No_19","FGH","088975238119");
insertLast_Customer(LC,P);
Q=createElmPakaian("Celana","Paket_A",430);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",560);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",940);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",240);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",880);insertLast_Pakaian(P,Q);

// Customer 20
P = createElmCustomer("Anisa","Jl_Jambu_No_20","BNM","088975238120");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_A",410);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_B",520);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",970);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",230);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",600);insertLast_Pakaian(P,Q);

// Customer 21
P = createElmCustomer("Dina","Jl_Sawo_No_21","QWE","088975238121");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_B",560);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",980);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",420);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",310);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",390);insertLast_Pakaian(P,Q);


// Customer 22
P=createElmCustomer("Siska","Jl_Kiwi_No_22","RTY","088975238122");
insertLast_Customer(LC,P);
Q=createElmPakaian("Rok","Paket_A",220);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",830);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_B",500);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",360);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_B",640);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",910);insertLast_Pakaian(P,Q);


// Customer 23
P=createElmCustomer("Reni","Jl_Apel_No_23","UIO","088975238123");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_A",310);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",870);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",330);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_A",580);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",540);insertLast_Pakaian(P,Q);


// Customer 24
P=createElmCustomer("Vina","Jl_Pir_No_24","PAS","088975238124");
insertLast_Customer(LC,P);
Q=createElmPakaian("Celana","Paket_B",520);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",760);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",990);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",260);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",340);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",410);insertLast_Pakaian(P,Q);

// Customer 25
P=createElmCustomer("Santi","Jl_Lemon_No_25","DFG","088975238125");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_B",560);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",430);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",300);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",920);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",350);insertLast_Pakaian(P,Q);

// Customer 26
P=createElmCustomer("Putri2","Jl_Jeruk_No_26","HJK","088975238126");
insertLast_Customer(LC,P);
Q=createElmPakaian("Jaket","Paket_B",690);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",880);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",420);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",240);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",570);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",910);insertLast_Pakaian(P,Q);


// Customer 27
P=createElmCustomer("Alda","Jl_Alpukat_No_27","LZX","088975238127");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_A",330);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",970);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_B",480);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",560);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",210);insertLast_Pakaian(P,Q);

// Customer 28
P=createElmCustomer("Fani","Jl_Pepaya_No_28","CVB","088975238128");
insertLast_Customer(LC,P);
Q=createElmPakaian("Celana","Paket_A",410);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",790);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_B",650);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",320);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",360);insertLast_Pakaian(P,Q);

// Customer 29
P=createElmCustomer("Nelly","Jl_Semangka_No_29","BNV","088975238129");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_B",540);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",880);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",230);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",960);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",370);insertLast_Pakaian(P,Q);


// Customer 30
P=createElmCustomer("Kiki","Jl_Stroberi_No_30","MKO","088975238130");
insertLast_Customer(LC,P);
Q=createElmPakaian("Jaket","Paket_C",940);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",580);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",420);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",310);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",350);insertLast_Pakaian(P,Q);


// Customer 31
P = createElmCustomer("Mila","Jl_Blueberry_No_31","PLM","088975238131");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_A",320);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",880);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",270);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_A",600);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",540);insertLast_Pakaian(P,Q);

// Customer 32
P = createElmCustomer("Zahra","Jl_Raspberry_No_32","OKN","088975238132");
insertLast_Customer(LC,P);
Q=createElmPakaian("Celana","Paket_A",420);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",900);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_B",710);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",230);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",580);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",860);insertLast_Pakaian(P,Q);

// Customer 33
P = createElmCustomer("Tiara","Jl_Cranberry_No_33","JHG","088975238133");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_A",300);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",940);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_B",500);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",210);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",780);insertLast_Pakaian(P,Q);

// Customer 34
P = createElmCustomer("Nanda","Jl_Blackcurrant_No_34","FDS","088975238134");
insertLast_Customer(LC,P);
Q=createElmPakaian("Jaket","Paket_A",620);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",560);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",890);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",340);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",360);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",980);insertLast_Pakaian(P,Q);

// Customer 35
P = createElmCustomer("Aurel","Jl_Gooseberry_No_35","AQZ","088975238135");
insertLast_Customer(LC,P);
Q=createElmPakaian("Rok","Paket_B",350);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",300);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",840);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_A",610);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",590);insertLast_Pakaian(P,Q);

// Customer 36
P = createElmCustomer("Bela","Jl_Mulberry_No_36","WSX","088975238136");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_C",910);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",430);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_B",720);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",240);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",560);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",870);insertLast_Pakaian(P,Q);

// Customer 37
P = createElmCustomer("Gina","Jl_Olive_No_37","EDC","088975238137");
insertLast_Customer(LC,P);
Q=createElmPakaian("Celana","Paket_A",450);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",520);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",960);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",330);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",310);insertLast_Pakaian(P,Q);

// Customer 38
P = createElmCustomer("Hana","Jl_Zaitun_No_38","RFV","088975238138");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_B",600);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",420);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",950);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",810);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",220);insertLast_Pakaian(P,Q);

// Customer 39
P = createElmCustomer("Intan","Jl_Kurma_No_39","TGB","088975238139");
insertLast_Customer(LC,P);
Q=createElmPakaian("Jaket","Paket_B",700);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",300);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",880);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",360);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",790);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",410);insertLast_Pakaian(P,Q);

// Customer 40
P = createElmCustomer("Jihan","Jl_Tin_No_40","YHN","088975238140");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_A",320);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_B",510);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",940);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",230);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",570);insertLast_Pakaian(P,Q);

// Customer 41
P = createElmCustomer("Karin","Jl_Ara_No_41","UJM","088975238141");
insertLast_Customer(LC,P);
Q=createElmPakaian("Celana","Paket_A",400);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",560);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",990);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",340);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",310);insertLast_Pakaian(P,Q);

// Customer 42
P = createElmCustomer("Lala","Jl_Delima_No_42","IKL","088975238142");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_C",850);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",430);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_B",720);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",240);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",580);insertLast_Pakaian(P,Q);

// Customer 43
P = createElmCustomer("Meli","Jl_Delima_Merah_No_43","OPM","088975238143");
insertLast_Customer(LC,P);
Q=createElmPakaian("Jaket","Paket_A",600);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",560);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",880);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",350);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",330);insertLast_Pakaian(P,Q);

// Customer 44
P = createElmCustomer("Nina","Jl_Delima_Putih_No_44","LKI","088975238144");
insertLast_Customer(LC,P);
Q=createElmPakaian("Rok","Paket_B",360);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",900);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_A",420);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_B",700);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",310);insertLast_Pakaian(P,Q);

// Customer 45
P = createElmCustomer("Ocha","Jl_Delima_Hitam_No_45","MJU","088975238145");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_C",910);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_B",500);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_A",620);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",340);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",300);insertLast_Pakaian(P,Q);

// Customer 46
P = createElmCustomer("Pia","Jl_Delima_Kuning_No_46","NHY","088975238146");
insertLast_Customer(LC,P);
Q=createElmPakaian("Celana","Paket_A",410);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",570);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",960);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",230);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",800);insertLast_Pakaian(P,Q);

// Customer 47
P = createElmCustomer("Qila","Jl_Delima_Biru_No_47","BGT","088975238147");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_B",550);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",870);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_A",610);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",360);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",320);insertLast_Pakaian(P,Q);

// Customer 48
P = createElmCustomer("Rika","Jl_Delima_Ungu_No_48","VFR","088975238148");
insertLast_Customer(LC,P);
Q=createElmPakaian("Jaket","Paket_C",950);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",300);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_B",510);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",240);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_B",590);insertLast_Pakaian(P,Q);

// Customer 49
P = createElmCustomer("Sela","Jl_Delima_Coklat_No_49","CDE","088975238149");
insertLast_Customer(LC,P);
Q=createElmPakaian("Baju","Paket_A",310);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Celana","Paket_C",880);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_B",720);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_A",230);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",790);insertLast_Pakaian(P,Q);

// Customer 50
P = createElmCustomer("Tania","Jl_Delima_Abu_No_50","JKL","088975238150");
insertLast_Customer(LC,P);
Q=createElmPakaian("Celana","Paket_B",500);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_A",320);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Jaket","Paket_C",940);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Rok","Paket_B",360);insertLast_Pakaian(P,Q);
Q=createElmPakaian("Baju","Paket_C",810);insertLast_Pakaian(P,Q);

}
