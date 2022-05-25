#include "Personne.h"

Personne::Personne()
{
}

Personne::Personne(string n, string p, int age)
{
	this->nom = n; 
	this->prenom = p; 
	this->age = age;
}
void Personne::afficher() const
{
	cout << " nom: " << this->nom << endl;
	cout << " prenom: " << this->prenom << endl;
	cout << " age: " << this->age << endl;
}
