#include <iostream>
#include "Personne.h"
#include "Professeur.cpp"
#include "Personne.cpp"

using namespace std;

Professeur::Professeur(string nom, int age, string diplome) : Personne(nom,age), diplome(diplome) { }

string Professeur::getDiplome()) {
    return this->diplome;
}

string Professeur::getNom()  {
    Personne::getAge();
}





