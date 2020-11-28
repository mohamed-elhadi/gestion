#include "Commande.h"

Commande::Commande()
{
}

Commande::Commande(string date_livraison, string date_emission, string date_paiment, string date_solde, string moyen_paiment,string nom_article, float montant_HT, float montant_TVA, float montant_TTC, float remise,int quantite) :date_livraison(date_livraison), date_emission(date_emission), date_paiment(date_paiment), date_solde(date_solde), moyen_paiment(moyen_paiment),montant_HT(montant_HT),remise(remise),montant_TTC(montant_TTC),montant_TVA(montant_TVA),n_incre(n_incre),quantite(quantite)
{
	for (int i = 0; i < n_incre; i++) {
		this->tab_article_qt[i] = this->quantite;
	}
	for (int i = 0; i < n_incre; i++) {
		this->tab_article_n[i] = this->nom_article;
	}
}

string Commande::getdate_liv()
{
	return string(this->date_livraison);
}

void Commande::setdate_liv(string date_livraison)
{
	this->date_livraison = date_livraison;
}

string Commande::getdate_emission()
{
	return string(this->date_emission);
}

void Commande::setdate_emission(string date_emission)
{
	this->date_emission = date_emission;
}

string Commande::getdate_paiment()
{
	return string(this->date_paiment);
}

void Commande::setdate_paiment(string date_paiment)
{
	this -> date_paiment = date_paiment;
}

string Commande::getdate_solde()
{
	return string(this->date_solde);
}

void Commande::setdate_solde(string date_solde)
{
	this->date_solde = date_solde;
}

string Commande::getmoyen_paiment()
{
	return string(moyen_paiment);
}

void Commande::setmoyen_paiment(string moyen_paiment)
{
	this->moyen_paiment = moyen_paiment;
}

string Commande::getnom_article()
{
	return string(this->nom_article);
}

void Commande::setnom_article(string nom_article)
{
	this->nom_article = nom_article;
}

float Commande::getmontant_HT()
{
	return this->montant_HT;
}

void Commande::setmontant_HT()
{
	this->montant_HT = montant_HT;
}

float Commande::getmontant_TVA()
{
	return this->montant_TVA;
}

void Commande::setmontant_TVA()
{
	this->montant_TVA = montant_TVA;
}

float Commande::getmontant_TTC()
{
	return montant_TTC;
}

void Commande::setmontant_TTC()
{
	this->montant_TTC = montant_TTC;
}

float Commande::getremise()
{
	return this->remise;
}

void Commande::setremise(float remise)
{
	this->remise = remise;
}
