#ifndef DISCIPLINA.H
#define DISCIPLINA.H
#include "Profesor.h"

class Disciplina : public Profesor /* profesorului titular*/
{
    static int nextID;
    int id_disc;
    char denumire[20];
public:
    Disciplina( char _den[], Profesor &p);
    int getIDDisc(void);
    char* retNumeComplet(void);
    char* retProfesor(void);
};

#endif // DISCIPLINA
