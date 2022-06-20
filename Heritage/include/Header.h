#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
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

class Professeur : public Personne
{
    public:
        Professeur(string, int, string);
        string getDiplome();

    protected:

    private:
        string diplome;
};
#endif // HEADER_H_INCLUDED
