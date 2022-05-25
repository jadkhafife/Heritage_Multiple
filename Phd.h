#pragma once
#include "Professeur.h"
#include "Etudiant.h"
#include <iostream>
using namespace std;
class Phd : public Etudiant,public Professeur
{
public: 
	Phd(string n, string p, int age,int cne, int matricule, string thematique);
	void afficher()const override;
private: 
	string thematique;
};

