#include <iostream>
#include "Personne.h"

using namespace std;

Personne::Personne(string nom, int age) {
    this->nom = nom;
    this->age = age;
}

string Personne::getNom() {
    return this->nom;
}

int Personne::getAge() {
    return this->age;
}





