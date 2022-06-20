#include <iostream>

using namespace std;

int main()
{
    Professeur *pr1 = new Professeur("LAROUSSI", 25, "Ingenieur");
    cout << pr1->getNom() << endl;
    //cout << pr1.getAge() << endl;
    //cout << pr1.getDiplome() << endl;

    return 0;
}
