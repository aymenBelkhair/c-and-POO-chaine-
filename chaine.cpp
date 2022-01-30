#include "Chaine.h"
#include <iostream>
#include <string.h>
using namespace std;

Chaine2::Chaine2():taille(0){s= new char[1];s[0]='\0';}
Chaine2::Chaine2(int t):taille(t){s= new char[t+1];s[taille]='\0';}
Chaine2::Chaine2(const string str):taille(str.size()){
s=new char[taille+1];
for(int i=0; i<taille;i++){ s[i]=str[i];}
s[taille]='\0';
}
Chaine2::Chaine2(char c):taille(1){s=new char[2]; s[0]=c;s[1]='\0';}
Chaine2::~Chaine2(){if (s) delete[] s;}

Chaine2::Chaine2(const Chaine2 &source): taille(source.taille){
s=new char[taille+1];
strcpy (s, source.s);
}

Chaine2& Chaine2::operator=(const Chaine2 &source){
if (this != &source){
taille=source.taille;
s=new char[taille+1];
strcpy (s, source.s);
}
return *this;
}
Chaine2 Chaine2::operator+(const Chaine2 &source){
Chaine2 res;
res.taille=taille+source.taille;
res.s=new char[res.taille+1];
for (int i=0; i<taille; i++) res.s[i]=s[i];
for (int i=taille;i<=res.taille;i++) res.s[i]=source.s[i-taille];
return res;
}
bool Chaine2::operator==(const Chaine2 &source){
bool res=false;
int i=0;
if (taille==source.taille){
while ((i<=taille) && (s[i]==source.s[i])) i++;
if (i==taille){res=true;
}
return res;
}
}
bool Chaine2::operator<(const Chaine2 &source){

int i=0;
while (i<=taille && i<=source.taille && s[i]==source.s[i]) i++;
return (s[i]<source.s[i]);
}

bool Chaine2::operator>(const Chaine2 &source){
return !((*this==source)||(*this<source));
}

char Chaine2::operator[](int i){
if (i>=0 && i<=taille) return s[i];
else '\0';
}
int Chaine2::getTaille(){ return taille;}

char* Chaine2::getS(){ return s;}

void Chaine2::setTaille(int t){taille=t;}

void Chaine2::setS(char* str){
delete[] s;
taille=0;
while (str[taille]!='\0') taille++;
s=new char[taille+1];
strcpy(s,str);
}
