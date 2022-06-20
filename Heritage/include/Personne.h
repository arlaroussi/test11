#ifndef PERSONNE_H
#define PERSONNE_H
#include "Personne.h"
#include <string>
using namespace std;

class Personne
{
    public:
        Personne(string, int);
        string getNom();
        int getAge();


    protected:

    string nom;
    int age;

    private:
};

#endif // PERSONNE_H
