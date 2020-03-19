#include "Persoana.h"
#include "string.h"
Persoana::Persoana( char _nume[], char _prenume[], char _data_n[])
{
    strcpy(nume,_nume);
    strcpy(prenume,_prenume);
    strcpy(data_n,_data_n);
}
char* Persoana::retDataNastere(void)
{
    return data_n;
}
char* Persoana::retNumeComplet(void)
{
    strcpy(_buff,nume);
    strcat(_buff," ");
    return strcat(_buff,prenume);
}
istream& operator>>(istream &c, Persoana &p)
{
    cout<<"Introdu nume,prenume,data";
    cin.get(p.nume,20);
    cin.get();
    cin.get(p.prenume,20);
    cin.get();

    cin.get(p.data_n,20);
    cin.get();
}
Persoana::~Persoana()
{
    //dtor
}
