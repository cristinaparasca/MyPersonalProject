#include "Student.h"
Student::Student(Persoana &_pers, char _nr_mat[], char _spec[]):Persoana(_pers)
{
    strcpy(nr_mat,_nr_mat);
    strcpy(specializ,_spec);
}
char* Student::retNumeComplet(void)
{
    Persoana::retNumeComplet();
}
    char* Student::retNrMat(void)
    {
        return nr_mat;
    }
        char* Student::retSpec(void)
    {
        return specializ;
    }
