#ifndef PROFESOR.H
#define PROFESOR.H
#include "Persoana.h"
#include "Exceptie.h"


class Profesor : public Persoana
{
    static int nextID;
    int id_prof;
    char titlu[20]; /* profesor / conferentiar / s.l. / asistent */
    char _buff[50]; /* utilizat pentru constructii de siruri returnate */
public:
    Profesor( Persoana &p, char _titlu[]);

    int getIDProf(void);

    char* retNumeComplet(void);
    ~Profesor();
};




#endif // PROFESOR
