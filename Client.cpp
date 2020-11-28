#include "Client.h"

Client::Client()
{
}

Client::Client(string nom, string prenom, string adresse_livraison, string adresse_facturation, string date_naissance, string date_premier_achat) :nom(nom),prenom(prenom),adresse_livraison(adresse_livraison),adresse_facturation(adresse_facturation),date_naissance(date_naissance),date_premier_achat(date_premier_achat)
{
}

void Client::setnom(string nom)
{
	this->nom = nom;
}

string Client::getnom()
{
	return string(nom);
}

void Client::setprenom(string prenom)
{
	this->prenom = prenom;
}

string Client::getprenom()
{
	return string(prenom);
}

void Client::setadresse_liv(string adresse_livraison)
{
	this->adresse_livraison = adresse_livraison;
}

string Client::getadresse_liv()
{
	return string(adresse_livraison);
}

void Client::setadresse_fact(string adresse_facturation)
{
	this->adresse_facturation;
}

string Client::getadresse_fact()
{
	return string(adresse_facturation);
}

void Client::setdate_naissace(string date_naissance)
{
	this->date_naissance = date_naissance;
}

string Client::getdate_naissance()
{
	return string(date_naissance);
}

void Client::setdate_premier(string date_premier_achat)
{
	this->date_premier_achat=date_premier_achat;
}

string Client::getdate_premier()
{
	return string(date_premier_achat);
}
