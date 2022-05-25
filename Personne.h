#pragma once
#include <iostream>
using namespace std;
class Personne
{
public:
	Personne();
	Personne(string n, string p, int age);
	virtual void afficher() const;
private: 
	string nom; 
	string prenom; 
	int age;
};

