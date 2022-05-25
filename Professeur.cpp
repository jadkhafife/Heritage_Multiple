#include "Professeur.h"
#include <iostream>
using namespace std;
Professeur::Professeur()
{
}
Professeur::Professeur(string n, string p, int age,int mat)
	:Personne(n, p, age)
{
	this->matricule = mat;
}

void Professeur::afficher() const
{
	Professeur p;
	if (typeid(*this).name() == typeid(p).name())
		this->Personne::afficher();
	cout << "matricule: " << this->matricule << endl;
}

void Professeur::displays()const
{
	cout << "matricule: " << this->matricule << endl;
}
