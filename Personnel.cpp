#include "Personnel.h"

Personnel::Personnel()
{
}

Personnel::Personnel(string nom, string prenom, string adresse, string date_embauchement) :nom(nom),prenom(prenom),adresse(adresse),date_embauchement(date_embauchement)
{
}

void Personnel::setnom(string nom)
{
	this->nom = nom;
}

string Personnel::getnom()
{
	return string(nom);
}

void Personnel::setprenom(string prenom)
{
	this->prenom = prenom;
}

string Personnel::getprenom()
{
	return string(prenom);
}

void Personnel::setadresse(string adresse)
{
	this->adresse = adresse;
}

string Personnel::getadresse()
{
	return string(adresse);
}

void Personnel::setdate_embauchement(string date_embachement)
{
	this->date_embauchement = date_embauchement;
}

string Personnel::getdate_embauchement()
{
	return string(date_embauchement);
}
