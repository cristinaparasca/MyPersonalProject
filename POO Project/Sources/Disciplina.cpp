#include "Disciplina.h"

Disciplina::Disciplina( char _den[], Profesor &p) : Profesor( p ),id_disc(nextID++)
    {

        strcpy(denumire, _den);
    }
int Disciplina::getIDDisc(void)
    {
        return id_disc;
    }
char* Disciplina::retNumeComplet(void)
    {
        return denumire;
    }
 char* Disciplina::retProfesor(void)
    {
        return Profesor::retNumeComplet();
    }
