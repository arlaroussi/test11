#ifndef PROFESSEUR_H
#define PROFESSEUR_H

#include <Personne.h>


class Professeur : public Personne
{
    public:
        Professeur(string, int, string);
        //string getNom();
        string getDiplome();

    protected:

    private:
        string diplome;
};

#endif // PROFESSEUR_H
