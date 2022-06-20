#include <iostream>
#include "Professeur.h"

using namespace std;

int main()
{
    Professeur *pr1 = new Professeur("LAROUSSI", 25, "Ingenieur");

    Personne *pr2 = new Personne("LAROUSSI", 12);

    cout << "Bonjour" << endl;

    cout << pr1->getNom() << endl;

    cout << pr2->getNom() << "\t" << pr2->getAge() << endl;

    //cout << pr1.getAge() << endl;
    //cout << pr1.getDiplome() << endl;

    return 0;
}
