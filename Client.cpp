

#include "Client.h"



namespace NS_Composants {
	Client::Client()
	{

	}

	Client::Client(String^ nom, String^ prenom, String^ adresse_livraison, String^ adresse_facturation, String^ date_naissance, String^ date_premier_achat) :nom(nom), prenom(prenom), adresse_livraison(adresse_livraison), adresse_facturation(adresse_facturation), date_naissance(date_naissance), date_premier_achat(date_premier_achat)
	{
	}

	void Client::setnom(String^ nom)
	{
		this->nom = nom;
	}

	String^ Client::getnom()
	{
		return this->nom;
	}

	void Client::setprenom(String^ prenom)
	{
		this->prenom = prenom;
	}

	String^ Client::getprenom()
	{
		return  this->prenom;
	}

	void Client::setadresse_liv(String^ adresse_livraison)
	{
		this->adresse_livraison = adresse_livraison;
	}

	String^ Client::getadresse_liv()
	{
		return this->adresse_livraison;
	}

	void Client::setadresse_fact(String^ adresse_facturation)
	{
		this->adresse_facturation;
	}

	String^ Client::getadresse_fact()
	{
		return this->adresse_facturation;
	}

	void Client::setdate_naissace(String^ date_naissance)
	{
		this->date_naissance = date_naissance;
	}

	String^ Client::getdate_naissance()
	{
		return this->date_naissance;
	}

	void Client::setdate_premier(String^ date_premier_achat)
	{
		this->date_premier_achat = date_premier_achat;
	}

	String^ Client::getdate_premier()
	{
		return this->date_premier_achat;
	}
}
