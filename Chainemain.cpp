#include <iostream>
#include "Chaine.h"
using namespace std;

int main() {
Chaine2 C1("Hello"), C2("Hello"), C4("Hal");
cout <<"C1: "<< C1.getS() <<"| C2: "<< C2.getS() <<"| C4: "<< C4.getS()<<endl;
C2.setS("bonj");
Chaine2 C3(C2);//constructeur de copie
cout <<"C2: "<< C2.getS() <<"| C3: "<< C3.getS() <<endl;
C1=C3;

cout <<"C1=C3: "<<C3.getTaille()<<" - "<<C3.getS()<<endl;
Chaine2 CAdd=(C1+C4)+C3;
cout <<"C1+C4+C3: "<<CAdd.getTaille()<<" -"<<CAdd.getS()<<"-"<<endl;
Chaine2 C6("Bandmr"), C7("Band");
if (C6==C7) cout <<"C6==C7: True" <<endl;
if (C6<C7) cout <<"C1<C3: True" <<endl;
if (C6>C7) cout <<"C1>C3: True" <<endl;
cout <<"C3[1]: "<<C3[1]<<endl;
return 0;
}
