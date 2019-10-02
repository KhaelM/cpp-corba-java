#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>

using namespace std;

class Etudiant
{
public:
    Etudiant(string filiere, string nom, string classe, float moyenne, bool isAfaka);
    string getMention() const;
    string getAffichageAfaka() const;
    string getNom() const;
    string getFiliere() const;
    string getClasse() const;
    float getMoyenne() const;

private:
    string _nom;
    string _classe;
    string _filiere;
    float _moyenne;
    bool _isAfaka;

};

#endif // ETUDIANT_H
