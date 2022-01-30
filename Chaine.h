#ifndef CHAINE2_H
#define CHAINE2_H
#include <string>
class Chaine2
{ public:
Chaine2();//Constructeur par defaut
Chaine2(int);//Constructeur par une taille
Chaine2(const std::string);//Constructeur par une constante C.C
Chaine2(char);//Constructeur par un caractère
Chaine2(const Chaine2 &);//Constructeur de copie
~Chaine2();
int getTaille();
char * getS();
void setTaille(int);
void setS(char* c);
Chaine2& operator=(const Chaine2 &);
Chaine2 operator+(const Chaine2 &);
bool operator==(const Chaine2 &);
bool operator<(const Chaine2 &);
bool operator>(const Chaine2 &);
char operator[](int);
private:
int taille;
char * s;
};
#endif
