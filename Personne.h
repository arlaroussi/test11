
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
        string nom;
        int age;
};


class Professeur : Personne
{
    public:
        Professeur (string, int, string) ;
        string getNom();
        string getDiplome();

    private:
        string diplome;
};
