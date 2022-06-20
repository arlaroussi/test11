
#include <cstring>
#include <iostream>
using namespace std;


class Personne
{
    public:
        Personne(string, int);
        virtual ~Personne();
        string getNom();
        int getAge();


    protected:

    public:
        string nom1;
        int age1;
};


class Professeur : Personne
{
    public:
        Professeur (string, int, string) ;
        string getNom1();
        string getDiplome1();

    private:
        string diplome1;
};
