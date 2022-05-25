#include "Phd.h"

Phd::Phd(string n, string p, int age,int cne, int matricule, string thematique)
	:Etudiant("hajar", "hajar", 20, cne), Professeur("jad", "jad", 25, matricule), 
	Personne(n, p, age)
	
{
	this->thematique = thematique;
}

void Phd::afficher() const
{
	this->Personne::afficher();
	this->Etudiant::afficher(); 
	this->Professeur::afficher();
	cout << "thematique: " << this->thematique << endl;
}
