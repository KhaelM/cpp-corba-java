#include "Etudiant.h"

Etudiant::Etudiant(string filiere, string nom, string classe, float moyenne, bool isAfaka) : _classe(classe) , _filiere(filiere), _nom(nom), _moyenne(moyenne), _isAfaka(isAfaka)

{

}

string Etudiant::getMention() const
{
    string mention;
    if(_moyenne < 10) {
        mention = "Non admis";
    } else if(_moyenne <= 12) {
        mention = "Admis";
    } else if(_moyenne <= 14) {
        mention = "Assez bien";
    } else {
        mention = "Très bien";
    }

    return mention;
}

string Etudiant::getAffichageAfaka() const
{
    return _isAfaka ? "oui" : "non";
}

string Etudiant::getNom() const
{
    return _nom;
}

float Etudiant::getMoyenne() const
{
    return _moyenne;
}

string Etudiant::getClasse() const
{
    return _classe;
}

string Etudiant::getFiliere() const
{
    return _filiere;
}
