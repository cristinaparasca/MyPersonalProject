#ifndef STUDENT.H
#define STUDENT.H
#include "Persoana.h"
#include <string.h>
class Student : public Persoana
{
    char nr_mat[20];    /*numar matricol*/
    char specializ[20]; /*Specializare*/
    char _buff[50]; /* utilizat pentru constructii de siruri returnate */
public:
    Student(Persoana &_pers, char _nr_mat[], char _spec[]);

    char* retNumeComplet(void);

    char* retNrMat(void);

    char* retSpec(void);

};

#endif // STUDENT
