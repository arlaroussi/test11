#include <iostream>
#include "Header.h"


using namespace std;

Professeur::Professeur(string nom, int age, string diplome) : Personne(nom,age), diplome(diplome) { }

string Professeur::getDiplome() {
    return this->diplome;
}

