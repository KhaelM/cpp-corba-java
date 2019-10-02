#ifndef UTILITY_H
#define UTILITY_H

#include "Etudiant.h"
#include <vector>
#include <fstream>
#include <QMessageBox>
#include <string>
#include <sstream>

vector<Etudiant*> parseEtudiants();
Etudiant *parseLine(string line);
vector<string> split(const string& s, char delimiter);

#endif // UTILITY_H
