#ifndef PERSOANA_H
#define PERSOANA_H
#include <iostream>
#include <string.h>
using namespace std;

class Persoana
{
protected:
    char nume[20], prenume[20], data_n[20]; /*dd.mm.yyyy*/
    char _buff[50]; /* utilizat pentru constructii de siruri returnate */
public:
    Persoana( char _nume[]="", char _prenume[]="", char _data_n[]="");

    char* retDataNastere(void);
    char* retNumeComplet(void);
    friend istream& operator>>(istream &c, Persoana &p);

    ~Persoana();
};

#endif // PERSOANA_H
