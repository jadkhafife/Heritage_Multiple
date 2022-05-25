#pragma once
#include"Personne.h"
class Professeur: public virtual Personne
{

public: 
	Professeur();
	Professeur(string n, string p, int age,int mat);
	 void afficher()const override;
	 void displays()const;

private: 
	int matricule; 

};

