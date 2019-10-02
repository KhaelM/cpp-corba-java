#include "Utility.h"

vector<Etudiant*> parseEtudiants()
{
    string const nomFichier("/home/khaelm/Documents/Programming/Qt/Merde_n1/students");
    ifstream monFlux(nomFichier.c_str());
    vector<Etudiant*> etudiants;

    if(monFlux) {
        string line;
        while(getline(monFlux, line)) {
            etudiants.push_back(parseLine(line));
        }
    } else {
    }

    return etudiants;
}

Etudiant *parseLine(string line)
{
    vector<string> studentInformations = split(line, ';');
    string filiere;
    string classe;
    string nom;
    float moyenne;
    bool isAfaka;

    filiere = studentInformations.at(0);
    classe = studentInformations.at(1);
    nom = studentInformations.at(2);
    moyenne = stof(studentInformations.at(3));
    isAfaka = moyenne >= 10 ? true : false;

    return new Etudiant(filiere, nom, classe, moyenne, isAfaka);
}

vector<string> split(const string& s, char delimiter)
{
   vector<std::string> tokens;
   string token;
   istringstream tokenStream(s);
   while (getline(tokenStream, token, delimiter))
   {
      tokens.push_back(token);
   }
   return tokens;
}
