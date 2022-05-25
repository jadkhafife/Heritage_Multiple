#pragma once
#include"Personne.h"
class Etudiant: public virtual  Personne
{
public: 
	Etudiant();
	Etudiant(string n, string p, int age,int cne);
	 void afficher()const override;
	 //void diplays() const;

private: 
	int cne;
};

