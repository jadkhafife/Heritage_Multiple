#include "Etudiant.h"
#include <iostream>
using namespace std;
Etudiant::Etudiant()
{
}
Etudiant::Etudiant(string n, string p, int age, int cne)
	: Personne(n,p,age)
{
	this->cne = cne;
}

void Etudiant::afficher() const
{
	Etudiant e; 
	if (typeid(*this).name() == typeid(e).name()) 
		this->Personne::afficher();
	cout << "cne: " << this->cne << endl;

}

/*void Etudiant::diplays()const
{
	cout << "cne: " << this->cne << endl;
}*/
